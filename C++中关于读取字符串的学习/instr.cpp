//C++中关于读取字符串的学习
#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	const int size = 20;
	char name[size];
	char food[size];
	
	//1、直接用cin
	/*
	cout << "Enter your name" << endl;
	cin >> name;
	cout << "Enter your favorite food" << endl;
	cin >> food;
	cout<<"This is "<<food<<endl;
	cout<<"for you"<<name;

	问题：当在第一个cin中，同时输入两个字符串，只会读取空格前的。例如输入FENG CHONG,把feng chong分开显示
	cin 使用空白来确定字符串的结束位置，因此在输入时只读取一个单词
	cin读取第一个字符串时添加空值字符，然后放在name1数组中，把第二个字符串留在输入队列当cin在输入队列中搜索时，
	发现了第二个字符串，因此读取第二个字符串，并把它放在name2数组中
	*/
	//2、用getline()读取一行字符串输入  希望程序读取并存储完整的名字
	/*
	现在可以读取完整的名字和用户喜欢的食物。getline()函数每次读取一行。它通过换行符来确定行尾，但不保存换行符。相反在存储字符串时，用空字符来替换换行符
	
	cout << "Enter your name" << endl;
	cin.getline(name, size);
	cout << "Enter your favorite food" << endl;
	cin.getline(food,size);
	cout << "This is " << food << endl;
	cout << "for you " << name;
	
	;*/
	//3、用get()读取一行字符串
	/*
	cout << "Enter your name" << endl;
	cin.get(name, size);
	cout << "Enter your favorite food" << endl;
	cin.get(food, size);
	cout << "This is " << food << endl;
	cout << "for you " << name;
	getchar();
	
	问题：由于第一次调用后，换行符将留在输入队列中，因此第二次调用时看到的第一个字符就是换行符get()认为已到达队尾，而没有发现任何可读取的内容。
	如果不借助帮助，get()将不能跨过该换行符。

	解决办法：使用不带任何参数的cin.get()调用可读取下一个字符（即使是换行符），因此可以用它来处理换行符，为读取下一行输入做好准备
	cin.get(food, size).get();
	*/
	return 0;
}