#include <iostream>
#include <fstream> 
#include <string>
#include <vector>       // std::vector
#include <algorithm>

#include "aux.h"

/**
* This namespace contais auxiliar functions.
**/
namespace auxiliar{


    /**
    *  This function checks if the number is in the valid range and if it's not already added to the set. 
    **/
    bool validNumber(int num, std::vector<int> set, int size, int min, int max){

        if (num >= min & num <= max){
            if (std::find(set.begin(), set.end(), num) != set.end())
                return false;
            return true;
        }
        return false;
    }

    /**
    * This function extracts the variables from the user file.
    **/
    int getVariablesFromFile(std::ifstream *file, double &initCred, int *numRounds, std::string *strSetNum){
            
        // If not possible to read the file, print a error message and close program.
        if (!*file)
        {
            std::cerr << "Error reading the file!" << '\n';
            return 1;
        }
        // Reading the file, saving to a string and then to variables.

        int counterOfLines{1};
        std::string tempString;
        
        while (*file){
            std::getline(*file, tempString);
            // Ignore empty lines.
            if (tempString == "") {
                continue;
            }
            else{
                // First valid line = Initial credit.
                if (counterOfLines==1){
                    initCred = std::stod(tempString);
                    //TODO: CHECK FOR ERROR WITH TRY CATCH
                    counterOfLines++;
                    tempString = "";
                }
                // Second valid line = Numeber of rounds.
                else if (counterOfLines==2){
                    *numRounds = std::stoi(tempString);
                    //TODO: CHECK FOR ERROR WITH TRY CATCH
                    counterOfLines++;
                    tempString = "";
                }
                // Third valid line = Set of numbers.
                else{
                    *strSetNum = tempString;

                    tempString = "";
                }
            }
        }
        return 0;
    }

    // This function extracts the data from the table payout file.
    // TODO: getPayoutTableData(PAYOUT_TAB_FILE_PATH,&payoutTable,MAX_PAYOUT_TAB_SIZ)
}

