#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	char sair = 'n';
	string disciplinas[9] = { "Matemática", "Português", "EDF", "TIC", "TLP", "ACSO", "AI", "Inglês", "Fq" };
	string Professores[9] = { "Luís", "Alice", "Sérgio", "Clara", "Clara", "Joao", "Maria", "Paula", "Marta" };


	while (sair == 'n')
	{
		cout << "\nMe de um numero correspondente a uma disciplina \n";
		cin >> n;

		if (n > 0 && n < 9)
		{
			cout << "Sua disciplina é " << disciplinas[n] << " com o professor " << Professores[n];

			cout << "\n\nAs disciplinas são: ";

			for (int i = 0; i < 9; i++)
			{
				cout << "\n" << disciplinas[i] << ".";
			}


			cout << "\n\nDeseja sair (s/n)";
			cin >> sair;
		}
		else
		{

			cout << "\nSua disciplina não existe";
		}

	}


}
