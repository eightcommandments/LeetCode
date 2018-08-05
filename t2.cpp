/*
给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，它们的每个节点只存储单个数字。将两数相加返回一个新的链表。

你可以假设除了数字 0 之外，这两个数字都不会以零开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
*/

#include <iostream>
#include <vector>
using namespace std;

//求两个组数据的对应之和
//参数：l1:表1  l2:表2  p:和
void addTwoNumbers(const vector<int> *l1, const vector<int> *l2, vector<int> *p);


int main()
{
	vector<int> l1 = {2, 4, 3};
	vector<int> l2 = {5, 6, 4};
	vector<int> p;
	addTwoNumbers(&l1, &l2, &p);
	for(auto aa = p.begin(); aa != p.end(); ++aa)
	{
		cout << *aa << endl;
	}
}

void addTwoNumbers(const vector<int> *l1, const vector<int> *l2, vector<int> *p)
{
	auto b1 = l1->begin();
	auto b2 = l2->begin();
	int c = 0;			//用来存储相加大于10的情况下的向先前进1
	while(b1 != l1->end() || b2 != l2->end())
	{
		int sum = 0;	//每轮相加的和,这里一定到做初始化
		if(b1 != l1->end())
		{
			sum += *b1;
			b1++;
		}
		if(b2 != l2->end())
		{
			sum += *b2;
			b2++;
		}
		sum += c;
		p->push_back(sum%10);
		c = sum / 10;
	}
}
