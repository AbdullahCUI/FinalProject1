#ifndef QUIZ_H
#define QUIZ_H

// Structure to represent a quiz question
struct Question {
    char questionText[100];
    char options[4][50];
    int correctOption;
};