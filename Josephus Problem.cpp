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

int josephus(int n, int k)
{
	if(n == 1)
		return 0;
	return (josephus(n-1,k)+k)%n;
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
  	int t;
  	cin >> t;
  	while(t--)
  	{
  		int n,k;
  		cin >> n >> k;
  		cout << josephus(n,k)+1 << endl;
  	}
    return 0;
}