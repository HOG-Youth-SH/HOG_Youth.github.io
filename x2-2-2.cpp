#include<iostream>
#include<cmath>                                    //"cmath"，C标准库的常用数学函数库 
using namespace std;
int main (){
	double a,b,c,p,s;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt (p * (p - a) * (p - b) * (p - c));    //"sqrt"表示开根号 
	cout << s << endl;
	return 0;
}
