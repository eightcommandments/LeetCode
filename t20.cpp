/*
描述
扔 n 个骰子，向上面的数字之和为 S。给定 Given n，
请列出所有可能的 S 值及其相应的概率。

样例
给定 n = 1，
返回 [ [1, 0.17], [2, 0.17], [3, 0.17], [4, 0.17], [5, 0.17], [6, 0.17]]。
*/

#include <iostream>
#include <map>
using namespace std;

map<int,float> dicesSum();

int main()
{
	int n = 4;
}

map<int,float> dicesSum()
{
	map<int,int> m;
	for(int i = 1;i < 6;++i)
		for(int j = 1;j < 6;++j)
		{
			if(m.contains(i*j))
			{
				m[i*j] = m.at(i*j) + 1;
			}
			else
			{
				m.try_emplace(i*j,1);
			}
		}
}
