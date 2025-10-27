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
	int nums[5], guess[5], Troca, Aux, Certos=0;


	for (int i = 0; i < 5; i++)
	{
		nums[i] = (rand() % 50) + 1;
		for (int ii = 0; ii < 5; ii++)
		{
			while (nums[i] == nums[ii])
			{
				nums[i] = (rand() % 50) + 1;
			}
		}
	}

	do
	{
		Troca = 0;

		for (int i = 0; i < 4; i++)
		{
			if (nums[i] > nums[i + 1])
			{
				Troca++;
				Aux = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = Aux;
			}
		}

	} while (Troca != 0);


	for (int i = 0; i < 5; i++)
	{
		cout << "Escolhe um número entre 1 e 50: ";
		cin >> guess[i];
		while (guess[i] < 1 || guess[i] > 50)
		{
			cout << "O número tem de ser entre 1 e 50: ";
			cin >> guess[i];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (nums[i] == guess[i])
		{
			Certos++;
		}
	}

	if (Certos == 5)
	{
		cout << "BRAVO, GANHASTE 1 MILHÃO DE BITCOIN\n";
	}
	else
	{
		cout << "\nNão ganhaste a loteria. Só acertaste" << Certos << "\n";
	}

	cout << "Os números certos são: \n";
	for (int i=0;i<4;i++)
	{
		cout << nums[i] << " | ";
	}
	cout << nums[4];

	return 0;
}
