//
//  06.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/05.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
     공용체(union)
     */
    
    union MyUnion {
        int intVal;
        long longVal;
        float floatVal;
    };
    
    MyUnion test;
    test.intVal = 3;
    cout << test.intVal << endl;
    
    test.longVal = 33;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    
    test.floatVal = 3.3;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    cout << test.floatVal << endl;
    
    cout << endl;
    
    /*
     열거체(enum)
     */
    
    enum spectrum {red = 0, orange = 2, yellow = 4, green, blue, violet, indigo, ultraviolet};
    
    spectrum a = orange;
    cout << a << endl;
    
    int b = blue;
    b = blue + 3;
    cout << b << endl;
    
    return 0;
}
