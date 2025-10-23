#include <iostream>
#include <locale.h>
#include <string>	
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	char sair = 'n';
	string nomes[5] = {};
	string nomesfofos[5] = {};

		for (int i = 0; i < 5; i++)
		{
			cout << "Diz o nome da tua namorada/o\n";
			cin >> nomes[i];
		}
		cout << "\n\n";
		for (int i = 0; i < 5; i++)
		{
			cout << "Diz a alcunha da tua namorada/o "<< nomes[i]<<"\n";
			cin >> nomesfofos[i];
		}
	while (sair == 'n')
	{
		cout << "\n\nEscolhe o numero para saber o nome e alcunha da/o tua/teu namorada/o: ";
		cin >> n;
		n = n - 1;

		if (n >= 0 && n < 5)
		{
			cout << "\nA tua/teu namorada/o " << nomes[n] << " tem a alcunha " << nomesfofos[n];
		}
		else if(n>4)
		{
			cout << "\nNão tens tantas/os namoradas/os :/";

		}
		else
		{
			cout << "\nNão há pessoas negativas :/";
		}
		cout << "\n\nDeseja sair (s/n)";
		cin >> sair;

	}
}
