// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

#include <bits/stdc++.h>
using namespace std;

int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
	int n = A.size();
	int minSteps = 0;
	for(int i=1;i<n;i++)
	{
		minSteps += max(abs(A[i]-A[i-1]), abs(B[i]-B[i-1]));
	}
	return minSteps;
}

int main() 
{
	cout << "Hello World!";
	return 0;
}