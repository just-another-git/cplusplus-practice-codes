// https://leetcode.com/problems/group-anagrams/

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
	int n = strs.size();
	unordered_map<string, vector<int>> positions;
	for (int i=0;i<n;i++)
	{
		string k = strs[i];
		sort(k.begin(), k.end());
		positions[k].push_back(i);
	}
	vector<vector<string>> res;
	res.reserve(positions.size());
	for (auto it = positions.begin(); it!=positions.end(); it++)
	{
		vector<string> k;
		k.reserve(it->second.size());
		for(int &p: it->second)
		{
			k.push_back(strs[p]);
		}
		res.push_back(k);
	}
	return res;
}

int main() 
{
	cout << "Hello World!";
	return 0;
}