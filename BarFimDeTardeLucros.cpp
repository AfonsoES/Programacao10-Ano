#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	float lucro = 0; 
	float CS = 1, CB = 0.80, CR = 1.50, CC = 0.60; //Custos unit�rios dos produtos (S�ndes, Bolos, Refrigerantes e Caf�).
	float PS, PB, PR, PC; //Pre�o defenido pelo bar para os produtos.
	int SV, BV, RV, CV; //Quantos produtos foram vendidos de cada um.

		cout << "Quanto custa uma Sand�s?\n";
		cin >> PS;
		cout << "Quanto custa um Bolo?\n";
		cin >> PB;
		cout << "Quanto custa um Refrigetante?\n";
		cin >> PR;
		cout << "Quanto custa um Caf�?\n";
		cin >> PC;

		cout << "Quantas S�ndes vendeu?\n";
		cin >> SV;
		cout << "Quantos Bolos vendeu?\n";
		cin >> BV;
		cout << "Quantos Refrigerantes vendeu?\n";
		cin >> RV;
		cout << "Quantos Caf�s vendeu?\n";
		cin >> CV;

		lucro = ((PS - CS) * SV) + ((PB - CB) * BV) + ((PR - CR) * RV) + ((PC - CC) * CV);

		cout << "O bar Fim de Tarde teve um lucro de "<<lucro<<"�.\n";

	return 0;
}