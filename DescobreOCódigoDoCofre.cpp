/*

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
int Digito1, Digito2, Digito3, Digito4;

Digito1 = rand() % 10;
Digito2 = rand() % 10;
Digito3 = rand() % 10;
Digito4 = rand() % 10;

std::cout<<Digito1<<"."<<Digito2<<"."<<Digito3<<"."<<Digito4<<".--ISTO É BATOTA\n"; /*Tirar as "/" e os "*" para ativar batota*/ 

int Guess1, Guess2, Guess3, Guess4, NumerosCertos, cont;
cont = 0;

std::cout<<"Boa! Conseguiste entrar no banco! (Enter para continuar)";
std::cin.ignore();
std::cout<<"Mas agora tens de abrir o cofre antes da policia chegar.";
std::cin.ignore();
std::cout<<"São 4 digitos, insere um de cada vez por ordem, saberas quantos números acertaste cada vez.";
std::cin.ignore();
std::cout<<"Clica enter para começar.";
std::cin.ignore();

while (NumerosCertos != 4)
{
    NumerosCertos = 0;
    cont = cont + 1;
    
    std::cout<<"1º Digito: ";
    std::cin>>Guess1;
    std::cout<<"2º Digito: ";
    std::cin>>Guess2;
    std::cout<<"3º Digito: ";
    std::cin>>Guess3;
    std::cout<<"4º Digito: ";
    std::cin>>Guess4;
    
    if (Guess1 == Digito1)
    {
        NumerosCertos = NumerosCertos + 1;
    }
        if (Guess2 == Digito2)
    {
        NumerosCertos = NumerosCertos + 1;
    }
        if (Guess3 == Digito3)
    {
        NumerosCertos = NumerosCertos + 1;
    }
        if (Guess4 == Digito4)
    {
        NumerosCertos = NumerosCertos + 1;
    }
    
    if (cont == 9)
    {
        std::cout<<"*🚨 Sirenes da polícia 🚨* Rápido! A polícia está quase a chegar só tens tempo para mais uma tentativa!\n";
        std::cin.ignore();
    }
    if (cont == 10)
    {
        std::cout<<"🚨 🚓  Demoraste muito tempo a polícia apanhou-te 🚓 🚨";
        std::cin.ignore();
        return 0;
    }

    if (NumerosCertos != 4)
    {
    std::cout<<"Acertaste "<<NumerosCertos<<".\n Tenta outra vez.\n";
    std::cout<<"\n";
    }

}
    std::cout<<"🎉  Boa! Conseguiste robuar o cofre sem seres apanhado! 🎉";
    return 0;

}