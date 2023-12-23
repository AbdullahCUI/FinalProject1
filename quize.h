#ifndef QUIZ_H
#define QUIZ_H

// Structure to represent a quiz question
struct Question {
    char questionText[100];
    char options[4][50];
    int correctOption;
};

// Function declarations
void displayQuestion(struct Question *question);
int takeUserInput();
int evaluateAnswer(int userChoice, struct Question *question);
void displayResult(int score, int totalQuestions);

#endif // QUIZ_H