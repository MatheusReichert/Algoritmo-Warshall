#ifndef GRAFO_H
#define GRAFO_H


#include"GrafoAbstract.h"

class Grafo : public GrafoAbstract
{
	private:
    
public:

    int maximoDeVertices;
    Grafo(int maximoDeVertices);
    ~Grafo();
    void adicionar(int verticeUm, int verticeDois);
    void remover(int verticeUm, int verticeDois) ;
    int ehAdjecente(int verticeUm, int verticeDois);
    void imprimeMatrizAdjecente();
    std::vector<std::vector<int>> getMatrizAdjecente();
  
};


#endif