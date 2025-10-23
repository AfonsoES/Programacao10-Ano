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
	int r;
	string nomes[5] = { "A","B","C","D","E" };
	int idades[5] = {};
	for (int i = 0; i < 5; i++)
	{
		idades[i] = (rand() % 40) + 15;
	}
	cout << "Quem queres saber a idade?(1-5)";
	cin >> r;
	cout << "A idade de " << nomes[r - 1] << " é " << idades[r - 1] << " anos.\n";
	return 0;
}
