#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;

	do
	{
		cout << "Escolhe um n�mero: ";
		cin >> num;

		if (num>0)
		{
			cout << "O n�mero � positivo!\n";
		}
		else if (num<0)
		{
			cout << "O n�mero � negativo!\n";
		}
		else
		{
			cout << "Carregaste no zero, saiste.";
		}
	} while (num != 0);
}