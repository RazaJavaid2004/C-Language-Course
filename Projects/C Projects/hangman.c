/*
Creating a Hangman game in C is a fun way to practice using arrays, strings, loops,
and control structures. Let's build a simple console-based Hangman game step by step.

Step-by-Step Implementation
Define Constants and Variables:

Define the maximum number of incorrect guesses, the word to guess, and other necessary variables.

Function Prototypes:

Initialize the game

Display the game state

Handle user input

Check if the game is won or lost
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100
#define MAX_INCORRECT_GUESSES 6

void initializeGame(char word[], char guessedWord[], int *incorrectGuesses);
void displayGameState(char guessedWord[], int incorrectGuesses);
int handleGuess(char word[], char guessedWord[], char guess);
int checkWin(char guessedWord[], char word[]);

int main() {
    char word[MAX_WORD_LENGTH] = "hello";
    char guessedWord[MAX_WORD_LENGTH];
    int incorrectGuesses = 0;
    char guess;

    initializeGame(word, guessedWord, &incorrectGuesses);

    while (incorrectGuesses < MAX_INCORRECT_GUESSES && !checkWin(guessedWord, word)) {
        displayGameState(guessedWord, incorrectGuesses);
        printf("Enter your guess: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        if (!handleGuess(word, guessedWord, guess)) {
            incorrectGuesses++;
        }
    }

    displayGameState(guessedWord, incorrectGuesses);

    if (checkWin(guessedWord, word)) {
        printf("Congratulations! You guessed the word: %s\n", word);
    } else {
        printf("Sorry, you lost. The word was: %s\n", word);
    }

    return 0;
}

// Initialize the game state
void initializeGame(char word[], char guessedWord[], int *incorrectGuesses) {
    *incorrectGuesses = 0;
    for (int i = 0; i < strlen(word); i++) {
        guessedWord[i] = '_';
    }
    guessedWord[strlen(word)] = '\0';
}

// Display the current game state
void displayGameState(char guessedWord[], int incorrectGuesses) {
    printf("Word: %s\n", guessedWord);
    printf("Incorrect guesses: %d\n", incorrectGuesses);
}

// Handle the user's guess
int handleGuess(char word[], char guessedWord[], char guess) {
    int correct = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guess) {
            guessedWord[i] = guess;
            correct = 1;
        }
    }
    return correct;
}

// Check if the game is won
int checkWin(char guessedWord[], char word[]) {
    return strcmp(guessedWord, word) == 0;
}