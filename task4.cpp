#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
    double sum = 1000, p;
    int k = 0;

    cout << "Введите процент P " << endl;
    cin >> p;

	if (p > 0 && p < 25)
	{
		for(k = 0; sum <= 1100; k++)
		{
			sum = sum * (1 + p / 100);
		}

		cout << "Месяцы " << k << endl << "Сумма " << sum << endl;
	}
	else
	{
		cout <<"Процент не должен выходить за рамки от нуля до 25. Следуйте условиям и попробуйте еще раз." << endl;
	}

	system("pause");
    return 0;
}
