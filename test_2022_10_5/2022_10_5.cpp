#include<iostream>

using namespace std;

//	1: �ճ���ϰ,���ں�������Ⱦ,��ʹ�� ��using namespace std;

//	2: ����Ŀ��,��Ҫȫ��չ��,ָ�����ʻ���չ�����õ�	" std:: "

//	3: ���ߵ���չ�� using std::cin

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
//	cin >> i >> j;	//	>>	����ȡ������
//
//	cout << i <<"  " << j << endl;	//	<<	�����������
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& b = a;		//����
//
//	int* p = &b;	//ȡ��ַ
//
//	//	һ����������,һ�����м�,һ���ں���
//
//	cout << b << " " << a << endl;
//
//	const int c = 0;
//
//	//	��	�Ŵ�
//
//	int& d = c;		//	b��const���ι���,���þ�ʧЧ��
//
//	const int& d = c;	//	���� c ��const���ι���,����ʹ������
//
//	//	��	�Ŵ�
//
//	const int& f = a;	//	ֻ���� ��С
//
//	//	����ȡ�����Ĺ�����,Ȩ�޿�����С���߲���,���ǲ��ܷŴ�
//
//	return 0;
//}


//int main()
//{
//	double a = 0;
//
//	int b = a;	//	����ת��	, ����ֱ�Ӱ�a��ֵ��b , ���Ǵ�����һ����ʱ���� , �ٸ�b
//	
//	int& bb = a;
//
//	const int& bb   =   a;
//	//			�K	   �L	
//	//			  ��    ��
//	//            ��ʱ����
//	//
//	//			bb����ʱ�����ı��� , ����a��
//
//	return 0;
//}


//	new knowledge 

//int main()
//{
//	int a = 0;
//	auto b = a;	//	����auto �Ϳ����Զ��Ƶ�c������
//	auto c = 'a';
//	auto d = 3.1415126;
//
//	//	typeid��ӡ����������
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	//	ʵ���ϲ�����ô��
//
//	return 0;
//}



//int main()
//{
//	//	ԭC/C++
//	int array[] = { 1,2,3,4,5 };
//
//	//for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
//	//{
//	//	cout << array[i] << endl;
//	//}
//
//	//	C++11 ��Χfor	---�﷨��
//
//	//	�Զ�ȡ����array�е�ÿ��Ԫ�ظ�ֵ��e , �Զ��жϽ���	
//	/*for (auto e : array)
//	{
//		cout << e << endl;
//	}*/
//
//	//	��Χfor,�������е�ÿ��Ԫ�ؼ�1
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