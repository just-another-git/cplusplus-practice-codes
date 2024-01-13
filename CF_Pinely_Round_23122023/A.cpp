// problem

#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> points;

bool gg()
{
	cin >> n;
	points.resize(n);
	for(int i=0;i<n;i++)
	{
		cin >> points[i].first >> points[i].second;
	}
	bool u, r, d, l;
	u = r = d = l = false;
	for(int i=0;i<n;i++)
	{
		if(points[i].first>0) r = true;
		else if (points[i].first<0) l = true;
		if(points[i].second > 0) u = true;
		else if (points[i].second<0) d = true;
	}
	if(!u || !r || !d || !l) return true;
	else return false;
}

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		if(gg()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}