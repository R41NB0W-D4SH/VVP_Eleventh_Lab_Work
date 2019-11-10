#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
    double sum = 1000, p;
    int k = 0;

    cout << "Введите процент P " << endl;
    cin >> p;

    for(k = 0; sum <= 1100; k++)
	{
        sum = sum * (1 + p / 100);
    }

    cout << "Месяцы " << k << endl << "Сумма " << sum << endl;

	system("pause");
    return 0;
}
