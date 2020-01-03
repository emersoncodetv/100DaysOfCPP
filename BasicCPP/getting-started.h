//
//  getting-started.h
//  BasicCPP
//
//  Created by Emerson on 2/01/20.
//  Copyright © 2020 Emerson. All rights reserved.
//

#ifndef getting_started_h
#define getting_started_h

using namespace std;

void getting_started () {
    string name;
    // insert code here...
    cout << "Escriba su nombre" << endl;
    //    cin >> name;
    getline(cin, name);
    
    cout << name << endl;
    
    cout << "versión de compilación: " << __cplusplus << endl;
}


#endif /* getting_started_h */
