// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
#include <string>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> uniq;
    for(int i=0;i<nums.size();i++)
    {
        if(uniq.find(target - nums[i]) != uniq.end())
        {
            return {uniq[target-nums[i]], i};
        }
        uniq[nums[i]] = i;
    }
    return {};
}


int main() 
{
	cout << "Hello World!";
	return 0;
}