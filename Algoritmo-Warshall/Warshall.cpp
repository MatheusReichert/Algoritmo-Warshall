#include "Warshall.h"
#include<vector>
#include <iostream>
#include<windows.h>
Warshall::Warshall(std::vector<std::vector<int>> matrix, int maximoDeVertices)
{
    this->maximoDeVertices = maximoDeVertices;
    this->matrizCaminho = matrix;

}

void Warshall::fechamentoTransitivo() {

    for (int i = 0; i < this->maximoDeVertices; i++) {
        for (int j = 0; j < this->maximoDeVertices; j++) {
            if (this->matrizCaminho[i][j] > 0) {
                this->matrizCaminho[i][j] = 1;
            }

        }
    }

    for (int k = 0; k < maximoDeVertices; k++) {
        for (int i = 0; i < maximoDeVertices; i++) {
            if (matrizCaminho[i][k] > 0) {
                for (int j = 0; j < maximoDeVertices; j++) {
                        matrizCaminho[i][j] = matrizCaminho[i][j] | matrizCaminho[k][j];
                        std::cout << "Matriz de acessibilidade usando o Algoritmo de Warshall" << std::endl;
                        imprimeMatrizCaminho();
                        Sleep(500);
                        system("cls");
                }
            }
        }
    }
}


void Warshall::imprimeMatrizCaminho() {
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
            std::cout << " " << matrizCaminho[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}


Warshall::~Warshall()
{
    //dtor
}
