//p1-3-1
#include<iostream>
using namespace std;
int main(){
	const float pi = 3.14159;//���塰�ɡ�ֵ 
	double r,d,c,s;//����rΪ�뾶��dΪֱ����cΪ�ܳ���sΪ��� 
	cin >> r;//�뾶 
	d = 2 * r;//ֱ�� 
	c = 2 * pi * r;//�ܳ� 
	s = pi * r * r;//���
	cout << d << ' ' << c << ' ' << s << endl;
	return 0;
}
