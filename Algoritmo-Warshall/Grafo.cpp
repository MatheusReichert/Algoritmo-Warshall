#include "Grafo.h"
#include <iostream>

Grafo::Grafo(int maximoDeVertices) : matrizAdj(maximoDeVertices, std::vector<int>(maximoDeVertices, 0)){
    this->maximoDeVertices = maximoDeVertices;

}

Grafo::~Grafo()
{
}

void Grafo::adicionar(int verticeUm, int verticeDois)
{
    matrizAdj[verticeUm][verticeDois] = 1;
    matrizAdj[verticeDois][verticeUm] = 1;
}

void Grafo::remover(int verticeUm, int verticeDois)
{
    matrizAdj[verticeUm][verticeDois] = 0;
}

int Grafo::ehAdjecente(int verticeUm, int verticeDois)
{
    return matrizAdj[verticeUm][verticeDois];
}


void Grafo::imprimeMatrizAdjecente()
{
    for (int j = -1; j < maximoDeVertices; j++) {
        if (j != -1) {
            std::cout << "|" << j << "|" << "\t";
        }
        else {
            std::cout << "|" << "#" << "|" << "\t";
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < maximoDeVertices; i++) {
        std::cout << "|" << i << "|" << "\t";

        for (int j = 0; j < maximoDeVertices; j++) {
            std::cout << " " << matrizAdj[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}


std::vector<std::vector<int>> Grafo::getMatrizAdjecente()
{
    return matrizAdj;
}