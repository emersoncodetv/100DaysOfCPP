//
//  nested_loops.h
//  BasicCPP
//
//  Created by Emerson on 2/01/20.
//  Copyright © 2020 Emerson. All rights reserved.
//

#ifndef nested_loops_h
#define nested_loops_h


void nested_loops (){
    int matrix[3][2] = {
        { 1,2 },
        { 3,4 },
        { 5,6 }
    };
    
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 2; column++) {
            std::cout << matrix[row][column];
        }
        std::cout << std::endl;
    }
}

#endif /* nested_loops_h */
