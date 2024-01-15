// problem

#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int n;
vector<ll> a;

ll gg()
{
	cin >> n;
	a.resize(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
}

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		cout << gg() << endl;
	}
	return 0;
}