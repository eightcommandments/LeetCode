/*
给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为1000。
示例 1：
输入: "babad"
输出: "bab"
注意: "aba"也是一个有效答案。
示例 2：
输入: "cbbd"
输出: "bb"

这个解决方案是不能提交的，不知道什么原因，应该是他们的判断机制出了问题

输入：
"abcda"
输出：
"abcda"
预期：
"a"

*/
#include <iostream>
#include <string>

std::string longestPalindrome(std::string &s);
int find(const char &c, const std::string &ss, int p);

int main()
{
	std::string s = "abcda";
	std::string ss = longestPalindrome(s);
	std::cout << ss << std::endl;
}

std::string longestPalindrome(std::string &s)
{
	std::string ss;
	for(int i = 0;i < s.size();i++)
	{
		int back = find(s.at(i), s, i);
		if(back != -1 && ss.size() < back-i+1)
		{
			ss = "";
			for(int j = i;j <= back;j++)
			{
				ss += s.at(j);
			}
		}
	}
	return ss;
}

int find(const char &c, const std::string &ss, int p)
{
	int back = -1;
	for(int i = p;i < ss.size();i++)
	{
		if(ss.at(i) == c)
		{
			if(back < i)
				back = i;
		}	
	}
	return back;
}
