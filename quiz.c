#include <stdio.h>
#include <stdlib.h>
#include "quiz.h"

// Function to display a quiz question
void displayQuestion(struct Question *question) {
    printf("%s\n", question->questionText);
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, question->options[i]);
    }
}

// Function to take user input for answer
int takeUserInput() {
    int choice;
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    return choice;
}

// Function to evaluate the user's answer
int evaluateAnswer(int userChoice, struct Question *question) {
    return (userChoice == question->correctOption) ? 1 : 0;
}
