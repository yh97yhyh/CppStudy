//
//  10.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/06.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
     반복문
     1. 카운터 값 초기화
     2. 반복문 진행할 것인지 '조건 검사'
     3. 반복문 몸체 수행
     4. 카운터 값 변화
     */
    
    for(int i=0; i<5; i++) {
        cout << i << "번째 입니다\n";
    }
    
    cout << endl;
    
    for(int i=5; i>0; i--) {
        cout << i << "번째 입니다.\n";
    }
    
    cout << endl;
    
    string str = "Panda";
    int i = 0;
    while(str[i] != '\0') {
        cout << str[i] << endl;
        i++;
    }
    
    return 0;
}

