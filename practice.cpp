#include<iostream>

using namespace std;


void test01() {
	int r, h,s,v;
	double PI = 3.14;
	cin >> r >> h;
	s = 2 * PI*r*r + 2 * PI*r*h;
	v = PI * r*r*h;
	cout << "�������" << s <<"v="<<v<< endl;

}

void checkDay(){
	int day;
	cout << "������һ�� 1~7 �����֣���ʾ���ڼ�����";
	cin >> day;

	if (day >= 1 && day <= 5) {
		cout << "���칤����" << endl;
	}
	else if (day == 6 || day == 7) {
		cout << "������Ϣ��" << endl;
	}
	else {
		cout << "������������� 1~7 �����֣�" << endl;
	}
}

void judgeSign() {
	int x;
	cout << "������һ������ x��";
	cin >> x;

	if (x < 0) {
		cout << "y=" << -1;
	}
	else if (x == 0) {
		cout << "y=" << 0;
	}
	else {
		cout << "y=" << 1;
	}
}

int main(){

	//test01();
	//checkDay();
	judgeSign();
	return 0;

}