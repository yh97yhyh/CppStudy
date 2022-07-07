//
//  08.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/05.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
     new 연산자
     */
    int* pointer = new int;
    
    /*
     delete 연산자
     1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
     2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
     3. new[]로 메모리르 대입할 경우 delete[]로 해제한다.
     4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
     */
    int *ps = new int;
    delete ps;
    
    
    
    double *p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    
    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1; // 1은 double형 공간 하나를 의미

    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << "\n.";

    p3 = p3 - 1;
    delete[] p3;
    
    return 0;
}

