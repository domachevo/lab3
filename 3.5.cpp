#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

class Point
{
public:
	float x;
	float y;
	void Print()
	{
		cout << x << "\t" << y;
	}

};

ostream& operator << (ostream& os, const Point& point) //перегрузка оператора вывода
{
	os << point.x << "\t" << point.y;
	return os;
}
int main()
{
	setlocale(0, "ru");
	ofstream f;
	f.open("File.txt");
	if (!f.is_open())
		cout << "Файл не открыт\n";
	else
	{
		cout << "Файл открыт\n";
		f << "x\ty\n";
		Point point;
		point.x;
		point.y;
		int N;
		float A, B;
		cout << "Введите количество шагов ";
		cin >> N;
		cout << "Введите границы A,B ";
		cin >> A >> B;
		point.x = A;
		cout << "x\ty\n";
		float p = (B - A) / N;
		for (int i = 0; i <= N; i++)
		{
			point.y = point.x + p;
			point.Print();
			cout << endl;
			f << point << endl;
			point.x += p;
		}

	}
	f.close();
	return 0;
}
