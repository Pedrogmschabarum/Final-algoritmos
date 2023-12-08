#include <Windows.h>
#include <iostream>
#include "lista.hpp"

lista::lista()
{
    tamanho = -1;
}

lista::~lista()
{
}

void lista::adicionar(int dado)
{
    No *novo = new No(dado);

    if (listaVazia())
    {
        inicio = novo;
    }
    else
    {
        No *atual = inicio;
        while (atual->proximo != nullptr)
        {
            atual = atual->proximo;
        }
        atual->proximo = novo;
    }
    this->tamanho++;
}

void lista::adicionarInicio(int dado)
{
    No *novo = new No(dado);
    novo->proximo = inicio;
    inicio = novo;
    this->tamanho++;
}

void lista::adicionarPosicao(int dado, int posicao)
{
    if (posicao < 0)
    {
        std::cout << "Posição inválida." << std::endl;
        return;
    }

    if (posicao == 0)
    {
        adicionarInicio(dado);
        return;
    }

    No *novo = new No(dado);
    No *anterior = nullptr, *atual = this->inicio;
    int i;

    for (i = 0; i < posicao && atual != nullptr; i++)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if (i < posicao && atual == nullptr)
    {
        std::cout << "Posicao nao existe. Deseja inserir no final da fila?\n1-Sim\n2-Nao" << std::endl;
        short int opcao;
        std::cin >> opcao;
        if (opcao - 1)
        {
            std::cout << "Posicao nao inserida." << std::endl;
            return;
        }
        else
        {
            adicionar(dado);
            delete novo;
            return;
        }
    }

    novo->proximo = atual;
    anterior->proximo = novo;
}

void lista::remover()
{
    if (listaVazia())
    {
        std::cout << "A lista está vazia." << std::endl;
        return;
    }

    if (inicio->proximo == nullptr)
    {
        delete inicio;
        inicio = nullptr;
        return;
    }

    No *anterior = nullptr;
    No *atual = inicio;
    while (atual->proximo != nullptr)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    delete atual;

    // if (anterior != nullptr)
    // {
    //     anterior->proximo = nullptr;
    // }
    // else
    // {
    //     inicio = nullptr;
    // }
}

void lista::removerInicio()
{
    if (listaVazia())
    {
        std::cout << "A lista está vazia." << std::endl;
        return;
    }

    No *temp = inicio;
    inicio = inicio->proximo;
    delete temp;
}

void lista::retirarPosicao(int posicao)
{
    if (listaVazia() || inicio == nullptr)
    {
        std::cout << "Posição inválida." << std::endl;
        return;
    }

    No *anterior = nullptr;
    No *atual = inicio;
    for (int i = 0; i < posicao && atual != nullptr; i++)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr)
    {
        std::cout << "Posição inválida." << std::endl;
        return;
    }

    if (anterior == nullptr)
    {
        // Remoção do primeiro elemento
        inicio = atual->proximo;
    }
    else
    {
        anterior->proximo = atual->proximo;
    }

    delete atual;
}

void lista::retirarNo(int dado)
{
    No *anterior = nullptr;
    No *atual = inicio;

    while (atual != nullptr && atual->valor != dado)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr)
    {
        std::cout << "Elemento não encontrado." << std::endl;
        return;
    }

    if (anterior == nullptr)
    {
        // Remoção do primeiro elemento
        inicio = atual->proximo;
    }
    else
    {
        anterior->proximo = atual->proximo;
    }

    delete atual;
}

bool lista::listaVazia()
{
    if (this->tamanho == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int lista::encontrarPosicao(int dado)
{
    int posicao = 0;
    No *atual = inicio;

    while (atual != nullptr && atual->valor != dado)
    {
        atual = atual->proximo;
        posicao++;
    }

    if (atual == nullptr)
    {
        return -1; // Elemento não encontrado
    }

    return posicao;
}

bool lista::contem(int dado)
{
    return encontrarPosicao(dado) != -1;
}

void lista::imprimirLista()
{
    if (listaVazia())
    {
        std::cout << "A lista está vazia!" << std::endl;
        return;
    }

    No *atual = inicio;

    while (atual != nullptr)
    {
        Sleep(500);
        std::cout << atual->valor << " ";
        atual = atual->proximo;
    }

    std::cout << std::endl;
}

int lista::getTamanho()
{
    return this->tamanho;
}

void lista::destruir()
{
    while (inicio != nullptr)
    {
        No *temp = inicio;
        inicio = inicio->proximo;
        delete temp;
    }
}