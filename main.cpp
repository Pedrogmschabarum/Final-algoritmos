#include <iostream>
#include <Windows.h>
#include "lista.cpp"
#include "no.cpp"

const int DELAY = 500;

using namespace std;

void cabecalho()
{
    Sleep(DELAY);
    cout << "|---|---|---|---|---|---|---|---|---|---|---|---|" << endl;
    cout << " |---Bem vindo ao programa de fila encadeada---|" << endl;
    cout << "|---|---|---|---|---|---|---|---|---|---|---|---|" << endl;
    cout << endl;
}

void fim()
{
    Sleep(DELAY);
    cout << "|---|---|---|---|---|---|---|---|---|---|---|---|" << endl;
    Sleep(DELAY);
    cout << "--|---|---|---|---|---Adeus---|---|---|---|---|--" << endl;
    Sleep(DELAY);
    cout << "|---|---|---|---|---|---|---|---|---|---|---|---|" << endl;
    cout << endl;
}

void opcoes()
{
    Sleep(DELAY);
    cout << endl;
    cout << "Selecion e uma opção:" << endl;
    Sleep(DELAY*2);
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
            Sleep(DELAY);
            cout << "Insira o valor a ser inserido:" << endl;
            cin >> valor;
            liste.adicionarInicio(valor);
            break;
        case 2:
            Sleep(DELAY);
            cout << "Insira o valor a ser inserido:" << endl;
            cin >> valor;
            Sleep(DELAY);
            cout << "Insira a posição desejada:" << endl;
            cin >> posicao;
            liste.adicionarPosicao(valor, posicao);
            break;
        case 3:
            Sleep(DELAY);
            cout << "Insira o valor a ser inserido:" << endl;
            cin >> valor;
            liste.adicionar(valor);
            break;
        case 4:
            Sleep(DELAY);
            liste.removerInicio();
            break;
        case 5:
            Sleep(DELAY);
            cin >> posicao;
            liste.retirarPosicao(posicao);
            break;
        case 6:
            Sleep(DELAY);
            liste.remover();
            break;
        case 7:
            Sleep(DELAY);
            cin >> posicao;
            liste.retirarNo(posicao);
            break;
        case 8:
            Sleep(DELAY);
            cout << liste.getTamanho() << endl;
            break;
        case 9:
            Sleep(DELAY);
            cout << "Insira o valor a ser procurado:" << endl;
            cin >> valor;
            Sleep(DELAY);
            cout << liste.encontrarPosicao(valor) << endl;
            break;
        case 10:
            Sleep(DELAY);
            cout << "Insira o valor a ser procurado:" << endl;
            cin >> valor;
            Sleep(DELAY);
            cout << "A lista contém " << liste.contem(valor) + 1 << " elementos" << endl;
            break;
        case 11:
            Sleep(DELAY);
            cout << liste.listaVazia();
            break;

        case 12:
            Sleep(DELAY);
            // 12-Destruir lista
            break;

        case 13:
            Sleep(DELAY);
            liste.imprimirLista();
            break;

        case 14:
            Sleep(DELAY);
            fim();
            break;

        default:
            Sleep(DELAY);
            cout << "Operação invalida!" << endl;
            break;
        }

    } while (opcao != 14);

    return 0;
}