//p2-2-2
#include<iostream>
using namespace std;
int main ( ) {
	int a = 2147483647;
	a = a + 1;                     //注意！！！！2147483647是int类型数据范围的上线，超过了上线就会数据溢出，C++编译器不报错但是  是  错  的 ！！！ 
	cout << "a=" << a << endl;
	return 0;
}
