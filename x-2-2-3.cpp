#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	double W,w,k;
	w = 1000;
	k = 0.0453;
	W = w * (k + 1) * (k + 1) * (k + 1);
	cout << setprecision(6) << W << endl;     //setprecision可以控制输出数据的有效数字个数，和fixed连用可以控制小数点后有几位 
	return 0;
} 
