#include <iostream>
#include <locale.h>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));

            //Escohler a palavra.
	int NPalavra = rand() % 31 ;
string Palavras[30] = {
    "amigo", "barco", "caixa", "dente", "feira",
    "gente", "horas", "inicio", "junto", "limao",
    "mudar", "nuvem", "otimo", "parte", "quase",
    "roupa", "sinal", "tarde", "urgir", "vento",
    "volta", "zebra", "brisa", "chave", "doido",
    "esmal", "folga", "grato", "horta", "jogue"
};
	
	string Palavra = Palavras[NPalavra];
//	cout<<Palavra;
	string LetrasPalavra[5] = {};
	int cont = 0;
	for (char c : Palavra){
        LetrasPalavra[cont] = c;
        cont++;
    }
	
	
	
	
	
	
            //Perguntar a palavra e ver quais letras estão certas	
int Certas = 0;
string Guess = "";
string LetrasGuess[5] = {};



while(Certas != 5)
{
Guess = "";
Certas = 0;

cout<<"\n\nEscreve uma palarva, letras todas minosculas e sem acentos: ";
cin>>Guess;

cont = 0;
for (char c : Guess) {
        LetrasGuess[cont] = c;
        cont++;
    }

for (int i=0; i<5;i++)
{
  if (LetrasGuess[i] == LetrasPalavra[i])
{
    cout<<"\33[92m"<<LetrasGuess[i]<<"\33[0m";
    Certas++;
} else
{
    cout<<LetrasGuess[i];
}  
}

cout<<"\n\nParabéns!!";

}