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
    "roupa", "sinal", "tarde", "mundo", "vento",
    "volta", "zebra", "brisa", "chave", "doido",
    "longe", "folga", "grato", "horta", "jogue"
};
	
	string Palavra = Palavras[NPalavra];
  cout<<Palavra;
	
	
	
	
	
	
            //Perguntar a palavra e ver quais letras estão certas	
int Certas = 0;
string Guess = "";
string LetrasGuess[5] = {};
string LetrasPalavra[5] = {};
bool LetraAmarela = false;



while(Certas != 5)
{
	int cont = 0;
	for (char c : Palavra){
        LetrasPalavra[cont] = c;
        cont++;
    }
    
    
    
    
    
    
    
Guess = "";
Certas = 0;
LetraAmarela = false;

for(int i=0; i<5; i++)
{
    LetrasGuess[i] = "";
}








cout<<"\n\nEscreve uma palarva, letras todas minosculas e sem acentos: ";
cin>>Guess;


cont = 0;
for (char c : Guess) {
        LetrasGuess[cont] = c;
        cont++;
    }

if (cont == 5)
{
    for (int i=0; i<5;i++)
{
  if (LetrasGuess[i] == LetrasPalavra[i])
{
    cout<<"\33[92m"<<LetrasGuess[i]<<"\33[0m";
    Certas++;
} else if(LetrasGuess[i] == LetrasPalavra[0] || LetrasGuess[i] == LetrasPalavra[1] || LetrasGuess[i] == LetrasPalavra[2] || LetrasGuess[i] == LetrasPalavra[3] || LetrasGuess[i] == LetrasPalavra[4])
{
    cout<<"\33[33m"<<LetrasGuess[i]<<"\33[0m";
}  else
{
    cout<<LetrasGuess[i];
}
}
} else
{
    cout<<"\nA palavra tem de ter 5 letras\n";
}



}



cout<<"\n\nParabéns!!";
}