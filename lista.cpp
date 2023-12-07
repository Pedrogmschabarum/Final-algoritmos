#include <iostream>
#include "lista.hpp"
#include "no.hpp"

lista::lista()
{
    tamanho = -1;
}

lista::~lista()
{
}

void lista::adicionar(int elemento)
{
    No *novo = new No(elemento);

    if (tamanho == -1)
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

void lista::adicionarInicio(int elemento)
{
    No *novo = new No(elemento);
    novo->proximo = inicio;
    inicio = novo;
    this->tamanho++;
}

void lista::adicionarPosicao(int elemento, int posicao)
{
    if (posicao < 0)
    {
        std::cout << "Posição inválida." << std::endl;
        return;
    }

    if (posicao == 0)
    {
        adicionarInicio(elemento);
        return;
    }

    No *novo = new No(elemento);
    No *anterior = nullptr;
    No *atual = inicio;

    for (int i = 0; i < posicao && atual != nullptr; i++)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr)
    {
        adicionar(elemento);
        delete novo;
        return;
    }

    novo->proximo = atual;
    if (anterior != nullptr)
    {
        anterior->proximo = novo;
    }
    else
    {
        inicio = novo;
    }
}

void lista::remover()
{
    if (!listaVazia())
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

    if (anterior != nullptr)
    {
        anterior->proximo = nullptr;
    }
    else
    {
        inicio = nullptr;
    }
}

void lista::removerInicio()
{
    if (!listaVazia())
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
    if (!listaVazia() || inicio == nullptr)
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

void lista::retirarNo(int elemento)
{
    No *anterior = nullptr;
    No *atual = inicio;

    while (atual != nullptr && atual->valor != elemento)
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
    if (this->tamanho == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int lista::encontrarPosicao(int elemento)
{
    int posicao = 0;
    No *atual = inicio;

    while (atual != nullptr && atual->valor != elemento)
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

bool lista::contem(int elemento)
{
    return encontrarPosicao(elemento) != -1;
}

void lista::imprimirLista()
{
    if (!listaVazia())
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