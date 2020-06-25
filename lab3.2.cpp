#include<string>
#include<fstream>
#include<vector>

using namespace std;
#include<iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	ifstream f;
	f.open("File.txt");
	if (!f.is_open())
		cout << "Файл не открыт\n";
	else
	{
		cout << "Файл открыт\n";
		char ch;
		vector<char> v;
		while (f.get(ch))
			if (ch != ' ')
				v.push_back(ch);
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;

		int i, temp;
		for (int c = 1; c < v.size(); c++)
		{
			temp = v[c];
			i = c - 1;
			while (i >= 0 && v[i] > temp)
			{
				v[i + 1] = v[i];
				v[i] = temp;
				i--;
			}
		}
		//вывод данных файла после сортировки
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		ofstream newf;
		newf.open("File.txt", ofstream::app);
		newf << endl;
		if (!newf.is_open())
			cout << "Файл не открыт\n";
		else
			for (int i = 0; i < v.size(); i++)
				newf << v[i] << " ";
		newf.close();
	}
	f.close();
	return 0;
}

