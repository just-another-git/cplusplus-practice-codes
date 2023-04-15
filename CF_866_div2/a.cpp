#include <bits/stdc++.h> // only contains iostream for now
#include <string>
#include <vector>
#include <list>

using namespace std;

bool isEye(char& p)
{
	return p == '^';
}

string s;
int ans;

int one_case()
{
	if (isEye(s[0])) return 1;
	else return 2;
}

int doit()
{
	cin >> s;
	list<char> ls(s.begin(), s.end());
	ans = 0;
	auto first = ls.begin();
	if (ls.size() == 1) return ans + one_case();

	// front scenario
	if (isEye(*first))
	{
		if (!isEye(*next(first))) // ^_
		{
			if (ls.size() > 2)
			{
				if (!isEye(*next(first, 2))) // ^__
				{
					ls.insert(next(first, 2), '^');
					ans++;
				}
			}
			else return ans+1;
		}
	}
	else
	{
		ls.insert(first, '^');
		ans++;
		first = ls.begin();
		// ^_
		if (ls.size() > 2)
		{
			if (!isEye(*next(first, 2))) // ^__
			{
				ls.insert(next(first, 2), '^');
				ans++;
			}
		}
		else return ans+1;
	}
	
	for (list<char>::iterator it = next(ls.begin()); it != ls.end(); it++)
	{
		if (!isEye(*it)) // _
		{
			if (next(it) == ls.end()) return ans + 1;
			else
			{
				if (!isEye(*next(it))) // __
				{
					ls.insert(next(it), '^');
					ans++;
				}
			}
		}
	}
	return ans;
}

int main() 
{
	int t;
	cin >> t;
	while (t--)
	{
		cout << doit() << endl;
	}
	return 0;
}