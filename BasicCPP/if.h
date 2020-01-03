//
//  if.h
//  BasicCPP
//
//  Created by Emerson on 31/12/19.
//  Copyright © 2019 Emerson. All rights reserved.
//

#ifndef if_h
#define if_h
#include <iostream>


void if_statement (int num1, int num2) {
    if(num1 > num2){
        std::cout << num1 << "es mayor" << std::endl;
    } else {
        std::cout << num2 << "es mayor" << std::endl;
    }
}


#endif /* if_h */
