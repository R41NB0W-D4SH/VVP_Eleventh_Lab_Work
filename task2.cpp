#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
    int a, b, count = 0;

    cout << "Введите A, затем B " << endl;
    cin >> a >> b;

	if (a > b)
	{
		while(count + b <= a) count += b;

		cout << "Длина незанятой части " << a - count << endl;
	}
	else 
	{
		cout << "A должен быть больше B. Следуйте условиям и попробуйте еще раз" << endl;
	}

	system("pause");
    return 0;
}
