#include<iostream>
using namespace std;
int main ( ) {
	cout << sizeof(char) << endl;            //sizeof函数的作用是获取各种数据类型的长度，以字节为单位来计数
	cout << sizeof(int) << endl;             //sizeof函数还可以得到一个特定变量的储存空间大小 
	cout << sizeof(unsigned int) << endl;
	cout << sizeof(long int) << endl;        //long int 4字节 
	cout << sizeof(short int) << endl;       //short int 2字节 
	cout << sizeof(float) << endl;           //float 4字节 
	cout << sizeof(double) << endl;          //double 4字节 
	return 0;
}
