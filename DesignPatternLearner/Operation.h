//
//  Operation.h
//  DesignPatternLearner
//
//  Created by 천림 on 2015. 4. 8..
//  Copyright (c) 2015년 천림. All rights reserved.
//

#ifndef __DesignPatternLearner__Operation__
#define __DesignPatternLearner__Operation__

#include <stdio.h>

#endif /* defined(__DesignPatternLearner__Operation__) */
class Operation
{
public:
    double numberA;
    double numberB;
    virtual double getResult();
};

class OperationAdd : public Operation
{
public:
    double getResult();
};

class OperationMinus: public Operation
{
public:
    double getResult();
};

class OperationMul: public Operation
{
public:
    double getResult();
};

class OperationDiv: public Operation
{
public:
    double getResult();
};