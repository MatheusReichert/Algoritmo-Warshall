#include<stdio.h>
#include<iostream>
#include"Grafo.h"
#include"Warshall.h"

using namespace std;

int vertices = 0;
int verticeUm, verticeDois;

void menu() {
    while (true) {

        cout << "Digite o numero de vertices do grafo: " << endl;
        cout << "(-1 para fechar)" << endl;
        cin >> vertices;
        if (vertices == -1) {
            break;
        }
        Grafo a(vertices);

        while (true)
        {
            cout << "Digite os pares que formam um vertice(relaçoes de adjecencia): " << endl << "Ex: 1 2" << endl << "Digite -1 para parar" << endl;
            cin >> verticeUm;
            if (verticeUm == -1) {
                break;
            }
            cin >> verticeDois;

            a.adicionar(verticeUm, verticeDois);
        }

        system("cls");
        cout << "Matriz adjecencia" << endl;
        a.imprimeMatrizAdjecente();
        system("pause");
        system("cls");
        Warshall w(a.getMatrizAdjecente(), vertices);
        system("cls");
        w.fechamentoTransitivo();
        cout << "Matriz de acessibilidade usando o Algoritmo de Warshall" << endl;
        w.imprimeMatrizCaminho();
        system("pause");
        system("cls");

    }
}

int main() {
       
    menu();
    
}
