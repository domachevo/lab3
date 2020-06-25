#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	ifstream file;
	file.open("File.txt");
	if (!file.is_open())
		cout << "Файл не открыт\n";
	else
	{
		cout << "Файл открыт\n";
		vector<string> vec;
		string s; ;
		while (!file.eof())
		{
			s = "";
			getline(file, s);
			vec.push_back(s);
			cout << s << endl;
		}
		int n = 0;
		string v;
		for (int i = 0; i < vec.size(); i++)
		{
			v = vec[i];
			if (v[0] == ' ' && v[1] == ' ' && v[2] == ' ' && v[3] == ' ' && v[4] == ' ')
				n++;
		}
		cout << "Количество обзацев: " << n;

		return 0;
	}
}

