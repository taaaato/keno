#include <vector>
/**
 * This class models the information given by the user.
 */
class KenoBet {
  public:
    double initialCredit;           //!< Initial Credits Available to the User.
    int numberOfRounds;             //!< Number of Rounds the User Wishes to Play.
    std::vector<int> setOfNumbers;  //!< Numbers Chosen by the User.
};