//
//  OperationFactory.h
//  DesignPatternLearner
//
//  Created by 천림 on 2015. 4. 8..
//  Copyright (c) 2015년 천림. All rights reserved.
//

#ifndef __DesignPatternLearner__OperationFactory__
#define __DesignPatternLearner__OperationFactory__

#include <stdio.h>
#include "Operation.h"
#endif /* defined(__DesignPatternLearner__OperationFactory__) */

class OperationFactory{
public:
    static Operation* getOperation(char c);
};