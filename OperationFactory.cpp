//
//  OperationFactory.cpp
//  DesignPatternLearner
//
//  Created by 천림 on 2015. 4. 8..
//  Copyright (c) 2015년 천림. All rights reserved.
//

#include "OperationFactory.h"
#include <iostream>
Operation *OperationFactory::getOperation(char operate)
{
    Operation* oper = NULL;
    
    switch(operate)
    {
            case '+':
            oper = new OperationAdd();
            break;
            
            case '-':
            oper = new OperationMinus();
            break;
            
            case '/':
            oper = new OperationDiv();
            break;
            
            case '*':
            oper = new OperationMul();
            break;
    }
    
    return oper;
};