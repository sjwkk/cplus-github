#include <iostream>//头文件
using namespace std;//可以省略std::
//int main()
//{
//    std::cout << "Hello World!\n";//输出
//    //std::cout 向控制台输出内容的指令
//    //<< 输出的运算符
//}

//输出数据
//int main()
//{
//	std::cout << "数字:";
//	std::cout << 1000;//输出数字
//	std::cout << "字符：";
//	std::cout << 'x';//输出字符
//	//输出结果//数字:1000字符：x
//	std::cout << '\n';
//	std::cout << "数字:" << 1000 << "字符：" << 'x';
//	//<< 可连接
//	//std::endl
//	std::cout << std::endl;
//	cout << "数字:" << 1000<<std::endl << "字符：" << 'x'	<<std::endl;
//	return 0;
//}

//使用变量
//int main()
//{
//	string name;//字符串类型
//	int age;
//	double weight;
//	char sex;
//	bool yz;
//	//true ,false
//	name = "稀释";
//	age = 25;
//	weight = 45.3;
//	sex = 'x';
//	yz = true;
//	cout << name << endl << age << endl << weight <<endl<< sex<<endl << yz;
//}


//宏常量
//#define 常量名 值
//#define MONTH 12
//#define PI 3.14
//int  main()
//{
//	cout << PI << MONTH;
//}

//const 修饰
//int main()
//{
//	const int day = 7;
//	//day = 1; day 不允许改变
//	cout << day;
//
//}

//输入数据
int main()
{
	//cin>>变量名；
	string anme;
	int  age;
	char sex;
	bool ya;
	/*cin >> anme;
	cout << anme << endl;
	cin >> age;
	cout << age << endl;
	cin >> sex;
	cout << sex;*/
	cin >> ya;
	cout << ya;
}