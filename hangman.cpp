#include <iostream> 
#include "hangman.hpp"

void intro(){
    cout << "==================\n";
    cout << "      Hangman\n";
    cout << "==================\n";
    cout << "Instructions:\n";
    cout << "Guess the correct\nletters to win!!!\n";
}

void status(vector<char> incorrect, string output){
    cout << "Incorrect Letters: ";
    for(int i = 0; i < incorrect.size(); i++){
        cout << incorrect[i] << " ";
    }

    cout << "\nWord: ";
    for(int j = 0; j < output.size(); j++){
        cout << output[j] << " ";
    }
}

void mistakes(int wrong){

    if(wrong == 0){
        cout << "\n  _____\n";
        cout << "  |   |\n";
        cout << "  |   |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "  =====\n";     
    }
    else if(wrong == 1){
        cout << "  _____\n";
        cout << "  |   |\n";
        cout << "  |   |\n";
        cout << "  O   |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "  =====\n";     
    }
    else if(wrong == 2){
        cout << "  _____\n";
        cout << "  |   |\n";
        cout << "  |   |\n";
        cout << "  O   |\n";
        cout << "  | |\n";
        cout << "  |   |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "  =====\n";     
    }
    else if(wrong == 3){
        cout << "  _____\n";
        cout << "  |   |\n";
        cout << "  |   |\n";
        cout << "  O   |\n";
        cout << "--|   |\n";
        cout << "  |   |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "      |\n";
        cout << "  =====\n";     
    }
    else if(wrong == 4){
        cout << "  _____\n";
        cout << "  |   |\n";
        cout << "  |   |\n";
        cout << "  O   |\n";
        cout << "--| |\n";
        cout << "  |   |\n";
        cout << " /    |\n";
        cout << "/     |\n";
        cout << "      |\n";
        cout << "  =====\n";     
    }
    else if(wrong == 5){
        cout << "  _____\n";
        cout << "  |   |\n";
        cout << "  |   |\n";
        cout << "  O   |\n";
        cout << "--|-- |\n";
        cout << "  |   |\n";
        cout << " /    |\n";
        cout << "/     |\n";
        cout << "      |\n";
        cout << "  =====\n";     
    }
    else{
        cout << "  _____\n";
        cout << "  |   |\n";
        cout << "  |   |\n";
        cout << "  O   |\n";
        cout << "--|-- |\n";
        cout << "  |   |\n";
        cout << " / \\  |\n";
        cout << "/   \\ |\n";
        cout << "      |\n";
        cout << "  =====\n";     
    }
}

void gameover(string word, string output){
    if(output == word){
        cout << "Winner!";
    }
    else{
        cout << "Try Again next time.";
    }
}



/*

        cout << "  _____\n";
        cout << "  |   |\n";
        cout << "  |   |\n";
        cout << "  O   |\n";
        cout << "--|-- |\n";
        cout << "  |   |\n";
        cout << " / \\  |\n";
        cout << "/   \\ |\n";
        cout << "      |\n";
        cout << "  =====\n";

*/