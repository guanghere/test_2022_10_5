#include<iostream>

using namespace std;

//	1: 日常练习,不在乎命名污染,就使用 ：using namespace std;

//	2: 在项目中,不要全部展开,指定访问或者展开常用的	" std:: "

//	3: 或者单独展开 using std::cin

//using std::cin;
//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "hello world" << endl;
//
//	int i = 0;
//
//	double j = 0;
//
//	cin >> i >> j;	//	>>	流提取操作符
//
//	cout << i <<"  " << j << endl;	//	<<	流插入操作符
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& b = a;		//引用
//
//	int* p = &b;	//取地址
//
//	//	一个符号两用,一个在中间,一个在后面
//
//	cout << b << " " << a << endl;
//
//	const int c = 0;
//
//	//	↓	放大
//
//	int& d = c;		//	b被const修饰过后,引用就失效了
//
//	const int& d = c;	//	但是 c 被const修饰过后,可以使用引用
//
//	//	↑	放大
//
//	const int& f = a;	//	只读的 缩小
//
//	//	引用取别名的过程中,权限可以缩小或者不变,但是不能放大
//
//	return 0;
//}


//int main()
//{
//	double a = 0;
//
//	int b = a;	//	类型转换	, 不是直接把a赋值给b , 而是创建了一个临时变量 , 再给b
//	
//	int& bb = a;
//
//	const int& bb   =   a;
//	//			↘	   ↙	
//	//			  ↓    ↓
//	//            临时变量
//	//
//	//			bb是临时变量的别名 , 不是a的
//
//	return 0;
//}


//	new knowledge 

//int main()
//{
//	int a = 0;
//	auto b = a;	//	加上auto 就可以自动推导c的类型
//	auto c = 'a';
//	auto d = 3.1415126;
//
//	//	typeid打印变量的类型
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	//	实际上不会这么用
//
//	return 0;
//}



//int main()
//{
//	//	原C/C++
//	int array[] = { 1,2,3,4,5 };
//
//	//for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
//	//{
//	//	cout << array[i] << endl;
//	//}
//
//	//	C++11 范围for	---语法糖
//
//	//	自动取数组array中的每个元素赋值给e , 自动判断结束	
//	/*for (auto e : array)
//	{
//		cout << e << endl;
//	}*/
//
//	//	范围for,把数组中的每个元素加1
//
//	for (auto& e : array)
//	{
//		e++;
//	}
//
//	for (auto e : array)
//	{
//		cout << e << endl;
//	}
//
//
//	return 0;
//}


int main()
{
	//	C++98/03 
	int* p1 = NULL;

	int* p2 = 0;

	//	C++11
	int* p3 = nullptr;


	return 0;
}