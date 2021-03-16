#ifndef AUXILIAR
#define AUXILIAR
namespace auxiliar{
    bool validNumber(int num, std::vector<int> set, int size, int min, int max);
    int getVariablesFromFile(std::ifstream *file, double &initCred, int *numRounds, std::string *strSetNum);
}
#endif