#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	double W,w,k;
	w = 1000;
	k = 0.0453;
	W = w * (k + 1) * (k + 1) * (k + 1);
	cout << setprecision(6) << W << endl;     //setprecision���Կ���������ݵ���Ч���ָ�������fixed���ÿ��Կ���С������м�λ 
	return 0;
} 
