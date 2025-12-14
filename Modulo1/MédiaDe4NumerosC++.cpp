#include <iostream>

int main()
{
int P1,P2,P3,P4,media;

std::cout<<"Por favor, escreva um número: ";
std::cin>>P1;

std::cout<<"Por favor, escreva outro número: ";
std::cin>>P2;

std::cout<<"Por favor, escreva outro número: ";
std::cin>>P3;

std::cout<<"Por favor, escreva outro número: ";
std::cin>>P4;

media = (P1+P2+P3+P4)/4;
std::cout<<"A média dos 4 números é "<<media<<"!!!";
}
