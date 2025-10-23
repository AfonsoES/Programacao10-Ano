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
	char conta;
	float N1=0, N2=0, result=0;
	cout << "Que conta queres fazer? (+,-,*,/)\n";
	cin >> conta;
	cout << "N1 = ";
	cin >> N1;
	cout << "N2 = ";
	cin >> N2;

	if (conta == '+')
	{
		result = N1 + N2;
	}
	if (conta == '-')
	{
		result = N1 - N2;
	}
	if (conta == '*')
	{
		result = N1 * N2;
	}
	if (conta == '/')
	{
		result = N1 / N2;
	}
	cout << N1 <<" "<< conta << " " << N2 << " = " << result;
	return 0;
}
