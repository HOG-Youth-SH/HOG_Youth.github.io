//p1-3-1
#include<iostream>
using namespace std;
int main(){
	const float pi = 3.14159;//定义“派”值 
	double r,d,c,s;//定义r为半径，d为直径，c为周长，s为面积 
	cin >> r;//半径 
	d = 2 * r;//直径 
	c = 2 * pi * r;//周长 
	s = pi * r * r;//面积
	cout << d << ' ' << c << ' ' << s << endl;
	return 0;
}
