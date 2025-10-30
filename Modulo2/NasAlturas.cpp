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
    int Idades[30], Alturas[30], SomaAlturas = 0, MediaAlturas = 0, AlunosAbaixo = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Diz a idade do " << i + 1 << "º aluno: ";
        cin >> Idades[i];
        cout << "E a sua altura: ";
        cin >> Alturas[i];
        SomaAlturas = SomaAlturas + Alturas[i];
    }
    MediaAlturas = SomaAlturas / 5;
    for (int i = 0; i < 5; i++)
    {
        if (Idades[i] >= 13)
        {
            if (Alturas[i] < MediaAlturas)
            {
                AlunosAbaixo++;
            }
        }
    }

    cout << "Há " << AlunosAbaixo << " alunos com mais de 13 anos abaixo da média de alturas.";
}