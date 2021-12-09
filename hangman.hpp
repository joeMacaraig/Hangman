//function declarations

#include <vector> 

using namespace std; 

void intro(); //display title and instructions
void status(vector<char> incorrect, string output); //prints status of players and the words _ _ _ ...
void mistakes(int wrong); //display the hangman and their chances
void gameover(string word, string output); //winning conditions
