//x2-1-3
#include<iostream>
#include<iomanip>
using namespace std;
int main ( ) {
	int a;
	cin >> a;
	cout << "dec" << dec << a << endl;            //"dec"表示10进制 
	cout << "hex" << hex << a << endl;            //"hex"表示16进制 
	cout << "oct" << setbase(8) << a << endl;     //“setbase()”只允许8，10，16进制，否则默认输出为10进制；"oct"表示8进制 
	return 0;                                     //补充："bin"表示2进制 
}
