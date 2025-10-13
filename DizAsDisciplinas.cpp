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
		cout << "Escolhe o número do carro: ";
		cin >> N;

		if (N < 3 && N > 0)
		{
			cout << "\nO carro número " << N << " é um " << carros[N];
			cout << "\n\nDeseija sair (s/n)\n";
			cin >> Sair;
		}
		else
		{
			cout << "\nNão há um carro número "<<N<<"\n";
		}
	}
	return 0;
}