#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a = 0, b = 1, temp, i, n;

    cout << "Введите число N " << endl;
    cin >> n;
    
	if (n > 1)
	{
		if(n == a)
			{
				i = 1;
		}
		else if(n == b)
		{
			i = 2;
		}
		else
			{
				for(i = 3;;i++)
				{
				temp = a;
				a = b;
				b = a + temp;
				if(b == n) 
					{
						break;
					}
				}
			}
		cout << "N это " << i << " порядковый номер числа Фиббоначи" << endl;
	}
	else
	{
		cout << "N по условию больше 1. Попробуйте еще раз." << endl;
	}

	system("pause");
    return 0;
}
