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
    #ifndef ONLINE_JUDGE
        clock_t start_s = clock();
        freopen("C:\\Users\\s0j01pv\\Desktop\\GeeksPractice\\input.txt", "r", stdin);
        freopen("C:\\Users\\s0j01pv\\Desktop\\GeeksPractice\\output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll ugly[10001];
    ugly[1] = 1;
    int i2 = 1, i3 = 1, i5 = 1;
    ll num2 = 2, num3 = 3, num5 = 5;
    for (int i = 2; i < 10001; ++i)
    {
        ugly[i] = min(num2,min(num3,num5));
        if(ugly[i] == num2)
        {
            i2++;
            num2 = ugly[i2]*2;
        }
        if(ugly[i] == num3)
        {
            i3++;
            num3 = ugly[i3]*3;
        }
        if(ugly[i] == num5)
        {
            i5++;
            num5 = ugly[i5]*5;
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ugly[n] << endl;
    }
    #ifndef ONLINE_JUDGE
       clock_t stop_s = clock();
       cout << "Time Elapsed: " << ((stop_s-start_s)/double(CLOCKS_PER_SEC))*1000 << " ms" << endl;
    #endif
    return 0;
}
