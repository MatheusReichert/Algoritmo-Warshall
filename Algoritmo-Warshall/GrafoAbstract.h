#ifndef GRAFO_ABSTRACT_H
#define GRAFO_ABSTRACT_H

#include"vector"

class GrafoAbstract
{
protected:
	std::vector<std::vector<int>> matrizAdj;
public:
	GrafoAbstract(int maximoDeVertices);
	virtual ~GrafoAbstract();
	std::vector<std::vector<int>> getMatrizAdjecente();
};

#include"vector"
#endif


