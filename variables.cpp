#include <iostream>//编译预处理指令，作用是将iostream文件中的代码嵌入到这个
#include <string>
using namespace std;

void test01()
{
	//定义变量，同时初始化变量，string是字符串类型
	string name = "张三";
	int age = 30;
	double score;
	//初始化
	score = 90.5;
	cout << "姓名是：" << name << ",年龄是:" << age << "，成绩是：" << score << endl;
	//一个语句中定义多个变量
	double score1, score2, score3;
	score1 = score2 = 95;
	score3 = 85;
}

void test02()
{
	//直接常量
	cout << 100 << endl;
	cout << "王五" << endl;
	//符号产量
	const double PI = 3.14;
	cout << "PI=" << PI << endl;
	//使用宏定义
#define NEW_PI 3.1415926
	cout << "NEW_PI" << NEW_PI;
	//常量不允许修改
}

void test03()
{
	int age3;
	double score;
	cout << "请输入" << endl;
	cin >> age3 >> score;
	cout << "age=" << age3 << endl;
	cout << "score=" << score << endl;

}




void test04()
{
	short a = 10;
	int b = 20;
	long c = 30;
	long long d = 40;
	//可以通过sizeof（）函数查看变量和数据类型所占空间大小
	cout << "short大小" << sizeof(a) << endl;
	cout << "short大小" << sizeof(b) << endl;
	cout << "short大小" << sizeof(c) << endl;
	cout << "short大小" << sizeof(d) << endl;

	int dec_num = 200;
	int oct_num = 075;
	int hex_num = 0x16A;
	//输出默认十进制输出
	cout << "decnum=" << dec_num << ",octnum" << oct_num<<endl;


	//无符号整型
	unsigned short ua = 10;
	unsigned int ub = 20;
	unsigned long uc = 30;
	unsigned long long ud = 40;
	cout << "short大小" << sizeof(ua) << endl;
	cout << "short大小" << sizeof(ub) << endl;
	cout << "short大小" << sizeof(uc) << endl;
	cout << "short大小" << sizeof(ud) << endl;//0-~


	//浮点型
	float e = 1.0f;//直接写出小数点数字默认是double，要加f；
	double f = 2.0;
	long double g = 3.0;
	cout << "float大小：" << sizeof(e) << endl;
	cout << "float大小：" << sizeof(f) << endl;
	cout << "float大小：" << sizeof(g) << endl;


	
}


void test05(){
	////字符型
	//char c1 = 'a';
	//cout << "c1=" << c1 << endl;
	//char c2 = 'B';
	//cout << "c2=" << c2 << endl;
	//char c3 = 67;

	//cout << "c3=" << c3 << endl;
	////无符号字符
	//unsigned char c4 = 'D';
	//



	//转义字符
	cout << "hello\nworld" << endl;//换行
	cout << "hello\tworld" << endl;//制表符
	cout << "hello\\world" << endl;//输出反斜杠
}

void test06()
{
	bool flag = true;//bool取值只有真和假
	cout << "flag=" << flag << sizeof(flag) << endl;


}
int main()//整个程序的出口和入口  2.main函数的返回值是int
{
   /* //定义两个变量，变量名为r 和area ，分别为⚪的半径和面积
	double r, area;
	//用cont这个对象，输出一个字符串，cout对象要和<<这个符号一起使用，来输出数据
	cout << "输入半径r:";
	//用cin这个对象，让用户通过键盘输入一个数字。cin对象和>>一起使用，来输入数据
	cin >> r;//将用户输入的半径保村到r中，即内存中
	//需要一个常量pi
	const double PI = 3.14;
	//计算面积
	area=PI*r*r;//复制
	//输出结果
	cout << "r=" << r << endl;
	cout << "area=" << area << endl;//endl表示换行
	char name = 'a';//字符用单引号
	int age = 30;
	cout << name << "," << age << endl;
	if (age >= 18)
	{
		cout << name << "成年了" << endl;
	}
	return 0;//返回0*/

	/*test01();
	test02();
	cout << "\n按 Enter 键退出..."; // 提示用户
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清除缓冲区中可能存在的换行符
	cin.get(); // 等待用户按 Enter*/
	

	test06();
	return 0;
	
}
