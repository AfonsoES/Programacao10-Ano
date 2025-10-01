/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
 int M,I,FQ,P,media;
 
 std::cout<<"Insere a nota de Matemática: ";
 std::cin>>M;
 std::cout<<"Insere a nota de Inglês: ";
 std::cin>>I;
 std::cout<<"Insere a nota de Física-Quimica: ";
 std::cin>>FQ;
 std::cout<<"Insere a nota de Português: ";
 std::cin>>P;
 
 media=(M+I+FQ+P)/4;
 std::cout<<"A média das tuas notas é "<<media<<".";
 
    return 0;
}




