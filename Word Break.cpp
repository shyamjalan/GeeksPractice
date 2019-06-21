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
int isP[1001];
set<string> dict;
bool isPoss(string s, int len)
{
	if(isP[len] != -1)
		return isP[len];
	string curr = "";
	int ans = 0;
	for(int i = 0; i < len; ++i)
	{
		curr += s[i];
		if(dict.find(curr) != dict.end())
			ans |= isPoss(s.substr(i+1),len-i-1);
	}
	return isP[len] = ans;
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
 		dict.clear();
 		int n;
 		cin >> n;
 		memset(isP,-1,sizeof(isP));
 		isP[0] = 1;
 		for(int i = 0; i < n; ++i)
 		{
 			string word;
 			cin >> word;
 			dict.insert(word);
 		}
 		string s;
 		cin >> s;
 		cout << isPoss(s,s.length()) << endl;
 	}  
    return 0;
}