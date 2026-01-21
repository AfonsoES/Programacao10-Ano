#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <Windows.h>
using namespace std;

void Trocos(int OqueTem, int OndeQuerChegar)
{
	int Falta = OndeQuerChegar - OqueTem, Moedas[8] = { 0 }, Valores[8] = { 200,100,50,20,10,5,2,1 };
	for (int i = 0; i < 8; i++)
	{
		if (Falta >= Valores[i])
		{
			Falta -= Valores[i];
			Moedas[i] += 1;
			i = 0;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		cout << Moedas[i] << " ";
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int E=0, C=0, MoedasClientes[8], CentimosPreco = 0, CentimosCliente = 0, Multiplicadores[8] = { 200,100,50,20,10,5,2,1 };
	cin >> E;
	cin >> C;
	CentimosPreco = (E * 100) + C;
	for (int i = 0; i < 8; i++)
	{
		cin >> MoedasClientes[i];
		CentimosCliente += MoedasClientes[i] * Multiplicadores[i];
	}
	if (CentimosCliente >= CentimosPreco)
	{
		Trocos(CentimosPreco, CentimosCliente);
	}
	else {
		for (int i = 0; i < 8; i++)
		{
			cout << MoedasClientes[i] << " ";
		}
	}
}