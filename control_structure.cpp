#include<iostream>
using namespace std;

//void test01()
//{
//	//����֧
//	int age;
//	cout << "��������";
//	cin >> age;
//	if (age > 18) {
//
//		cout << "adult" << endl;
//
//
//	}
//	cout << "not";//������if���� ֱ�������Ǿ䣨��10�У� ��������
//
//}


//void test02(){
//	//˫��֧
//	int age;
//	cin >> age;
//	if (age >= 18) {
//
//		cout << "adu";
//	}
//	else {     //�ٽ������
//
//		cout << "not" << endl;
//
//	}
//}

//��������������������нϴ�����ͽ�С��������˫��֧�Ľṹ

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
	//���֧
	int age;
	cin >> age;
	if (age < 18)
	{

		cout << "do homework"<<endl;
	}
	else if (age < 30)
	{
		cout << "����˿"<<endl;


	}
	else {
		cout << "ֱ��Ъ��" << endl;
	}

}

//���û�����һ�����Գɼǣ�����0-100 �ж�����ĵȼ�����
void test05() {
	int grade;
	cin >> grade;
	if (grade < 60)
	{
		cout << "������" << endl;

	}
	else if (grade < 80)
	{
		cout << "����" << endl;

	}
	else
	{
		cout << "����" << endl;

	}


}
int main() {

	//work();
	test05();
	return 0;


}