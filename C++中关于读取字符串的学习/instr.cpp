//C++�й��ڶ�ȡ�ַ�����ѧϰ
#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	const int size = 20;
	char name[size];
	char food[size];
	
	//1��ֱ����cin
	/*
	cout << "Enter your name" << endl;
	cin >> name;
	cout << "Enter your favorite food" << endl;
	cin >> food;
	cout<<"This is "<<food<<endl;
	cout<<"for you"<<name;

	���⣺���ڵ�һ��cin�У�ͬʱ���������ַ�����ֻ���ȡ�ո�ǰ�ġ���������FENG CHONG,��feng chong�ֿ���ʾ
	cin ʹ�ÿհ���ȷ���ַ����Ľ���λ�ã����������ʱֻ��ȡһ������
	cin��ȡ��һ���ַ���ʱ��ӿ�ֵ�ַ���Ȼ�����name1�����У��ѵڶ����ַ�������������е�cin���������������ʱ��
	�����˵ڶ����ַ�������˶�ȡ�ڶ����ַ���������������name2������
	*/
	//2����getline()��ȡһ���ַ�������  ϣ�������ȡ���洢����������
	/*
	���ڿ��Զ�ȡ���������ֺ��û�ϲ����ʳ�getline()����ÿ�ζ�ȡһ�С���ͨ�����з���ȷ����β���������滻�з����෴�ڴ洢�ַ���ʱ���ÿ��ַ����滻���з�
	
	cout << "Enter your name" << endl;
	cin.getline(name, size);
	cout << "Enter your favorite food" << endl;
	cin.getline(food,size);
	cout << "This is " << food << endl;
	cout << "for you " << name;
	
	;*/
	//3����get()��ȡһ���ַ���
	/*
	cout << "Enter your name" << endl;
	cin.get(name, size);
	cout << "Enter your favorite food" << endl;
	cin.get(food, size);
	cout << "This is " << food << endl;
	cout << "for you " << name;
	getchar();
	
	���⣺���ڵ�һ�ε��ú󣬻��з���������������У���˵ڶ��ε���ʱ�����ĵ�һ���ַ����ǻ��з�get()��Ϊ�ѵ����β����û�з����κοɶ�ȡ�����ݡ�
	���������������get()�����ܿ���û��з���

	����취��ʹ�ò����κβ�����cin.get()���ÿɶ�ȡ��һ���ַ�����ʹ�ǻ��з�������˿��������������з���Ϊ��ȡ��һ����������׼��
	cin.get(food, size).get();
	*/
	return 0;
}