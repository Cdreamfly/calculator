//
// Created by cmf on 2021/7/2.
//

#ifndef HELLO_GTK_OPERATOR_H
#define HELLO_GTK_OPERATOR_H

typedef struct {
    double left;
    double right;

    double (*Operator)(double, double);
} Operation;

double OperationApply(Operation *operation);

double Plus(double left, double right);

double Minus(double left, double right);

double Multiply(double left, double right);

double Divide(double left, double right);

#endif //HELLO_GTK_OPERATOR_H
