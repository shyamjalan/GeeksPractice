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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	int a = 0, b = 1, c = 1;
    	for (int i = 1; i < n; ++i)
    	{
    		c = (a + b) % mod;
    		a = b;
    		b = c;
    	}
    	cout << c << endl;
    }
    return 0;
}