// https://leetcode.com/problems/valid-anagram/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) 
{
    int ss = s.length();
    int tt = t.length();
    if(ss!=tt) return false;
    vector<int> abc(26, 0);
    for(char &c:s)
    {
        abc[c-'a']++;
    }
    for(char &c:t)
    {
        abc[c-'a']--;
    }
    for(int &i:abc) if (i!=0) return false;
    return true;
}

int main() 
{
	cout << "Hello World!";
	return 0;
}