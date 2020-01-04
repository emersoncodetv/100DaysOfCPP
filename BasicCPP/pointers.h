//
//  pointers.h
//  BasicCPP
//
//  Created by Emerson on 3/01/20.
//  Copyright © 2020 Emerson. All rights reserved.
//

#ifndef pointers_h
#define pointers_h

void pointers() {
    string name = "Emerson";
    int age = 31;
    bool isMale = true;
    
    // Imprime en consola los valores de las variables
    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << isMale << std::endl;
    
    // Imprime en consola la direccion hexadecimal de la memora RAM (Random Access Memory)
    std::cout << &name << std::endl;
    std::cout << &age << std::endl;
    std::cout << &isMale << std::endl;
    
    // Estas variables guardan la direccion hexadecimal, toda variable que sea definida con *
    string *name1 = &name;
    int *age1 = &age;
    bool *isMale1 = &isMale;
    
    // Imprime en consola la direccion haxadecimal de la memoria RAM (Random Access Memory)
    // Se imprime su valor hexadecimal sin el uso de *
    std::cout << name1 << std::endl;
    std::cout << age1 << std::endl;
    std::cout << isMale1 << std::endl;
    
    // Imprime en consola el valor alojado en dicha direccion hexadecimal
    std::cout << *name1 << std::endl;
    std::cout << *age1 << std::endl;
    std::cout << *isMale1 << std::endl;
    
    
    
    string holaMundo = "Hola Mundo";
    
    std::cout << holaMundo << std::endl;
    std::cout << &holaMundo << std::endl;
    
    string *holaMundoHexa = &holaMundo;
    
    std::cout << holaMundoHexa << std::endl;
    std::cout << " *holaMundoHexa " << *holaMundoHexa << std::endl;
    
    holaMundo = "Hola Mundo 2";
    
    std::cout << holaMundo << std::endl;
    std::cout << *holaMundoHexa << std::endl;
    
    // Genera error dado que aunque esta declarado como un string, realmente es un acceso hexadecimal de char(13)
//    holaMundoHexa = "Hola Mundo 3";
//
//    std::cout << holaMundo << std::endl;
//    std::cout << *holaMundoHexa << std::endl;
    
}

#endif /* pointers_h */
