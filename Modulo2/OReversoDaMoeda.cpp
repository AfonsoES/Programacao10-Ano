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
	string nomes[5] = {};
	char sair = 'n';
	while (sair == 'n')
{
		for (int i = 0; i < 5; i++)
		{
			cout << "Escreve o nome: ";
			cin >> nomes[i];
		}
	for (int i = 4; i >= 0; i--)
	{
		cout << nomes[i] << "\n";
	}
	cout << "Queres sair (s/n)";
	cin >> sair;
}
	return 0;
}