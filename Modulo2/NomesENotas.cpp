#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N;
	string nomes[5] = {};
	float notas[5] = {};

	for (int i = 0; i < 5; i++) {
		cout << "Escreve um nome: \n";
		cin >> nomes[i];
		cout << "Escreve a nota do/a"<<nomes[i]<<"\n";
		cin >> notas[i];
	}

	cout << "Diz um número para saber a pessoa e a sua nota: ";
	cin >> N;
	cout << "A pessoa é " << nomes[N] << " que teve" << notas[N];
}