#include <bits/stdc++.h> // only contains iostream for now
#include <string>
#include <vector>
#include <list>

using namespace std;

int n;
vector<int> a;
vector<int> b;

pair<int, int> doit()
{
	cin >> n;
	a.resize(n);
	b.resize(n);
	int l, r;
	l = r = -1;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
		{
			l = i;
			break;
		}
	}
	for (int i = n-1; i > -1; i--)
	{
		if (a[i] != b[i])
		{
			r = i;
			break;
		}
	}
	if (l != 0)
	{
		for (int i = l - 1; i >= 0; i--)
		{
			if (b[i] <= b[l]) l = i;
			else break;
		}
	}
	if (r != n - 1)
	{
		for (int i = r + 1; i < n; i++)
		{
			if (b[i] >= b[r]) r = i;
			else break;
		}
	}
	return make_pair(l + 1, r + 1);
}

int main() 
{
	int t;
	cin >> t;
	while (t--)
	{
		pair<int, int> ans;
		ans = doit();
		cout << ans.first << " " << ans.second << endl;
	}
	return 0;
}