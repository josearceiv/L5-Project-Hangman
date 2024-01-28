## Project 5: Hangman

# Background
Hangman is a popular word-guessing game where one player thinks of a word and the other player tries to guess the word by suggesting letters one at a time. The game is often played on paper, but in this project, we will create a version using C++.

In Hangman, the word to be guessed is initially hidden, represented by blank spaces for each letter. The player guesses letters, and if the guessed letter is in the word, it is revealed in the correct position(s). However, if the guessed letter is not in the word, the player receives an incorrect guess. For each incorrect guess, a part of a hangman figure is drawn, and the player has a limited number of incorrect guesses before losing the game.

# Objective
Create a C++ program that implements a Hangman game. The program should randomly select a word from an array and prompt the user to guess the letters in then word. The player can only has 5 incorrect guesses.

# Instructions:
1. The game should display a welcome message.
2. Guess a letter by entering it at the prompt.
3. The program should inform you if your guess is correct or incorrect.
4. The displayed word should update to show the correctly guessed letters.
5. Continue guessing letters until you win by guessing the word or reach 5 incorrect guesses.
6. If you win, the program should display a congratulatory message.
7. If you lose, the program should reveal the word you were trying to guess.
8. Remember, functions will probably help to organize code.
