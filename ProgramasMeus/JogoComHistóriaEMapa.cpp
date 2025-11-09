#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;
string inv[100]; //inv[0], é a arma. inv[1], é a armadura. O resto é tudos os itens.

//Função para meter um item no inventário (Começa do 2 porque inv[0], é a arma. inv[1], é a armadura.
//Meter na função o item que queromos ex.: ("Maça")
string novoItem(string item)
{
	for (int i = 2; i < 100; i++)
	{
		if (inv[i] == " ")
		{
			inv[i] = item;
			break;
		}
	}
	return " ";
}

//Função para mostrar a vida do player ou do monstro
//Meter na função a variavel da vida e o máximo de vida que tem ex.: (vida, 20). Não esquecer também de igual a variavel da vida à função ex.: vida = coutVida(vida, 20)
int coutVida(int Vida, int Max)
{
	for (int i = 0; i < Max + 1; i++)
	{
		if (i <= Vida)
		{
			cout << "\33[101;97m \33[0m";
		}
		else
		{
			cout << "\33[107;97m \33[0m";
		}

	}
	return Vida;
}

//Função para fazer o mapa
//Meter na função o X e Y do personagem e o nome do mapa
string mapa(int x, int y, string nomemapa)
{
	if (nomemapa == "normal")
	{
		for (int i = 0; i < 13; i++)
		{
			cout << "\n";
			for (int ii = 0; ii < 11; ii++)
			{
				if (i == y && ii == x)
				{
					cout << "\33[48;2;92;51;23m  ";
				}
				else if (i == 3 && ii == 5)
				{
					cout << "\33[48;2;156;90;60m  ";
				}
				else
				{
					switch (ii)
					{
					case 0:
					{
						cout << "\33[48;2;64;64;64m ";
						break;
					}
					case 1:
					{
						cout << "\33[48;2;68;79;66m ";
						break;
					}
					case 9:
					{
						cout << "\33[48;2;68;79;66m ";
						break;
					}
					case 10:
					{
						cout << "\33[48;2;64;64;64m ";
						break;
					}
					default:
					{
						cout << "\33[48;2;107;125;105m  ";
						break;
					}
					}
				}
			}
		}
	}
	cout << "\33[0m\n\n";
	return "a";
} //Função para fazer o mapa

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	string nome;
	int Escolha;

	bool fala = false;
	int keyCode = 0, x = 5, y = 10;

	//Função para o mapa
	mapa(x, y, "normal");
	while (true)
	{
		
		//Ifs para andar no mapa
		if (GetKeyState('W') & 0x8000)
		{
			Sleep(150);
			system("cls");
			if (y > 0 && !(y == 4 && x == 5)) y--;
			//Função para o mapa
			mapa(x, y, "normal");
			//Quando tiver a frente do Peter
			if (x == 5 && y == 4)
			{
				cout << "\n\n    (E)Falar\n\n";
			}
		}
		if (GetKeyState('S') & 0x8000)
		{
			Sleep(150);
			system("cls");
			if (y < 12 && !(y == 2 && x == 5)) y++;
			//Função para o mapa
			mapa(x, y, "normal");
		}
		if (GetKeyState('A') & 0x8000)
		{
			Sleep(150);
			system("cls");
			if (x > 2 && !(y == 3 && x == 6)) x--;
			//Função para o mapa
			mapa(x, y, "normal");
			//Quando tiver a frente do Peter
			if (x == 5 && y == 4)
			{
				cout << "\n\n    (E)Falar\n\n";
			}
		}
		if (GetKeyState('D') & 0x8000)
		{
			Sleep(150);
			system("cls");
			if (x < 8 && !(y == 3 && x == 4)) x++;
			//Função para o mapa
			mapa(x, y, "normal");
			//Quando tiver a frente do Peter
			if (x == 5 && y == 4)
			{
				cout << "\n\n    (E)Falar\n\n";
			}
		}
		
		//Quando clicar no "E" e tiver a frente do Peter
		if (GetKeyState('E') & 0x8000 && x == 5 && y == 4)
		{
			system("cls");
			fala = true;
			while (fala)
			{
				//História
				mapa(x, y, "normal");
				cout << "\33[90m???\33[0m: Olá ...";
				Sleep(2000);
				system("cls");
				mapa(x, y, "normal");
				cout << "\33[90m???\33[0m: Hm... Como te chamas?\n";
				cout << "\33[97m*Escreve o teu nome*\n\33[0m";
				FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE)); // Para limpar o input 
				cin >> nome;
				system("cls");
				mapa(x, y, "normal");
				cout << "\33[90mPeter\33[0m: Olá " << nome << ", eu sou o Peter! Sou um aventureiro e estou numa missão para derrotar slimes.";
				Sleep(5000);
				system("cls");
				Escolha = 1;
				mapa(x, y, "normal");
				cout << "\33[90mPeter\33[0m: Queres ajudar?\n";
				cout << "\33[100;97m*Sim*\n\33[0m";
				cout << "\33[97m*Não*\n\33[0m";
				while (true)
				{
					if (GetKeyState(VK_UP) & 0x8000)
					{
						system("cls");
						mapa(x, y, "normal");
						cout << "\33[90mPeter\33[0m: Queres ajudar?\n";
						if (Escolha == 2) Escolha--;
						switch (Escolha)
						{
						case 1:
						{
							cout << "\33[100;97m*Sim*\n\33[0m";
							cout << "\33[97m*Não*\n\33[0m";
							break;
						}
						case 2:
						{
							cout << "\33[97m*Sim*\n\33[0m";
							cout << "\33[100;97m*Não*\n\33[0m";
							break;
						}
						}
						Sleep(200);
					}
					if (GetKeyState(VK_DOWN) & 0x8000)
					{
						system("cls");
						mapa(x, y, "normal");
						cout << "\33[90mPeter\33[0m: Queres ajudar?\n";
						if (Escolha == 1) Escolha++;
						switch (Escolha)
						{
						case 1:
						{
							cout << "\33[100;97m*Sim*\n\33[0m";
							cout << "\33[97m*Não*\n\33[0m";
							break;
						}
						case 2:
						{
							cout << "\33[97m*Sim*\n\33[0m";
							cout << "\33[100;97m*Não*\n\33[0m";
							break;
						}
						}
						Sleep(200);
					}
					if (GetKeyState(VK_RETURN) & 0x8000)
					{
						break;
					}
				}
				if (Escolha == 1)
				{
					system("cls");
					mapa(x, y, "normal");
					cout << "\33[90mPeter\33[0m: Boa!\n";
					cout << "\33[90mPeter\33[0m: Tenho umas armas a mais na minha mochila escolhe uma!\n";
					Sleep(1000);
					system("cls");
					FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE)); // Para limpar o input 
					//Escolher a Primeira Arma
					mapa(x, y, "normal");
					cout << "\33[97m*Escolhe uma arma*\n\33[0m";
					cout << "\33[100;97m*Espada*\33[0m\n";
					cout << "\33[97m*Machado*\33[0m\n";
					cout << "\33[97m*Pá*\33[0m\n";
					while (true)
					{
						if (GetKeyState(VK_UP) & 0x8000)
						{
							system("cls");
							mapa(x, y, "normal");
							cout << "\33[97m*Escolhe uma arma*\n\33[0m";
							if (Escolha > 1) Escolha--;
							switch (Escolha)
							{
							case 1:
								cout << "\33[100;97m*Espada*\33[0m\n";
								cout << "\33[97m*Machado*\33[0m\n";
								cout << "\33[97m*Pá*\33[0m\n";
								break;
							case 2:
								cout << "\33[97m*Espada*\33[0m\n";
								cout << "\33[100;97m*Machado*\33[0m\n";
								cout << "\33[97m*Pá*\33[0m\n";
								break;
							case 3:
								cout << "\33[97m*Espada*\33[0m\n";
								cout << "\33[97m*Machado*\33[0m\n";
								cout << "\33[100;97m*Pá*\33[0m\n";
								break;
							}
							Sleep(200);
						}
						if (GetKeyState(VK_DOWN) & 0x8000)
						{
							system("cls");
							mapa(x, y, "normal");
							cout << "\33[97m*Escolhe uma arma*\n\33[0m";
							if (Escolha < 3) Escolha++;
							switch (Escolha)
							{
							case 1:
								cout << "\33[100;97m*Espada*\33[0m\n";
								cout << "\33[97m*Machado*\33[0m\n";
								cout << "\33[97m*Pá*\33[0m\n";
								break;
							case 2:
								cout << "\33[97m*Espada*\33[0m\n";
								cout << "\33[100;97m*Machado*\33[0m\n";
								cout << "\33[97m*Pá*\33[0m\n";
								break;
							case 3:
								cout << "\33[97m*Espada*\33[0m\n";
								cout << "\33[97m*Machado*\33[0m\n";
								cout << "\33[100;97m*Pá*\33[0m\n";
								break;
							}
							Sleep(200);
						}
						if (GetKeyState(VK_RETURN) & 0x8000)
						{
							break;
						}
					}
					switch (Escolha)
					{
					case 1:
						inv[0] = "Espada";
						cout << "\33[90mPeter\33[0m: Boa escolha! A espada, uma arma básica e fácil de usar!";
						break;
					case 2:
						inv[0] = "Machado";
						cout << "\33[90mPeter\33[0m: Boa escolha! Um machado, nunca sabes quando precisas de cortar uma árvore ou os teu inimigos!";
						break;
					case 3:
						inv[0] = "Pá";
						cout << "\33[90mPeter\33[0m: Boa escolha! Uma pá, perfeito para enterrar os teu inimigos!";
						break;
					default:
						Escolha = 0;
						cout << "\33[97m*Arma inválida*\n\33[0m";
						break;
					}
					Sleep(10000);
				}
				else
				{
					cout << "dsadas";
					cin.ignore();
				}
				fala = false;
			}
		}
	}
}
