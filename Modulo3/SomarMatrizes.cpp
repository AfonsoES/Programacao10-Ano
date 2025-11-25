#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
using namespace std;

//1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2
int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int Matriz1[5][3] = {}, Matriz2[5][3] = {}, E;
	for (int i = 0; i < 3; i++)
	{
		for (int ii = 0; ii < 5; ii++)
		{
			cout << "Escreve o número da posição " << ii+1 << "/" << i+1 << " da Matriz 1. (Coluna/Linha)\n";
			cin >> Matriz1[ii][i];
		}
	}
	cout << "\n\n";
	for (int i = 0; i < 3; i++)
	{
		for (int ii = 0; ii < 5; ii++)
		{
			cout << "Escreve o número da posição " << ii+1 << "/" << i+1 << " da Matriz 2. (Coluna/Linha)\n";
			cin >> Matriz2[ii][i];
		}
	}
	while (true)
	{
	system("cls");
	cout << "***************************\n";
	cout << "	Oque deseja fazer?\n";
	cout << "[1]	   Somar\n";
	cout << "[2]	 Subtrair\n";
	cout << "[0]	   Sair\n";
	cout << "***************************\n";
	cin >> E;

	switch (E)
	{
	case 1:
		system("cls");
		cout << "*************\n";
		cout << "	Soma\n";
		for (int i = 0; i < 3; i++)
		{
			cout << "|";
			for (int ii = 0; ii < 5; ii++)
			{
				cout << Matriz1[ii][i] + Matriz2[ii][i] << "|";
			}
			cout << "\n";
		}
		cout << "************\n";
		system("pause");
		break;
	case 2:
		system("cls");
		cout << "*****************\n";
		cout << "	Subtração\n";
		for (int i = 0; i < 3; i++)
		{
			cout << "|";
			for (int ii = 0; ii < 5; ii++)
			{
				cout << Matriz1[ii][i] - Matriz2[ii][i] << "|";
			}
			cout << "\n";
		}
		cout << "*****************\n";
		system("pause");
		break;
	default:
		break;
	}
	if (E == 0)
	{
		break;
	}
	}

	

	return 0;
}
