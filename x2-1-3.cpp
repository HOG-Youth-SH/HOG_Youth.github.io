//x2-1-3
#include<iostream>
#include<iomanip>
using namespace std;
int main ( ) {
	int a;
	cin >> a;
	cout << "dec" << dec << a << endl;            //"dec"��ʾ10���� 
	cout << "hex" << hex << a << endl;            //"hex"��ʾ16���� 
	cout << "oct" << setbase(8) << a << endl;     //��setbase()��ֻ����8��10��16���ƣ�����Ĭ�����Ϊ10���ƣ�"oct"��ʾ8���� 
	return 0;                                     //���䣺"bin"��ʾ2���� 
}
