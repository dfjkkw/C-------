//基本数学运算
#include<iostream>
using namespace std;
int main()
{
	int a=3, b=2;
	cout << a + b << endl;//加法运算
	cout << a - b << endl;//减法运算
	cout << a * b << endl;//乘法运算
	cout <<(float) a / b << endl;//除法运算
	cout << a % b << endl;//取余运算
	//+=,-=.*=,/=
	a += 6;
	cout << "a=" << a<<endl;
	a -= 1;
	cout << "a=" << a << endl;
	a *= 4;
	cout << "a=" << a << endl;
	a /= 2;
	cout << "a=" << a << endl;
	a %= 5;
	cout << "a=" << a << endl;
	//++,--
	a++;
	++a;
	cout << a << endl;
	b = a++;//a的值赋给b,a再自加
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = ++a;//a先自加，a的值再赋给b
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << a-- << endl;
	cout << --a << endl;
	return 0;
}