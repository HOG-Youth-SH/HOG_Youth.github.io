#include<iostream>
#include<cmath>                                    //"cmath"��C��׼��ĳ�����ѧ������ 
using namespace std;
int main (){
	double a,b,c,p,s;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt (p * (p - a) * (p - b) * (p - c));    //"sqrt"��ʾ������ 
	cout << s << endl;
	return 0;
}
