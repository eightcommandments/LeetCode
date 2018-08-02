//有一个整形偶数n（2<=n<=10000),你要做的是：先把1到n之中的所有奇数从大到小输出，在把所有的偶数从小到大输出
#include <iostream>
#include <vector>
using namespace std;

void OneToNValue(vector<int> &v, int n);
void OddNumber(const vector<int> &v, vector<int> &o);
void EvenNumber(const vector<int> &v, vector<int> &e);

int main()
{
    vector<int> a, b, c;
    int n = 30;
    OneToNValue(a, n);
    OddNumber(a, b);
    EvenNumber(a, c);
    for(auto b = a.begin();b != a.end(); ++b)
    {
       cout << *b << " ";
    }
    cout << "" << endl;
    for(auto o = b.begin();o != b.end(); ++o)
    {
       cout << *o << " ";
    }
    cout << "" << endl;
    for(auto b = c.begin();b != c.end(); ++b)
    {
       cout << *b << " ";
    }

    return 0;
}

//创建从1~n的数
//参数v：存数的容器 n:最大数
void OneToNValue(vector<int> &v, int n)
{
    for(int i = 1; i < n+1; i++)
    {
        v.push_back(i);
    }
}

//1~n的数中所有的偶数
void OddNumber(const vector<int> &v, vector<int> &o)
{
    for(auto b = v.begin();b != v.end();++b)
    {
        if(*b%2 == 0)
        {
            o.push_back(*b);
        }
    }
}

//1~n的数中所有的奇数
void EvenNumber(const vector<int> &v, vector<int> &e)
{
    for(auto b = v.begin();b != v.end();++b)
    {
        if(*b%2 == 1)
        {
            e.push_back(*b);
        }
    }

}


