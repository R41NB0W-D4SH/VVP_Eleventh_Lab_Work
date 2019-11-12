#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;

	cout << "Введите A, затем B " << endl;
	cin >> a >> b;

	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
		cout << "НОД равен ";
	}


	if (a == 0)
	{
		cout << b << endl;
	}
	else
	{
		cout << a << endl;
	}

	system("pause");
	return 0;
}
