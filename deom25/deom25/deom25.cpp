#include<iostream>
using namespace std;
//模板类的基本概念

//数据类型必须适应类模板中的代码
//数据类型可以指定缺省数据类型
//没有调用成员函数，就不会创建函数
//template<class T1,class T2>
//class aa
//{
//public:
//	T1 m_a;
//	T2 m_b;
//	aa()
//	{
//		//默认构造函数是空
//	}
//	aa(T1 a, T2 b) :m_a(a), m_b(b) {};
//	T1 geta()
//	{
//		T1 a = 2;
//		return m_a + a;
//	}
//	T2 getb()
//	{
//		T2 b =3;
//		return m_b + b;
//	}
//	//T2 getb();
//
//};
//
////template<class T1, class T2>
////T2 aa<T1 ,T2>::getb()
////{
////	T2 b = 3;
////	return m_b + b;
////}
//
//int main()
//{
//	/*aa<int, double>a;
//	a.m_a = 20;
//	a.m_b = 30;
//	cout << a.geta() << ' ' << a.getb() << endl;*/
//
//	/*aa<int, double> a(12, 21.3);
//	cout << a.geta() << ' ' << a.getb() << endl;*/
//
//	aa<int, double>* a = new aa<int, double>(3,3.4);
//	cout << a->geta ();
//	delete a;
//
//}

//栈

//template<class datatype>
//class st
//{
//private:
//	datatype* i;//栈数组
//	datatype sti;//栈的实际大小
//	datatype top;//栈顶指针
//public:
//	st(datatype size) :sti(size), top(0)
//	{
//		i = new datatype[sti];//为数组分配内存
//	}
//	~st()
//	{
//		delete[] i; i = nullptr;
//	}
//	bool iempty()const//判断是否为空
//	{
//			return top == 0 ;
//	}
//	bool ifull()const//判断是否已满
//	{
//		return top == sti;
//	}
//	bool push(const int & ii)//入栈
//	{
//		if (top < sti)
//		{ 
//			i[top++] = ii; 
//			return true; 
//		}
//		return false;
//	}
//	bool pop(datatype&ii)//出栈
//	{
//		if (top >0)
//		{
//			ii=i[--top] ;
//			return true;
//		}
//		return false;
//	}
//};
//int main()
//{
//	st<int >ss(5);
//
//	ss.push(1); ss.push(2); ss.push(3)
//		; ss.push(4); ss.push(5);
//
//	int i;
//	while (ss.iempty() == false)
//	{
//		ss.pop(i); cout << i;
//	}
//}


//定长数组
//#define MAX 10
//template<class T,int len>
////template<class T>//通用数据类型为T
//class A
//{
//private:
//	T ites[len];
//public:
//	A()
//	{
//		memset(ites, 0, sizeof(ites));
//	}
//	~A() {}
//	T& operator[](int ii)//重载下标
//	{
//		return ites[ii];
//	}
//	const T& operator[](int ii)const//重载下标,只读
//	{
//		return ites[ii];
//	}
//};
//int main()
//{
//	A<int ,23>aa;
//	for (int i = 0; i < 23; i++)
//	{
//		aa[i] = i + 1;
//		cout << aa[i]<<' ';
//	}
//	//A<string,15>aa;
//	//aa[0] = "aa";
//	//aa[1] = "bb0";
//	//cout << aa[0] << ' ' << aa[1];//memset
//}


//变长数组
template<class T>//通用数据类型为T
class Vector
{
private:
	int len;
	T* ites;
public:
	Vector(int size = 10) :len(size)
	{
		ites = new T[len];
	}
	~Vector() 
	{
		delete[]ites; ites = nullptr;
	}
	void re(int size)//扩展数组
	{
		if (size < len) return;
		T* tmp = new T[size];
		for (int i = 0; i < len; i++)
		{
			tmp[i] = ites[i];
			
		}
		ites = tmp;
		len = size;
	}
	int size()const
	{
		return len;
	}
	T& operator[](int ii)//重载下标
	{
		if (ii >= len)  re(ii+1);
		return ites[ii];
	}
	const T& operator[](int ii)const//重载下标,只读
	{
		return ites[ii];
	}
};
int main()
{
	Vector<int>aa(1);//先开辟大小为1的数组
	for (int i = 0; i < 23; i++)
	{
		aa[i] = i + 1;
		cout << aa[i] << ' ';
	}
	//A<string,15>aa;
	//aa[0] = "aa";
	//aa[1] = "bb0";
	//cout << aa[0] << ' ' << aa[1];//memset
}