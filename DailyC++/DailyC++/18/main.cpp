//
//  main.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/06.
//

#include <iostream>
#include "Stock.h"

int main() {

    Stock temp;
    temp.acquire("Panda", 100, 1000);
    temp.show();
    temp.buy(10, 1200);
    temp.show();
    temp.sell(5, 800);
    temp.show();

    return 0;

}
