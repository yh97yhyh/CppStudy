//
//  main.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/07.
//

#include<iostream>
#include"time.h"
using namespace std;

int main() {
    Time temp1(30, 20);
    NewTime temp2(3, 30, 2);
//    temp2.print();
    
    
    temp1.show();
    cout << endl;
    temp2.show();

    return 0;
}
