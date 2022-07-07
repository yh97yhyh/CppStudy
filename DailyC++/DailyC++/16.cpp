//
//  16.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/06.
//

#include <iostream>

using namespace std;

template <class Any>
Any sum(Any, Any);

int main() {
    
    /*
     함수 템플릿
     구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
     */
    
    int a = 3;
    int b = 4;
    cout << sum(a, b) << endl;
    
    float c = 3.14;
    float d = 1.592;
    cout << sum(c, d) << endl;
    
//    cout << sum(a, c) << endl; // Any가 int로 매치돼서 float 사용 불가
    
    return 0;
}

template <class Any>
Any sum(Any a, Any b) {
    return a+b;
}
