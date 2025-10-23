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
	int nums[5], guess[5];


	for (int i = 0; i < 5; i++)
	{
		nums[i] = (rand() % 50) + 1;
		for (int ii = 0; ii < 5; ii++)
		{
			if (i != ii)
			{
				if (nums[i] == nums[ii])
				{
					nums[i] = (rand() % 50) + 1;
					cout << nums[i];
				}
			}
		}
		cout << nums[i]<<"\n";
	}

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


	return 0;
}