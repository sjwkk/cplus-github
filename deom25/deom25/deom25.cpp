#include<iostream>
using namespace std;
//ģ����Ļ�������

//�������ͱ�����Ӧ��ģ���еĴ���
//�������Ϳ���ָ��ȱʡ��������
//û�е��ó�Ա�������Ͳ��ᴴ������
//template<class T1,class T2>
//class aa
//{
//public:
//	T1 m_a;
//	T2 m_b;
//	aa()
//	{
//		//Ĭ�Ϲ��캯���ǿ�
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

//ջ

//template<class datatype>
//class st
//{
//private:
//	datatype* i;//ջ����
//	datatype sti;//ջ��ʵ�ʴ�С
//	datatype top;//ջ��ָ��
//public:
//	st(datatype size) :sti(size), top(0)
//	{
//		i = new datatype[sti];//Ϊ��������ڴ�
//	}
//	~st()
//	{
//		delete[] i; i = nullptr;
//	}
//	bool iempty()const//�ж��Ƿ�Ϊ��
//	{
//			return top == 0 ;
//	}
//	bool ifull()const//�ж��Ƿ�����
//	{
//		return top == sti;
//	}
//	bool push(const int & ii)//��ջ
//	{
//		if (top < sti)
//		{ 
//			i[top++] = ii; 
//			return true; 
//		}
//		return false;
//	}
//	bool pop(datatype&ii)//��ջ
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


//��������
//#define MAX 10
//template<class T,int len>
////template<class T>//ͨ����������ΪT
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
//	T& operator[](int ii)//�����±�
//	{
//		return ites[ii];
//	}
//	const T& operator[](int ii)const//�����±�,ֻ��
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


//�䳤����
template<class T>//ͨ����������ΪT
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
	void re(int size)//��չ����
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
	T& operator[](int ii)//�����±�
	{
		if (ii >= len)  re(ii+1);
		return ites[ii];
	}
	const T& operator[](int ii)const//�����±�,ֻ��
	{
		return ites[ii];
	}
};
int main()
{
	Vector<int>aa(1);//�ȿ��ٴ�СΪ1������
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