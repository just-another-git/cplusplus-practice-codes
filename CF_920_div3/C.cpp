// https://codeforces.com/contest/1921/problem/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, f, a, b;
vector<ll> m;

bool gg() 
{
	f -= min(m[0]*a, b);
	if(f<=0) return false;
	for(int i=1;i<n;i++)
	{
		f -= min((m[i]-m[i-1])*a, b);
		if(f<=0) return false;
	}
	return true;
}

int main() 
{
	ll t;
	cin >> t;
	while(t--)
	{
		cin >> n >> f >> a >> b;
		m.resize(n);
		for(ll i=0;i<n;i++) cin >> m[i];
		if(gg()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}