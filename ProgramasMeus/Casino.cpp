#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	//Variaveis pricipais
	double Dinheiro = 100;
	char Ajogar = 'n';
	char sair = 'n';

	cout << "Olá, seja bem-vindo/a ao \33[33mCasino C++\33[0m!\n";


	while (sair == 'n')
	{
		//Introdução
		int jogo;

		cout << "Que jogo quer jogar: \n";
		cout << "\33[35m1. Cara ou Coroa\n2. Slots\n3. Roleta (coming soon)\n\33[0m";
		cout << "Insira o número do jogo: ";
		cin >> jogo;
		Ajogar = 's';

		while (Ajogar == 's')
		{
			system("cls");
			if (jogo == 1)
			{

				//1º jogo Cara ou Coroa
				int CaraOuCoroa = (rand() % 2) + 1;
				int guess;
				float aposta;

				cout << "Saldo: \33[92m$" << Dinheiro << "\n\n\33[0m";

				cout << "Bem-vindo/a ao Cara Ou Coroa! \nBasta escolher a lado que quer e se calhar esse lada ganha caso contrário perde.";
				cout << "\nQuanto quer apostar?\n";
				cin >> aposta;

				if (aposta > Dinheiro)
				{
					cout << "Não tem dinheiro suficiente.\nA voltar ao inicio";
					Ajogar = 'n';
					Sleep(2000);
					system("cls");
				}
				cout<<"\nEntão Cara(1) ou Coroa(2) ? \n";
				cin >> guess;

				if (guess == CaraOuCoroa)
				{
					Dinheiro = Dinheiro + aposta * 1.8;
					cout << "\n\nParabéns, agora tem \33[92m$" << Dinheiro << "\n\33[0m";
				}
				else
				{
					Dinheiro = Dinheiro - aposta * 0.5;
					cout << "\n\nQue pena, agora só tem \33[92m$" << Dinheiro << "\n\33[0m";
				}

			cout << "\nDeseja jogar outra vez? (s/n)";
			cin >> Ajogar;

			if (Ajogar == 'n')
			{
				cout << "Deseja sair? (s/n)";
				cin >> sair;
				system("cls");
			}
		}


	if (jogo == 2)
	{
		// :) :( :/ :> :<
		string caras[5]{ ":)",":(",":/",":>",":<" };
		int Slot1 = rand() % 5, Slot2 = rand() % 5, Slot3 = rand() % 5;
		float aposta;

		string Slot1Cara = caras[Slot1], Slot2Cara = caras[Slot2], Slot3Cara = caras[Slot3];

		cout << "Saldo: \33[92m$" << Dinheiro << "\n\n\33[0m";

		cout << "Bem-vindo/a aos Slots! \nBasta escolher quanto quer apostar se calharem 3 caras iguais ganha, se calharem 2 fica com o dinheiro e se não calhar nenhuma perde tudo.\nEntão quanto quer apostar?\n";
		cin >> aposta;

		if (aposta>Dinheiro)
		{
			cout << "Não tem dinheiro suficiente.\nA voltar ao inicio";
			Ajogar = 'n';
			Sleep(2000);
			system("cls");
		}

		for (int i = 0; i < 30; i++)
		{
			int Slot1Show = rand() % 5, Slot2Show = rand() % 5, Slot3Show = rand() % 5;
			string Slot1CaraShow = caras[Slot1Show], Slot2CaraShow = caras[Slot2Show], Slot3CaraShow = caras[Slot3Show];
			cout << "\33[91m|A GIRAR|\33[0m\n";
			cout << "|" << Slot1CaraShow << "|" << Slot2CaraShow << "|" << Slot3CaraShow << "|";
			Sleep(10*i);
			system("cls");
		}
		cout << "\33[92m|DONE|\33[0m\n";
		cout << "|" << Slot1Cara << "|" << Slot2Cara << "|" << Slot3Cara << "|\n\n";

		if (Slot1 == Slot2 == Slot3)
		{
			Dinheiro = Dinheiro + aposta * 2.5;
			cout << "WOW! Que sorte, ganhou 2.5x a tua aposta! Agora tem \33[92m$" << Dinheiro << "\n\33[0m\n";
		}
		else if (Slot1 == Slot2 || Slot1 == Slot3 || Slot3 == Slot2)
		{
			cout << "Mais sorte para a proxima. Não ganhou nem perdeu.\n";
		}
		else
		{			
			Dinheiro = Dinheiro - aposta;
			cout << "Que azar. Perdeu tudo oque apostou, agora só tem \33[92m$" << Dinheiro << "\n\33[0m";
		} 

		cout << "\nDeseja jogar outra vez? (s/n)";
		cin >> Ajogar;

		if (Ajogar == 'n')
		{
			cout << "Deseja sair? (s/n)";
			cin >> sair;
			system("cls");
		}
	}
	if (jogo < 0 || jogo > 3)
	{
		cout << "Esse jogo não existe.\nA voltar ao inicio";
		Ajogar = 'n';
		Sleep(2000);
		system("cls");
	}
	}
	}
	return 0;
}