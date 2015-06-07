//
//  Operation.cpp
//  DesignPatternLearner
//
//  Created by 천림 on 2015. 4. 8..
//  Copyright (c) 2015년 천림. All rights reserved.
//

#include "Operation.h"


double Operation::getResult()
{
    return 0;
};

double OperationAdd::getResult()
{
    double result = this->numberA+this->numberB;
    return result;
};

double OperationMinus::getResult()
{
    double result = this->numberA-this->numberB;
    return result;
};

double OperationMul::getResult()
{
    double result= this->numberA*this->numberB;
    return result;
};

double OperationDiv:: getResult(){
    double result = 0;
    if(this->numberB == 0){
        throw "Div number can't be 0";
    }else{
        result = numberA/numberB;
    }
    
    return result;
};





