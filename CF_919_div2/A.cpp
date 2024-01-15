// https://codeforces.com/contest/1920/problem/A

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> gg;

int main() 
{
	int t;
	cin >> t;
	gg.reserve(100);
	while(t--)
	{
		int n;
		cin >> n;
		gg.clear();
		int lowerBound = INT_MIN;
		int upperBound = INT_MAX;
		for(int i=0;i<n;i++)
		{
			int j;
			cin >> j;
			int k;
			cin >> k;
			switch(j)
			{
				case 1:
					if (k>lowerBound) lowerBound = k;
					break;
				case 2:
					if (k<upperBound) upperBound = k;
					break;
				case 3:
					gg.push_back(k);
					break;
			}
		}
		if(lowerBound>upperBound) 
		{
			cout << 0 << endl;
			continue;
		}
		int excludeCount = 0;
		for(int notEqual:gg)
		{
			if(notEqual>=lowerBound && notEqual<=upperBound) excludeCount++;
		}
		cout << upperBound-lowerBound+1-excludeCount << endl;
	}
	return 0;
}