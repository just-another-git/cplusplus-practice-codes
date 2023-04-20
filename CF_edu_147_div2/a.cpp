#include <bits/stdc++.h> // only contains iostream for now
#include <string>
#include <vector>
#include <list>

using namespace std;

string s;
int ans;

int doit()
{
	cin >> s;
	if (s[0] == '0') return 0;
	int noq = 0;
	for (char& c : s)
	{
		if (c == '?') noq++;
	}
	if (noq == 0) return 1;
	else
	{
		if (s[0] == '?') return pow(10, noq - 1) * 9;
		else return pow(10, noq);
	}
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