//
//  09.cpp
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/05.
//

#include <iostream>
#define SIZE 20

using namespace std;

struct MyStruct
{
    char name[20];
    int age;
};

int main(){

    char animal[SIZE];
    char* ps;

    cout << "동물 이름을 입력하십시오.\n";
    cin >> animal;

    ps = new char[strlen(animal) +1];
    strcpy(ps, animal);

    cout << "입력하신 동물 이름을 복사하였습니다." << endl;
    cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
    cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;
     
    delete[] ps;
    
    cout << endl;
    
    // 동적 구조체 생성
    MyStruct* temp = new MyStruct;

    cout << "당신의 이름을 입력하십시오.\n";
    cin >> temp->name;

    cout << "당신의 나이를 입력하십시오.\n";
    cin >> (*temp).age;

    cout << "안녕하세요! " << temp->name << "씨!\n";
    cout << "당신은 " << temp->age << "살 이군요!\n";
    
    delete temp;
    return 0;
    
}

