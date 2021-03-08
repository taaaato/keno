#ifndef AUXILIAR
#define AUXILIAR
namespace auxiliar{
    void add(int x,int y);
    bool validNumber(int num, std::vector<int> set, int size, int min, int max);
    int getVariablesFromFile(std::ifstream *file, double *initCred, int *numRounds, std::string *strSetNum);
}
#endif