// https://www.interviewbit.com/problems/pick-from-both-sides/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int Solution::solve(vector<int> &A, int B) 
{
    int n = A.size();
    int sum = 0;
    for(int i=n-B;i<n;i++)
    {
        sum += A[i];
    }
    int max_sum = sum;
    for(int c=1;c<=B;c++)
    {
        int pos = (n-B+c)%n;
        int pre = ((pos-1)%n+n)%n;
        int post = (pos+B-1)%n;
        sum -= A[pre];
        sum += A[post];
        if(sum > max_sum) max_sum = sum;
    }
    return max_sum;
}


int main() 
{
	cout << "Hello World!";
	return 0;
}