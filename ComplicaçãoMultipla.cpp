#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int N = 1;

	while (N != 0)
	{
		cout << "Escolhe um n�mero: ";
		cin >> N;


		if (N % 5 == 0)
		{
			if (N % 3 == 0)
			{
				cout << "O n�mero � multiplo de 3 e 5\n";
			}
			else
			{
					cout << "O n�mero � multiplo de 5\n";
			}
		}
		else
		{
			if (N % 3 == 0)
			{
				cout << "O n�mero � multiplo de 3\n";
			}
			else
			{
					cout << "O n�mero n�o � multiplo de 3 nem de 5\n";
			}
		}
	}
	cout << "Escreveste 0 - Sa�ste\n";
}