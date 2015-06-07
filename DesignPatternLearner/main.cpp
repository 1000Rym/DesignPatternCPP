//
//  main.cpp
//  DesignPatternLearner
//  Create First CPP project  for testing.
//
//  Created by 천림 on 2015. 3. 18..
//  Copyright (c) 2015년 천림. All rights reserved.
//

#include <iostream>
//#include "OriginalOperator.h"
//#include "Operation.h"
#include "OperationFactory.h"
int main(int argc, const char * argv[]) {
    
    double result = 0;
    /*  Original Operator.*/
    //OriginalOperator originOperator;
    //result = originOperator.getResult(5, 4, '*');
    
    /* Classify Each Operation
     Tested in 2015.April 8th.*/
    //Operation *mul = new OperationMul();
   // mul->numberA = 5;
   // mul->numberB = 6;
   // result =mul->getResult();
    
    /*Test Factory Mode*/
    OperationFactory oprFactory;
    Operation *add = oprFactory.getOperation('/');
    add->numberA = 6;
    add->numberB =5;
    result = add->getResult();
    
    //Print result.
    std::cout<<"Operation Result is "<<result<<"\n";
    
    
    return 0;
}







  