#include<iostream>
#include<vector>
using namespace std;

//���ڷ�Χ��forѭ��
//��������е�Ԫ���ǽṹ����࣬��������������Ϊ���ã���constԼ��

int main()
{
	vector<int>vv = { 1,2,3,4,5,6,7,8,9 };
	for (auto it = vv.begin(); it != vv.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
	for (int val : vv)//�����ֵ
	{
		cout << val << ' ';
	}
	cout << endl;
}