#include<iostream>
using namespace std;
int main ( ) {
	int b = 0,a = 100;
	char ch = 'A';                                        //char���ַ����ͣ�����ר�ű�ʾһ���ַ���ֻ���õ����ţ��ո�Ҳ������һ���ַ� 
	b = a + ch;                                           //�ַ������ݣ���ֱ�Ӳ������ͻ�ʵ�����ݵ����㣬������ASCII����ֵʹ�� 
	cout << ch <<" " << int (ch) << " " << b << endl;     //"int(ch)"��ʾǿ�а�ch�ַ�ת����int���� 
	return 0;
} 
