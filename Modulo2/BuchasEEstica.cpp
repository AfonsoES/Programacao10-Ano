#include <iostream>
#include <locale.h>
#include  <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int N, maior = 0, menor = 2147483647;

	do
	{
		cout << "Escreveum número: ";
		cin >> N;

		if (N < menor && N != 0)
		{
			menor = N;
		}
		if (N > maior)
		{
			maior = N;
		}

	} while (N != 0);

	cout << "O maior número é: \33[96m" << maior << "\n\33[0m";
	cout << "O menor número é: \33[91m" << menor << "\n\33[0m";


	return 0;
}
