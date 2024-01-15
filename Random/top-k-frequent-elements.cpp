// https://leetcode.com/problems/top-k-frequent-elements/

#include <bits/stdc++.h>
using namespace std;

bool comp (pair<int, int> &a, pair<int, int> &b)
{
	if (a.second > b.second) return true;
	return false;
}

vector<int> topKFrequent(vector<int>& nums, int k)
{
	int n = nums.size();
	sort(nums.begin(), nums.end());
	vector<pair<int, int>> freq;
	freq.reserve(n);
	freq.emplace_back(nums[0], 1);
	for(int i=1;i<n;i++)
	{
		if(nums[i]==nums[i-1]) freq[freq.size()-1].second++;
		else freq.emplace_back(nums[i], 1);
	}
	sort(freq.begin(), freq.end(), comp);
	vector<int> gg;
	gg.reserve(k);
	for(int i=0;i<k;i++)
	{
		gg.emplace_back(freq[i].first);
	}
	return gg;
}

int main() 
{
	cout << "Hello World!";
	return 0;
}