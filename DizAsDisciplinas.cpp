#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	string carros[3] = { "Volvo", "BMW", "Mercedes" };
	int N;
	string Sair = "n";

	while (Sair != "s")
	{
		cout << "Escolhe o n�mero do carro: ";
		cin >> N;

		if (N < 3 && N > 0)
		{
			cout << "\nO carro n�mero " << N << " � um " << carros[N];
			cout << "\n\nDeseija sair (s/n)\n";
			cin >> Sair;
		}
		else
		{
			cout << "\nN�o h� um carro n�mero "<<N<<"\n";
		}
	}
	return 0;
}