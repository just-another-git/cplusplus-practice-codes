// https://codeforces.com/contest/1921/problem/B

#include <bits/stdc++.h>
using namespace std;

int n;
string s, f;

int gg() 
{
	int s1 = 0;
	int f1 = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==f[i]) continue;
		if(s[i]=='1') s1++;
		else f1++;
	}
	return max(s1, f1);
}

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> s;
		cin >> f;
		cout << gg() << endl;
	}
	return 0;
}