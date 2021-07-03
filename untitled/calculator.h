//
// Created by cmf on 2021/7/2.
//

#include "operation.h"

#ifndef HELLO_GTK_CALCULATOR_H
#define HELLO_GTK_CALCULATOR_H
#define MAX_CHAR 13
typedef struct {
    char input_buffer[MAX_CHAR + 1];
    int input_buffer_position;
    double result;

    Operation previous_operation;
    Operation current_operation;

    void (*display_text)(char *);
} CalcContext;

int HandleInput(CalcContext *context, char input_vale);

CalcContext *CreateCalcContext();

void DestoryCalcContext(CalcContext **p_context);

#endif //HELLO_GTK_CALCULATOR_H
