//
//  05.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/05.
//


#include <iostream>

using namespace std;

int main() {
    
    /*
     구조체
     */
    
    struct MyStruct {
        string name;
        string position;
        int height;
        int weight;
    };
    
//    MyStruct A;
//    A.name = "Song";
//    A.position = "Striker";
//    A.height = 183;
//    A.weight = 77;

    MyStruct A = {
        "Son",
        "Striker",
        183,
        77
    };

    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;
    
    cout << endl;
    
    MyStruct C[2] = {
        {"A", "A", 178, 1},
        {"B", "B", 180, 2}
    };

    cout << C[0].height << endl;
    cout << C[1].height << endl;
    
    return 0;
}

