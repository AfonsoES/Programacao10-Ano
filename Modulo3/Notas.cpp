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
	string Alunos[10] = {}, Disciplinas[10] = { "Matemática","Física","Química","Biologia","História","Geografia","Português","Inglês","Educação Física","Informática" };
	float Notas[10][10], MediaA[10] = { 0 }, MediaD[10]={0}, somaA = 0, somaD[10] = {0};
	for (int i = 0; i < 10; i++)
	{
		somaA = 0;
		cout << "Aluno Nº"<<i+1<<" como de chamas? \n";
		cin >> Alunos[i];
		for (int ii = 0; ii < 10; ii++)
		{
			cout << Alunos[i] << " escreve a tua nota de " << Disciplinas[ii] << ": ";
			cin >> Notas[i][ii];
			somaA += Notas[i][ii];
			somaD[ii] += Notas[i][ii];
			if (i == 9)
			{
				MediaD[ii] = somaD[ii] / 10;
			}
		}
		MediaA[i] = somaA / 10;
		system("cls");
	}
	cout << "\n\n******Média dos alunos******\n";
	for (int i = 0; i<10;i++)
	{
		cout << Alunos[i] << ": " << MediaA[i]<<"\n";
	}
	cout << "\n\n******Média dos disciplinas******\n";
	for (int i = 0; i < 10; i++)
	{
		cout << Disciplinas[i] << ": " << MediaD[i] << "\n";
	}

	
	return 0;
}