#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
    int n, k = 0, sum = 0;
    cout << "Введите число N " << endl;
    cin >> n;

	if (n > 1)
	{
		for(k = 0; sum < n; k++)
		{
			sum = sum + k;
		}
	}
	else
	{
		cout <<"N должен быть больше 1. Попробуйте еще раз." << endl;
	}

    cout << "K равен " << k - 1 << endl << "Сумма равна " << sum << endl;

	system("pause");
    return 0;
}
