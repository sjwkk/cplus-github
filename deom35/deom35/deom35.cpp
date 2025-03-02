#include<iostream>
#include<vector>
using namespace std;

//基于范围的for循环
//如果容器中的元素是结构体和类，迭代器变量申明为引用，加const约束

int main()
{
	vector<int>vv = { 1,2,3,4,5,6,7,8,9 };
	for (auto it = vv.begin(); it != vv.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
	for (int val : vv)//逐个赋值
	{
		cout << val << ' ';
	}
	cout << endl;
}