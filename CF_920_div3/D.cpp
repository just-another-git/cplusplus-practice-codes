// https://codeforces.com/contest/1921/problem/D

#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a, b;

long long gg() 
{
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	long long ans = 0;
	if(a[n-1]<=b[0])
	{
		for(int i=0;i<n;i++)
		{
			ans += b[m-1-i] -a[i];
		}
		return ans;
	}
	if(b[m-1]<=a[0])
	{
		for(int i=0;i<n;i++)
		{
			ans += a[i]- b[i];
		}
		return ans;
	}
	int as = 0;
	int ae = n-1;
	int bs = 0;
	int be = m-1;
	while(as<=ae)
	{
		if(abs(b[be]-a[as])>abs(a[ae]-b[bs]))
		{
			ans += abs(b[be]-a[as]);
			be--;
			as++;
		}
		else
		{
			ans += abs(a[ae]-b[bs]);
			ae--;
			bs++;
		}
	}
	return ans;
}

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
		cin >> n >> m;
		a.resize(n);
		b.resize(m);
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<m;i++) cin >> b[i];
		cout << gg() << endl;
	}
	return 0;
}