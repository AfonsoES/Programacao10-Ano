#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <chrono>
using namespace std;
using namespace chrono;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
    auto inicio = steady_clock::now();
    auto duracao_limite = seconds(15);
    int PalavraRandom, PalavrasEscritas;
    float  PalavrasPorS, Certos = 0, count =0;
    string PalavraEscrita;

    string Palavras[85] = {
       "amigo", "barco", "caixa", "dente", "feira",
       "gente", "horas", "inicio", "junto", "limao",
       "mudar", "nuvem", "otimo", "parte", "quase",
       "roupa", "sinal", "tarde", "mundo", "vento",
       "volta", "zebra", "brisa", "chave", "doido",
       "longe", "folga", "grato", "horta", "jogue",
       "livro", "banco", "prato", "plano", "campo",
       "troca", "limpo", "ponto", "banho", "velho",
       "festa", "noite", "calma", "reino", "tigre",
       "verbo", "vinho", "nobre", "carro", "rival",
       "salto", "pedra", "linha", "carta", "gosto",
       "leite", "beijo", "senha", "cegas", "sorte",
       "passe", "ceder", "andar", "navio", "risco",
       "chefe", "piano", "torre", "fecho", "farda",
       "botao", "livre", "farol", "fosco", "vento",
       "vazio", "molho", "sonho", "exato", "feito",
       "verde", "fundo", "pouco", "lunar", "morro"
    };

    cout << "Olá!\nVais ter 15 segundo para escrever o máximo de palavras possíveis, lembrate a palavra é só com minúsculas e sem acentos.\nClica enter para começar.";
    cin.ignore();
    system("cls");
    for (int i=3; i>0; i--)
    {
        cout << "\33[92m" << i <<"\33[0m";
        Sleep(1000);
        system("cls");
    }
    
    while (steady_clock::now() - inicio < duracao_limite)
    {
        PalavraRandom = rand() % 85;
        cout << "Escreve a palavra \33[92m" << Palavras[PalavraRandom] << "\33[0m\n";
        cin >> PalavraEscrita;
        count++;
        system("cls");
        if (Palavras[PalavraRandom] == PalavraEscrita)
        {
            cout << "\33[92mBoa!\33[0m\n\n";
            Certos++;
        }
        else
        {
            cout << "\n\33[91mOpps\33[0m\n";
        }
    }
    system("cls");

    cout << "\33[91mACABOU!\33[0m\n";
    cout << "Acertaste " << Certos << " de " << count << " palavras em 15s.\nIsso é " << Certos / 15 << " palavras por segundo.\n";
}