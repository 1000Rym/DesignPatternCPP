//
//  Operator1.cpp
//  DesignPatternLearner
//
//  Created by 천림 on 2015. 3. 18..
//  Copyright (c) 2015년 천림. All rights reserved.
//

#include "OriginalOperator.h"

double OriginalOperator:: getResult(double numberA, double numberB ,char operate)
{
    double result = 0;
    
    switch (operate) {
        case '+':
            result = numberA+numberB;
            break;
        case '-':
            result = numberA-numberB;
            break;
        case '*':
            result = numberA*numberB;
            break;
        case '/':
            result = numberA/numberB;
            break;
        default:
            break;
    }
    
    return result;
}