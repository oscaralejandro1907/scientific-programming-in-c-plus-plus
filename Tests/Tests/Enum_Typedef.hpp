//
//  Enum_Typedef.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 21/11/20.
//

#ifndef Enum_Typedef_hpp
#define Enum_Typedef_hpp

#include <stdio.h>

enum day {mon=1,tue,wed,the,fri,sat,sun};
enum dept{dir,hr,sales,smech,mkt};

typedef double marks;  //Marks will be doubles

class Classifications {
    day _dayselected;
    dept _department;
    
    marks m1,m2;
    
public:
    Classifications();
    
    void status ();
};

#endif /* Enum_Typedef_hpp */
