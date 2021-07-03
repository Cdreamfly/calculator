//
// Created by cmf on 2021/7/2.
//

#include "operation.h"

double OperationApply(Operation *operation) {
    if (operation->Operator){
        operation->Operator(operation->left, operation->right);
    }else{
        return 0.0;
    }
}

double Plus(double left, double right) {
    return left + right;
}

double Minus(double left, double right) {
    return left - right;
}

double Multiply(double left, double right) {
    return left * right;
}

double Divide(double left, double right) {
    if (right == 0) {
        return 0;
    } else {
        return left / right;
    }
}
