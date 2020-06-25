#include <iostream>
using namespace std;
float rand1(int min, int max)
{
    int R = (max - min);//диапазон чисел
    float D = RAND_MAX / R;
    return round((min + (rand() / D)) * 10) / 10;
}
float rand2(int min, int max)
{
    int R = (max - min);//диапазон чисел
    float D = RAND_MAX / R;
    return round((min + (rand() / D)) * 10) / 100;
}
void integer(float)
{
    const int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 20 + 1;
        cout << arr[i] << "\t";
    }
}
void float1(float)
{
    const int n = 10;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand1(1, 20);
        cout << arr[i] << "\t";
    }
}
void float2(float)
{
    const int n = 10;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand2(1, 20);
        cout << arr[i] << " ";
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    cout << "1.Заполнить массив рандомными целыми числами\n";
    cout << "2.Заполнить массив рандомными вещественными числами с одной цифрой после запятой\n";
    cout << "3.Заполнить массив рандомными вещественными числами с двумя цифрами после запятой\n";
    cout << "Какую функцию выбрать?\n ";
    int choose;
    cin >> choose;
    choose--;
    void (*Array_of_functions[3])(float) = { integer,float1,float2 };
    (*Array_of_functions[choose])(choose);
    return 0;
}


