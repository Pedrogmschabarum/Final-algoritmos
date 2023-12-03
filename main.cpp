#include <iostream>
#include "lista.cpp"
#include "no.hpp"
using namespace std;

void cabecalho()
{
    cout << "|---|---|---|---|---|---|---|---|---|---|---|---|" << endl;
    cout << " |---Bem vindo ao programa de fila encadeada---|" << endl;
    cout << "|---|---|---|---|---|---|---|---|---|---|---|---|" << endl;
    cout << endl;
}

void opcoes()
{
    cout << "Selecion e uma opção:" << endl;
    //
    cout << "1-Adicionar elemento no início" << endl;
    cout << "2-Adicionar elemento em uma posição específica" << endl;
    cout << "3-Adicionar elemento no final" << endl;
    cout << "4-Remover elemento no início" << endl;
    cout << "5-Remover elemento em uma posição específica" << endl;
    cout << "6-Remover elemento no final" << endl;
    cout << "7-Remover um elemento específico" << endl;
    cout << "8-Verificar tamanho da lista" << endl;
    cout << "9-Encontrar posição de um elemento" << endl;
    cout << "10-Verificar existência de um elemento" << endl;
    cout << "11-Criar nova lista" << endl;
    cout << "12-Destruir lista" << endl;
    cout << "13-Imprimir lista" << endl;
    cout << "14-Encerrar programa" << endl;
}

main()
{
    cabecalho();

    short int opcao;
    int valor;
    lista liste;

    do
    {
        // chama a lista de opçoes;
        opcoes();

        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cin >> valor;
            liste.adicionarInicio(valor);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            liste.removerInicio();
            break;
        case 5:

            break;
        case 6:
            liste.remover();
            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
        case 10:

            break;
        case 11:

            break;

        case 12:

            break;

        case 13:

            break;

        default:
            break;
        }

    } while (opcao != 14);

    return 0;
}