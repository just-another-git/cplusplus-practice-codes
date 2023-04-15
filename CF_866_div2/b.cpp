#include <bits/stdc++.h> // only contains iostream for now
#include <string>
#include <vector>
#include <list>
#define ll long long 
using namespace std;

string s;
ll n;

ll doit()
{
	cin >> s;
	n = s.length();
	if (s[0] == '1' && s[n - 1] == '1')
	{
		ll p = s.find('0');
		if (p == string::npos) return n * n;
		s = s.substr(p) + s.substr(0, p);
	}
	ll max1 = 0;
	ll curr1 = 0;
	for (char& c : s)
	{
		if (c == '1') curr1++;
		else
		{
			if(curr1 > max1) max1 = curr1;
			curr1 = 0;
		}
	}
	if (curr1 > max1) max1 = curr1;
	ll gg = max1 + 1;
	if (gg % 2 == 0) return gg * gg / 4;
	else return (gg / 2) * (gg + 1) / 2;
}

int main() 
{
	ll t;
	cin >> t;
	while (t--)
	{
		cout << doit() << endl;
	}
	return 0;
}