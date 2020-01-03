//
//  while-loop.h
//  BasicCPP
//
//  Created by Emerson on 2/01/20.
//  Copyright © 2020 Emerson. All rights reserved.
//

#ifndef while_loop_h
#define while_loop_h

void while_loop () {
    int index = 0;
    while(index < 5){
        std::cout << "Number: " << index << std::endl;
        index++;
    }
}

#endif /* while_loop_h */
