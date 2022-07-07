//
//  01.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/05.
//

#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    // short < int < long < long long
    
    int n_int = INT_MAX;
    int n_short = SHRT_MAX;
    int n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    
    cout << "int는 " << sizeof n_int << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;
    
    cout << "short은 " << sizeof n_short << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;
    
    cout << "long은 " << sizeof n_long << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;
    
    cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;
    
    return 0; 
}
