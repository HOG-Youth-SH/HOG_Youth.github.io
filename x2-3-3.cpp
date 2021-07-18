//p2-3-3
#include<iostream>
using namespace std;
#define PI 3.14159     //const double PI = 3.14159
int main (){
	double square = 0,volume = 0,radius = 0;
	cin >> radius;
	square = 3.14159 * radius * radius;
	volume = 4 * 3.14159 * radius * radius * radius / 3;
	cout << "square=" << square << endl << "volume" << volume << endl;
	return 0;
} 

//
