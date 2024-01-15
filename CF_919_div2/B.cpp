// https://codeforces.com/contest/1920/problem/B

#include <bits/stdc++.h>
using namespace std;

int n, k, x;
vector<int> arr;

int gg() 
{
	sort(arr.begin(), arr.end());
	int arrSum = accumulate(arr.begin(), arr.end(), 0);
	int bob = accumulate(arr.begin()+n-x, arr.end(), 0);
	int max_sum = arrSum - 2*bob;
	// cout << "  hiasfhias "<< arrSum << " " << bob << " " << max_sum << endl;
	int alice = 0;
	for(int i=1;i<=k;i++)
	{
		alice += arr[n-i];
		if(i<=n-x) bob = bob + arr[n-x-i];
		bob = bob - arr[n-i];
		int curr_sum = arrSum - alice - 2*bob;
		if (curr_sum > max_sum) max_sum = curr_sum;
	}
	// cout << "GG " << max_sum << endl;
	return max_sum;
}

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k >> x;
		arr.resize(n);
		for(int i=0;i<n;i++) cin >> arr[i];
		cout << gg() << endl;
	}
	return 0;
}