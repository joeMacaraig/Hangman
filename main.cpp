#include <iostream> 
#include <cstdlib>
#include "hangman.hpp"

int main(){

srand(time(NULL));

string wordBank[] = {"basketball", "programming", "palasade", "sleeping"}; //random words
string display[] = {"__________", "___________", "________", "________"};
int random = rand()% 4+1; //random number from 1-4
int wrong = 0; //tracks the users mistakes
vector<char> incorrect; //will store the letters that are wrong
char guess; //user input
bool correct = false; //true if answer is correct

string word = wordBank[random];
string output = display[random];

intro();

while(output != word && wrong < 6){

    status(incorrect,output);
    mistakes(wrong);

    cout << "Guess a letter: ";
    cin >> guess;

    for(int i = 0; i < word.length(); i++){
        if(guess == word[i]){
            output[i] = guess; 
            correct = true;
        }
    }

    if(correct == true){
        cout << "You got it correct!\n";
    }
    else{
        cout <<"WRONG!!!\n";
        incorrect.push_back(guess);
        wrong++;
    }

    correct = false; 

}

gameover(word, output);

}