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

		if (num % 2 == 0)
		{
			cout<<"O número é par!\n";
		}
		else
		{
			cout << "O número é impar!\n";
		}
	} while (num !=0);



}
