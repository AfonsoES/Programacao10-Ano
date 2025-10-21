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
			cout << "É menor.\n";
			tentativas++;
		}
		else if (r < N)
		{
			cout << "É maior.\n";
			tentativas++;
		}
		else
		{
			if (tentativas < 6)
			{
				cout << "\nMuito bem, acertaste só em " << tentativas << " tentativas. Ganda máquina";
			}
			else if (tentativas < 10)
			{
				cout << "\nMuito bem, acertaste em " << tentativas << " tentativas.";
			}
			else
			{
				cout << "\nAcertaste mas até a minha avó acertva em menos de "<<tentativas<<" tentativas";
			}

		}

	}


	return 0;
}
