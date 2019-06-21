#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define endl '\n'
typedef long long int ll;
//Author -- shyamjalan
ll ways[15][15];
ll numWays(int n, int m)
{
	if(ways[n][m] != -1)
		return ways[n][m];
	if(n == 0)
		return ways[n][m] = numWays(n,m-1);
	if(m == 0)
		return ways[n][m] = numWays(n-1,m);
	return ways[n][m] = numWays(n,m-1)+numWays(n-1,m);
}
int main()
{
	#ifndef ONLINE_JUDGE
       clock_t start_s = clock();
       freopen("C:\\Users\\s0j01pv\\Desktop\\GeeksPractice\\input.txt", "r", stdin);
       freopen("C:\\Users\\s0j01pv\\Desktop\\GeeksPractice\\output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0; i < 15; ++i)
    	for(int j = 0; j < 15; ++j)
    		ways[i][j] = -1;
    ways[0][0] = 1;
    int t;
    cin >> t;
    while(t--)
    {
    	int n,m;
    	cin >> n >> m;
    	cout << numWays(n-1,m-1) << endl;
    }
    return 0;
}