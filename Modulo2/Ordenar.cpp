#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N[10] = {15,7,54,12,1,2,5,23,14,4,}, Troca, Aux;

	do
	{
		Troca = 0;

		for (int i = 0; i < 9; i++)
		{
			if (N[i] > N[i + 1])
			{
				Troca++;
				Aux = N[i];
				N[i] = N[i + 1];
				N[i + 1] = Aux;
			}
		}

	} while (Troca != 0);

	for (int i = 0; i < 10; i++)
	{
		cout << N[i] << "\n";
	}
}