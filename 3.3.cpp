#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	ofstream f;
	string alpabet = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string str = { "**************************" };
	f.open("File.txt");
	if (!f.is_open())
		cout << "Файл не открыт\n";
	else
	{
		cout << "Файл открыт\n";
		int N;
		cout << "Введите желаемое количество строк\n ";
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			str[i] = alpabet[i];
			cout << str << endl;
			f << str << endl;
		}
	}
}

