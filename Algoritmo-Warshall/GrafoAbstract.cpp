#include "GrafoAbstract.h"

GrafoAbstract::GrafoAbstract(int maximoDeVertices) : matrizAdj(maximoDeVertices, std::vector<int>(maximoDeVertices, 0))
{
}

GrafoAbstract::~GrafoAbstract()
{
}

std::vector<std::vector<int>> GrafoAbstract::getMatrizAdjecente()
{
	return matrizAdj;
}
