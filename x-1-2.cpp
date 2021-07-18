//x-1-2
#include<iostream>
#include<iomanip>     //格式函数的头文件 
using namespace std;
int main ( ) {
	cout << 10.0 / 6.0 << endl;
	cout << fixed << setprecision(8) << 10.0 / 6.0 << endl;     //fixed(固定的)和setprecision(设置精确性)连用，可以设置小数点后精确位 
	return 0;
}
