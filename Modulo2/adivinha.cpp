#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int N = rand() % 100;
	int r=-1, tentativas=0;

	while (r != N)
	{
		cout << "Diz um número: ";
		cin >> r;

		if (r > N)
		{
			cout << "\33[91mÉ menor.\33[0m\n";
			tentativas++;
		}
		else if (r < N)
		{
			cout << "\33[92mÉ maior.\33[0m\n";
			tentativas++;
		}
		else
		{
			if (tentativas < 6)
			{
				cout << "\nMuito bem, acertaste só em \33[96m" << tentativas << "\33[0m tentativas. Ganda máquina";
			}
			else if (tentativas < 11)
			{
				cout << "\nMuito bem, acertaste em\33[92m " << tentativas << "\33[0m tentativas.";
			}
			else
			{
				cout << "\nAcertaste mas até a minha avó acertava em menos de\33[33m "<<tentativas<<"\33[0m tentativas";
			}

		}
	}


	return 0;
}
