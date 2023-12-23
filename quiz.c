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
