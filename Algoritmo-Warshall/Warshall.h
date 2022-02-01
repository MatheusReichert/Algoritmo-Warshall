#ifndef WARSHALL_H
#define WARSHALL_H

#include"GrafoOrientado.h"
#include<vector>
class Warshall
{
public:
    Warshall(std::vector<std::vector<int>> matrix, int maximoDeVertices);
    virtual ~Warshall();
    void imprimeMatrizCaminho();
    void fechamentoTransitivo();
protected:

private:
    std::vector<std::vector<int>> matrizCaminho;
    int maximoDeVertices;
};

#endif // WARSHALL_H
