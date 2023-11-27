#include <iostream>
#include "lista.hpp"

using namespace std;

void cabecalhoEOpcoes()
{
    cout << "Selecion e uma opção:" << endl;
    //
    cout << "1-Adicionar elemento no início" << endl;
    cout << "2-Adicionar elemento em uma posição específica" << endl;
    cout << "3-Adicionar elemento no final" << endl;
    cout << "4-Remover elemento no iníceio" << endl;
    cout << "5-Remover elemento em uma posição específica" << endl;
    cout << "6-Remover elemento no final" << endl;
    cout << "7-Remover um elemento específico" << endl;
    cout << "8-Verificar tamanho da lista" << endl;
    cout << "9-Encontrar posição de um elemento" << endl;
    cout << "10-Verificar existência de um elemento" << endl;
    cout << "11-Criar nova lista" << endl;
    cout << "12-Destruir lista" << endl;
    cout << "13-Encerrar programa" << endl;
}

main()
{
    cout << "Bem vindo a lista encadeada" << endl;

    short int opcao;

    do
    {
        cabecalhoEOpcoes();
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        
            adicionar();

            break;

        default:
            break;
        }

    } while (opcao != 13);

    return 0;
}