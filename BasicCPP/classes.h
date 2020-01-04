//
//  classes.h
//  BasicCPP
//
//  Created by Emerson on 4/01/20.
//  Copyright © 2020 Emerson. All rights reserved.
//

#ifndef classes_h
#define classes_h

void classes () {
    class Persona {
        public:
            int age;
            string name;
    };
    
    Persona emerson;
    emerson.age = 20;
    emerson.name = "Emerson";
    
    std::cout << emerson.age << std::endl;
    std::cout << emerson.name << std::endl;
}

#endif /* classes_h */
