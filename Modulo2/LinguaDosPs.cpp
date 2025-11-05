#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	string palavra = "";
	char NovaPalavra[100];
	int c=0;
	for (int i = 0; i < 100; i++)
	{
		NovaPalavra[i] = ' ';
	}

	cin >> palavra;
	
	int tamanho = palavra.length();
	const char* caracteres = palavra.c_str();
	for (int i = 0; i < tamanho; ++i)
	{
		cout << caracteres[i] << endl;
		if (caracteres[i] != 'a' && caracteres[i] != 'e' && caracteres[i] != 'i' && caracteres[i] != 'o' && caracteres[i] != 'u')
		{
		NovaPalavra[c] = caracteres[i];
		c++;
		}
		else if (caracteres[i] == 'a')
		{
			NovaPalavra[c] = 'a';
			NovaPalavra[c+1] = 'p';
			NovaPalavra[c+2] = 'a';
			c = c + 3;
		}
		else if (caracteres[i] == 'e')
		{
			NovaPalavra[c] = 'e';
			NovaPalavra[c + 1] = 'p';
			NovaPalavra[c + 2] = 'e';
			c = c + 3;
		}
		else if (caracteres[i] == 'i')
		{
			NovaPalavra[c] = 'i';
			NovaPalavra[c + 1] = 'p';
			NovaPalavra[c + 2] = 'i';
			c = c + 3;
		}
		else if (caracteres[i] == 'o')
		{
			NovaPalavra[c] = 'o';
			NovaPalavra[c + 1] = 'p';
			NovaPalavra[c + 2] = 'o';
			c = c + 3;
		}
		else if (caracteres[i] == 'u')
		{
			NovaPalavra[c] = 'u';
			NovaPalavra[c + 1] = 'p';
			NovaPalavra[c + 2] = 'u';
			c = c + 3;
		}
	}
	for (int i = 0; i < c+1; ++i)
	{
		cout << NovaPalavra[i] << "";
	}
	
	return 0;
}