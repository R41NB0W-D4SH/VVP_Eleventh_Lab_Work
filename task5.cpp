#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
    int a, b;

    cout << "Введите A, затем B " << endl;
    cin >> a >> b;

    while(a != 0 && b != 0)
	{
        if(a < b)
		{
			b = b % a;
		}
        else 
		{
			a = a % b;
		}
    }

    cout << "НОД равен ";

    if(a == 0)
	{
		cout << b;
	}
    else
	{
		cout << a;
	}

	system("pause");
    return 0;
}
