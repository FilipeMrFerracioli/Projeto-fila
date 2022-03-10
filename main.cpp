#include <fila.h>
#include <iostream>
#include <QString>

int main()
{
    minhaNamespace::Fila fila(4);

    //1 - teste fila cheia - nao
    std::cout << "Fila cheia: " << fila.estaCheia();

    //2 - teste fila vazia - sim
    std::cout << "\nFila cheia: " << fila.estaVazia();

    //3 - teste quantidade de elementos - 0
    std::cout << "\nQuantidade elementos: " << fila.getQuantidadeElementos();

    //4 - inserir dois elementos
    std::cout << "\nInserir dois elementos (15, 20)";
    fila.inserir(15);
    fila.inserir(20);

    //5 - teste fila cheia - nao
    std::cout << "\nFila cheia: " << fila.estaCheia();

    //6 - teste fila vazia - nao
    std::cout << "\nFila cheia: " << fila.estaVazia();

    //7 - teste quantidade de elementos - 2
    std::cout << "\nQuantidade elementos: " << fila.getQuantidadeElementos();

    //8 - inserir dois elementos
    std::cout << "\nInserir dois elementos (16, 21)";
    fila.inserir(16);
    fila.inserir(21);

    //9 teste fila cheia - sim
    std::cout << "\nFila cheia: " << fila.estaCheia();

    //10 teste fila vazia - nao
    std::cout << "\nFila cheia: " << fila.estaVazia();

    //11 teste quantidade de elementos
    std::cout << "\nQuantidade elementos: " << fila.getQuantidadeElementos();

    //12 inserir 1 elemento - erro
    /*std::cout << "\nInserir dois elementos (33)";
    fila.inserir(33);*/

    //13 comentar 12

    //14 acessar elemento
    std::cout << "\nAcessar elemento: " << fila.acessar();

    //15 retirar elemento
    std::cout << "\nRetirar elemento";
    fila.retirar();

    //16 acessar elemento de novo
    std::cout << "\nAcessar elemento: " << fila.acessar();

    //17 retirar 4 elementos
    std::cout << "\nRetirar 4 elementos";
    fila.retirar();
    fila.retirar();
    fila.retirar();
    /*fila.retirar();*/

    //18 modificar a retirada para 3 elementos

    //19 acessar a fila - resposta erro a pilha esta vazia
    /*std::cout << "\nQuantidade elementos: " << fila.getQuantidadeElementos();*/
    std::cout << "\nAcessar elemento: " << fila.acessar();

    std::cout << "\n";
}
