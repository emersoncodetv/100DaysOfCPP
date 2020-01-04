//
//  classes2.h
//  BasicCPP
//
//  Created by Emerson on 4/01/20.
//  Copyright © 2020 Emerson. All rights reserved.
//

#ifndef classes2_h
#define classes2_h

void classes2 () {
    class Persona {
    public:
        int age;
        string name;
        void saludo(){
            std::cout << "Hola " << name << endl;
        }
    };
    
    // Persona emerson;
    Persona emerson;
    Persona* person2 = new Persona();//declare a person
    emerson.age = 20;
    emerson.name = "Emerson";
    
    
    std::cout << emerson.age << std::endl;
    std::cout << emerson.name << std::endl;
    emerson.saludo();
    
    person2->name = "Moore";
    std::cout << "person2 name: " << person2->name << std::endl;
}

#endif /* classes2_h */
