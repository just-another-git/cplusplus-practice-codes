// https://leetcode.com/problems/contains-duplicate/

#include <bits/stdc++.h>
#include <string>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> uniq;
    for(int &i:nums)
    {
        auto[p, k] = uniq.insert(i);
        if(!k)
        {
            return true;
        }
    }
    return false;
}

int main() 
{
	cout << "Hello World!";
	return 0;
}