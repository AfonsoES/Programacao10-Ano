#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <Windows.h>

using namespace std;
int Depositar(int Saldo)
{
	string Frases[4] = {"Uau! Ainda vais preso!","A nadar em dinheiro, ahn?","Cuidado para não afundares o banco com tanto dinheiro!","Já vi que finalmente tomaste banho e foste a casa da madrinha"};
	int R;
	system("cls");
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "Depositar \33[92mDinheiro\n\33[0m";
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "Quantidade a depositar: ";
	cin >> R;
	if (R < 2000 && R>0)
	{
		Saldo += R;
		system("cls");
		cout << R << " euros depositados com suscesso! \nAgora tens \33[92m" << Saldo << "\33[0m euros";
		Sleep(3000);
		return Saldo;
	}
	else if(R>0)
	{
		Saldo += R;
		system("cls");
		cout << Frases[rand() % 4]<<"\n";
		cout << R << " euros depositados com suscesso!\nAgora tens \33[92m" << Saldo << "\33[0m euros";
		Sleep(3000);
		return Saldo;
	} else if(R == 0)
	{
		system("cls");
		cout << "A sair!!!!!!!!!!!";
		Sleep(2000);
		return Saldo;
	}
	else 
	{
		system("cls");
		cout <<"Queres perder dinheiro ou vais por um número positivo?!";
		Sleep(2000);
		Depositar(Saldo);
	}
}
int Debitar(int Saldo)
{
	system("cls");
	int R;
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "Levantar \33[92mDinheiro\n\33[0m";
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "Saldo: \33[92m"<<Saldo<<"\n\33[0m";
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "Quantidade a levantar: ";
	cin >> R;
	if (R <= Saldo && R>0)
	{
		Saldo -= R;
		system("cls");
		cout << R << " euros retirados com suscesso!";
		Sleep(3000);
		return Saldo;
	}
	else if(R>0)
	{
		system("cls");
		cout << "Calma lá! Não tens esse dinherio todo!";
		Sleep(2000);
		Debitar(Saldo);
	}
	else if (R == 0)
	{
		system("cls");
		cout << "A sair!!!!!!!!!!!";
		Sleep(2000);
		return Saldo;
	}
	else
	{
		system("cls");
		cout << "Era fixe se fosse positivo :/";
		Sleep(2000);
		Debitar(Saldo);
	}

}
void Saldar(int Saldo)
{
	system("cls");
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "\33[92m       Saldo\n\33[0m";
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	if (Saldo < 100)
	{
		cout << "[ Como é que só tens \33[92m" << Saldo << "\33[0m euros nesta carteira??? ]";
		Sleep(3000);
		return;
	}
	else if (Saldo < 10000)
	{
		cout << "[ Tu tens \33[92m" << Saldo << "\33[0m euros nesta carteira. ]";
		Sleep(3000);
		return;
	}
	else
	{
		cout << "[ Olá caro senhor. ]\n[ O senhor tem \33[92m" << Saldo << "\33[0m euros nesta carteira. ]";
		Sleep(3000);
		return;
	}
}
int Enviar(int Saldo)
{
	system("cls");
	string Pessoa;
	int R, P;
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "Enviar \33[92mDinheiro\n\33[0m";
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "Pessoa a enviar: ";
	cin >> Pessoa;

	if (Pessoa == "0")
	{
		system("cls");
		cout << "A sair!!!!!!!!!!!";
		Sleep(2000);
		return Saldo;
	}
	cout << "Quantidade a enviar: ";
	cin >> R;
	if (R == 0)
	{
		system("cls");
		cout << "A sair!!!!!!!!!!!";
		Sleep(2000);
		return Saldo;
	}
	else if (R < 0)
	{
		system("cls");
		cout << "Coitado do/a " << Pessoa << " queres dar-lhe dinheiro negativo";
		Sleep(2000);
		Enviar(Saldo);
	}
	else if (R <= Saldo)
	{
		Saldo -= R;
		cout << "Enviaste " << R << " euros à/ao " << Pessoa << "!";
		Sleep(2000);
		return Saldo;
	}
	else
	{
		system("cls");
		cout << "Calma lá! Não tens esse dinherio todo!";
		Sleep(2000);
		Enviar(Saldo);
	}
}
void Iniciar(int Saldo = 1000)
{
	system("cls");
	int R = 0;
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "\33[93m Carteira Bitcoin\n\33[0m";
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "[1] Deposito\n";
	cout << "[2] Débito\n";
	cout << "[3] Saldo\n";
	cout << "[4] Enviar Dinheiro\n";
	cout << "[0] Sair\n";
	cout << "*-*-*-*-*-*-*-*-*-*\n";
	cout << "Escolha: ";
	cin >> R;

	switch (R)
	{
	case 1:
		Saldo = Depositar(Saldo);
		Iniciar(Saldo);
		break;
	case 2:
		Saldo = Debitar(Saldo);
		Iniciar(Saldo);
		break;
	case 3:
		Saldar(Saldo);
		Iniciar(Saldo);
		break;
	case 4:
		Saldo = Enviar(Saldo);
		Iniciar(Saldo);
		break;
	case 0:
		system("cls");
		cout << "A sair!!!!!!!!!!!";
		Sleep(2000);
		return;
		break;
	default:
		cout << "\33[91mEscolha inválida!\33[0m";
		Sleep(2000);
		Iniciar(Saldo);
		break;
	}
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	Iniciar();
}