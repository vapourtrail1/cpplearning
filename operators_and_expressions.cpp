#include<iostream>
#include<string>
using namespace std;



void test01()
{
	cout << 35.0 / 10.0 << endl;//保留小数部分，需要用浮点数相除


	char c1 = 'A', c2 = 'a', c3;
	c3 = c1 + 1;//A的asc码是65，+1=66,66对应B
	cout << "c3=" << c3 << endl;



	

}

void test02() {
	//类型转换，自动类型转换
	char c1 = 'A';
	c1 = c1 + 1;
	cout << "c1:" << c1 << endl;

	int n1 = 10;
	n1 = n1 + 5.5;
	cout << "n1:" << n1 << endl;

	//可以使用typeid函数得到某个变两的类型
	cout << typeid(n1 + 6.6).name() << endl;


	//强制类型转换
	//求三角形的面积,a为底
	double s1,s2,s3,a,h;
	a = 4.0;
	h = 5.0;
	//s1 = 1 / 2 * a*h;//1/2是整形之间的运算，结果也是int，0.5转成int之后变成0，所以结果是0
	s2 = double(1) / 2 * a*h;//强制类型转换
	cout << "面积" << s2 << endl;






}


void test04() {
	//逻辑运算
	int a = 4, b = 10, c = 20;




}


void test05() {
	//条件运算符，求两个数的较大较小值
	int a = 4, b = 10, max, min;
	max = a > b ? a : b;
	min = a < b ? a : b;
	cout << "max" << max << "min" << min;
	




}
void test06()
{
	int a, b, c, d;
	a = 10;
	a += 20;//先加再赋值，等价与a=a+20
	cout << "a=" << a << endl;

	a *= 5 + 5;//赋值运算符是从右往左计算的，所以先计算5+5=10，再计算a*10=250
	cout << a << endl;


}

void test07()
{
	//逗号运算符

}
void test08()//自增自减运算符
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