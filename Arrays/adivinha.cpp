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
		cout << "Diz um n�mero: ";
		cin >> r;

		if (r > N)
		{
			cout << "� menor.\n";
			tentativas++;
		}
		else if (r < N)
		{
			cout << "� maior.\n";
			tentativas++;
		}
		else
		{
			cout << "\nMuito bem, acertaste em" << tentativas;
		}
	}


	return 0;
}