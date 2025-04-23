#include<iostream>
using namespace std;

//void test01()
//{
//	//单分支
//	int age;
//	cout << "输入年龄";
//	cin >> age;
//	if (age > 18) {
//
//		cout << "adult" << endl;
//
//
//	}
//	cout << "not";//不满足if条件 直接跳过那句（第10行） 来到这里
//
//}


//void test02(){
//	//双分支
//	int age;
//	cin >> age;
//	if (age >= 18) {
//
//		cout << "adu";
//	}
//	else {     //假进入这个
//
//		cout << "not" << endl;
//
//	}
//}

//输入两个整数，输出其中较大的数和较小的数，用双分支的结构

void work() {
	int i, j;
	cin >> i >> j;
	if (i > j)
	{
		cout << "max is" << i;
		cout << "min is" << j;
	}
	else
	{
		cout << "max is" << j;
		cout << "min is" << i;
	}
}



void test03()
{
	//多分支
	int age;
	cin >> age;
	if (age < 18)
	{

		cout << "do homework"<<endl;
	}
	else if (age < 30)
	{
		cout << "打螺丝"<<endl;


	}
	else {
		cout << "直接歇逼" << endl;
	}

}

//让用户输入一个考试成记，介于0-100 判断输入的等级划分
void test05() {
	int grade;
	cin >> grade;
	if (grade < 60)
	{
		cout << "不及格" << endl;

	}
	else if (grade < 80)
	{
		cout << "良好" << endl;

	}
	else
	{
		cout << "优秀" << endl;

	}


}
int main() {

	//work();
	test05();
	return 0;


}