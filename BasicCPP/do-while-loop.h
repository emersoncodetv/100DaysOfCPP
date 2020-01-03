//
//  do-while-loop.h
//  BasicCPP
//
//  Created by Emerson on 2/01/20.
//  Copyright © 2020 Emerson. All rights reserved.
//

#ifndef do_while_loop_h
#define do_while_loop_h

// La unica diferencia entre while y do while es que el segundo siempre va a ser ejecutado almenos una sola vez.
void do_while_loop () {
    int index = 0;
    do {
        std::cout << "Number: " << index << std::endl;
        index++;
    } while(index < 0);
}

#endif /* do_while_loop_h */
