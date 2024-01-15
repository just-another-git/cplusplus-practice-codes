// https://codeforces.com/contest/1921/problem/A

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> points;

int gg() 
{
	for(int i=1;i<4;i++)
	{
		if(points[0].first == points[i].first)
		{
			return (points[i].second-points[0].second)*(points[i].second-points[0].second);
		}
	}
	return 0;
}

int main() 
{
	int t;
	cin >> t;
	points.resize(4);
	while(t--)
	{
		cin >> points[0].first >> points[0].second;
		cin >> points[1].first >> points[1].second;
		cin >> points[2].first >> points[2].second;
		cin >> points[3].first >> points[3].second;
		cout << gg() << endl;
	}
	return 0;
}