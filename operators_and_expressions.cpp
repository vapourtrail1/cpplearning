#include<iostream>
#include<string>
using namespace std;



void test01()
{
	cout << 35.0 / 10.0 << endl;//����С�����֣���Ҫ�ø��������


	char c1 = 'A', c2 = 'a', c3;
	c3 = c1 + 1;//A��asc����65��+1=66,66��ӦB
	cout << "c3=" << c3 << endl;



	

}

void test02() {
	//����ת�����Զ�����ת��
	char c1 = 'A';
	c1 = c1 + 1;
	cout << "c1:" << c1 << endl;

	int n1 = 10;
	n1 = n1 + 5.5;
	cout << "n1:" << n1 << endl;

	//����ʹ��typeid�����õ�ĳ������������
	cout << typeid(n1 + 6.6).name() << endl;


	//ǿ������ת��
	//�������ε����,aΪ��
	double s1,s2,s3,a,h;
	a = 4.0;
	h = 5.0;
	//s1 = 1 / 2 * a*h;//1/2������֮������㣬���Ҳ��int��0.5ת��int֮����0�����Խ����0
	s2 = double(1) / 2 * a*h;//ǿ������ת��
	cout << "���" << s2 << endl;






}


void test04() {
	//�߼�����
	int a = 4, b = 10, c = 20;




}


void test05() {
	//��������������������Ľϴ��Сֵ
	int a = 4, b = 10, max, min;
	max = a > b ? a : b;
	min = a < b ? a : b;
	cout << "max" << max << "min" << min;
	




}
void test06()
{
	int a, b, c, d;
	a = 10;
	a += 20;//�ȼ��ٸ�ֵ���ȼ���a=a+20
	cout << "a=" << a << endl;

	a *= 5 + 5;//��ֵ������Ǵ����������ģ������ȼ���5+5=10���ټ���a*10=250
	cout << a << endl;


}

void test07()
{
	//���������

}
void test08()//�����Լ������
{
	int i = 5, j = 10;
	int result1 = i++;
	int result2 = ++j;
	cout << result1 << result2 << endl;
	cout << i << j << endl;

}
int main()
{

	test08();
	return 0;
}