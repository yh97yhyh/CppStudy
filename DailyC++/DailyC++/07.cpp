//
//  07.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/05.
//

#include <iostream>

using namespace std;

int main() {
    
    int val = 3;
    cout << &val << endl;
    
    cout << endl;
    
//    int *a; // c style
//    int* b; // c++ style
//    int* c, d; // c는 포인텨 변수, d는 int형 변수
    
    int a = 6;
    int *b;
    
    b = &a;
    
    cout << "a의 값 " << a << endl;
    cout << "*b의 값 " << *b << endl;

    cout << "a의 주소 " << &a << endl;
    cout << "*b의 주소 " << b << endl;

    *b = *b + 1;

    cout << "이제 a의 값은 " << a << endl;
    
    return 0;
}

