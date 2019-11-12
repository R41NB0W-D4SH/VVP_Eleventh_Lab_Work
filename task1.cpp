#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, i, j;

	cout << "Введите A, затем B " << endl;
	cin >> a >> b;
	if (a < b)
	{
		for (i = a + 1; i < b; i++)
		{
			for (j = 0; j < i; j++)
			{
				cout << i;
			}
			cout << endl;
		}
	}
	else
	{
		cout << "A должен быть меньше B. Следуйте условиям и попробуйте еще раз" << endl;
	}

	system("pause");
	return 0;
}
