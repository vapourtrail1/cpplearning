#include<iostream>

using namespace std;


void test01() {
	int r, h,s,v;
	double PI = 3.14;
	cin >> r >> h;
	s = 2 * PI*r*r + 2 * PI*r*h;
	v = PI * r*r*h;
	cout << "表面积是" << s <<"v="<<v<< endl;

}

void checkDay(){
	int day;
	cout << "请输入一个 1~7 的数字（表示星期几）：";
	cin >> day;

	if (day >= 1 && day <= 5) {
		cout << "今天工作！" << endl;
	}
	else if (day == 6 || day == 7) {
		cout << "今天休息！" << endl;
	}
	else {
		cout << "输入错误，请输入 1~7 的数字！" << endl;
	}
}

void judgeSign() {
	int x;
	cout << "请输入一个整数 x：";
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