#include<iostream>
using namespace std;
int main ( ) {
	cout << sizeof(char) << endl;            //sizeof�����������ǻ�ȡ�����������͵ĳ��ȣ����ֽ�Ϊ��λ������
	cout << sizeof(int) << endl;             //sizeof���������Եõ�һ���ض������Ĵ���ռ��С 
	cout << sizeof(unsigned int) << endl;
	cout << sizeof(long int) << endl;        //long int 4�ֽ� 
	cout << sizeof(short int) << endl;       //short int 2�ֽ� 
	cout << sizeof(float) << endl;           //float 4�ֽ� 
	cout << sizeof(double) << endl;          //double 4�ֽ� 
	return 0;
}
