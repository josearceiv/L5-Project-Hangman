#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string selectRandomWord() {
    // Array of words for the game
    string words[] = {"coding", "challenge", "hangman", "programming", "computer"};

    // Calculate the number of words in the array
    int numWords = sizeof(words) / sizeof(words[0]);

    // Generate a random index to select a word from the array
    int randomIndex = rand() % numWords;

    // Return the randomly selected word
    return words[randomIndex];
}

bool isWordGuessed(const string& word, const string& guessedLetters) {
    for (char letter : word) {
        if (guessedLetters.find(letter) == string::npos) {
            return false;
        }
    }
    return true;
}

void displayWord(const string& word, const string& guessedLetters) {
    for (char letter : word) {
        if (guessedLetters.find(letter) != string::npos) {
            cout << letter << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    srand(time(0));

    cout << "Welcome to Hangman!" << endl;

    string wordToGuess = selectRandomWord();
    string guessedLetters = "";
    int incorrectGuesses = 0;

    while (incorrectGuesses < 5 && !isWordGuessed(wordToGuess, guessedLetters)) {
        cout << "Guess a letter: ";
        char guess;
        cin >> guess;

        if (guessedLetters.find(guess) != string::npos) {
            cout << "You already guessed that letter. Try again." << endl;
            continue;
        }

        guessedLetters += guess;

        if (wordToGuess.find(guess) != string::npos) {
            cout << "Correct guess!" << endl;
        } else {
            incorrectGuesses++;
            cout << "Incorrect guess!" << endl;
            cout << incorrectGuesses << "/5" << endl;
        }

        cout << "Word: ";
        displayWord(wordToGuess, guessedLetters);
    }

    if (isWordGuessed(wordToGuess, guessedLetters)) {
        cout << "Congratulations! You guessed the word." << endl;
    } else {
        cout << "Sorry, you ran out of guesses. The word was: " << wordToGuess << endl;
    }

    return 0;
}
