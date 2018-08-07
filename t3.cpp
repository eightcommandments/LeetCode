/*
给定一个字符串，找出不含有重复字符的最长子串的长度。
示例：
给定 "abcabcbb" ，没有重复字符的最长子串是 "abc" ，那么长度就是3。
给定 "bbbbb" ，最长的子串就是 "b" ，长度是1。
给定 "pwwkew" ，最长子串是 "wke" ，长度是3。
请注意答案必须是一个子串，"pwke" 是 子序列  而不是子串。
*/

#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string* s);

int main()
{
	string s = "qrsvbspk";
	//cout << sss.find_first_of(' ') << endl;
	int len = lengthOfLongestSubstring(&s);
	cout << "len:" << len << endl;
}

int lengthOfLongestSubstring(string* s)
{
	string maxStr, currStr;
	if(s->size() == 1)
		return 1;
	for(int i = 0; i < s->size(); i++)
	{
		for(int j = i; j < s->size(); j++)
		{
			string::size_type n = currStr.find_first_of(s->at(j));
			cout << "npos:" << n << endl;
			//char c = s->at(j);
			if(n == string::npos)
			{
				currStr += s->at(j);
				cout << "currStr:" << currStr << endl;			
			}
			else
			{
				if(maxStr.size() < currStr.size())
					maxStr = currStr;
				cout << "maxStr:" << maxStr << endl;
				currStr = "";
				cout << "currStr" << currStr << endl;
				break;
			}	
		}
	}
	cout << "maxStr:" << maxStr << " " << "len:" << maxStr.size() << endl;
	return maxStr.size();
}
