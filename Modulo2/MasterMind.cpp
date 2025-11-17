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
	int Code[4], Guess[4], Certos=0, Tentativas=0;
	for (int i = 0; i < 4; i++)
	{
		Code[i] = rand() % 2;
		
	}
	cout << "Olá, bem-vindo ao MASTERMIND\n";
	while (Certos != 4)
	{
		Certos = 0;
		Tentativas++;
		cout << "Escreve 4 números para tentar adivinharo código 0 ou 1\n";
		for (int i = 0; i < 4; i++)
		{
			cin >> Guess[i];
			if (Guess[i] == Code[i])
			{
				Certos++;
			}
		}
		cout << "Acertaste " << Certos << "/4\n";
	}
	cout << "Boa, acertaste o código em " << Tentativas << " tentativas";
	return 0;
}