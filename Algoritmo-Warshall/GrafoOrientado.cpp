#include "GrafoOrientado.h"
#include <iostream>

Grafo::Grafo(int maximoDeVertices) : GrafoAbstract(maximoDeVertices) {
    this->maximoDeVertices = maximoDeVertices;

}

Grafo::~Grafo()
{
}

void Grafo::adicionar(int verticeUm, int verticeDois)
{
    if (matrizAdj[verticeUm][verticeDois] == 0) {
        matrizAdj[verticeUm][verticeDois] = 1;
    }
    else {
        matrizAdj[verticeUm][verticeDois]++;
    }


}

void Grafo::remover(int verticeUm, int verticeDois)
{
    if (matrizAdj[verticeUm][verticeDois] > 0) {
        matrizAdj[verticeUm][verticeDois]--;
    }
}

int Grafo::ehAdjecente(int verticeUm, int verticeDois)
{
    if (matrizAdj[verticeUm][verticeDois] > 0) {
        return 1;
    }
    return 0;
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