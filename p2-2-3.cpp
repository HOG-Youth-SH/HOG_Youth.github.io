#include<iostream>
using namespace std;
int main ( ) {
	int b = 0,a = 100;
	char ch = 'A';                                        //char，字符类型，用来专门表示一个字符，只能用单引号，空格也可以是一个字符 
	b = a + ch;                                           //字符型数据，可直接参与整型或实型数据的运算，按照其ASCII的码值使用 
	cout << ch <<" " << int (ch) << " " << b << endl;     //"int(ch)"表示强行把ch字符转换成int类型 
	return 0;
} 
