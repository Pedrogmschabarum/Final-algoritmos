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

void fim()
{
    cout << "|---|---|---|---|---|---|---|---|---|---|---|---|" << endl;
    cout << "--|---|---|---|---|---Adeus---|---|---|---|---|--" << endl;
    cout << "|---|---|---|---|---|---|---|---|---|---|---|---|" << endl;
    cout << endl;
}

void opcoes()
{
    cout << endl;
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
    cout << endl;
}

main()
{
    cabecalho();

    short int opcao;
    int valor, posicao;
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
            cin >> valor;
            cin >> posicao;
            liste.adicionarPosicao(valor, posicao);
            break;
        case 3:
            cin >> valor;
            liste.adicionar(valor);
            break;
        case 4:
            liste.removerInicio();
            break;
        case 5:
            cin >> posicao;
            liste.retirarPosicao(posicao);
            break;
        case 6:
            liste.remover();
            break;
        case 7:
            cin >> posicao;
            liste.retirarNo(posicao);
            break;
        case 8:
            cout << liste.getTamanho() << endl;
            break;
        case 9:
            cin >> valor;
            cout << liste.encontrarPosicao(valor) << endl;
            break;
        case 10:
            cin >> valor;
            cout << liste.contem(valor) << endl;
            break;
        case 11:
            //11-Criar nova lista
            break;

        case 12:
            // 12-Destruir lista
            break;

        case 13:
            liste.imprimirLista();
            break;

        case 14:
            fim();
            break;

        default:
            cout << "Operação invalida!" << endl;
            break;
        }

    } while (opcao != 14);

    return 0;
}