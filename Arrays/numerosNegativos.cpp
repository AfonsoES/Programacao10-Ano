#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int r, quantos = 0;
	float n, soma = 0;
	string numeros[10] = {};

	for (int i = 0; i < 11; i++)
	{
		cout << "\33[94mEscolhe um número: \33[95m";
		cin >> n;
		if (n < 0)
		{
			quantos = quantos + 1;
			soma = soma + n;
		}

	}

	cout << "\n\n\33[0mQueres saber quantos números negativo meteste \33[31m(1) \33[0mou a soma deles \33[31m(2)\33[0m?: ";
	cin >> r;

	if (r == 1)
	{
		cout << "\nMeteste \33[96m" << quantos << " \33[0mnúmeros negativos\n";
	}
	else if (r == 2)
	{
		cout << "A soma dos números negativos é \33[93m" << soma << "\n\33[0m";
	}
	else
	{
		cout << "\33[31mEscolhe entre 1 e 2\n\33[0m";
	}

	return 0;
}
