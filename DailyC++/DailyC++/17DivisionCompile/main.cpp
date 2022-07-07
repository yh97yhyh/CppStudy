//
//  main.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/06.
//

#include "struct.h"
// 헤더 파일을 여러 파일에 포함 시킬 때, 반드시 단 한 번만 포함시켜야 한다.

int main() {
    MyStruct PandaCoding = {
        "Panda",
        26,
        
    };

    display(PandaCoding);
    return 0;
}
