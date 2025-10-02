#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;

	do
	{
		cout << "Escolhe um número: ";
		cin >> num;

		if (num>0)
		{
			cout << "O número é positivo!\n";
		}
		else if (num<0)
		{
			cout << "O número é negativo!\n";
		}
		else
		{
			cout << "Carregaste no zero, saiste.";
		}
	} while (num != 0);
}