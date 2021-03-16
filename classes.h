#include <vector>
/**
 * This class models the information given by the user.
 * IMPORTANT: THE CLASS IS NOT EXACTLY AS SPECIFIED ON THE ASSIGNMENT YET.
 */
class KenoBet {
  public:
    double m_initial_credit;           //!< Initial Credits Available to the User.
    int m_number_of_rounds;            //!< Number of Rounds the User Wishes to Play.
    std::vector<int> _set_of_numbers;  //!< Numbers Chosen by the User.

    //TODO: Getters and Setters.
};