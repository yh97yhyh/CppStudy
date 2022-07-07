//
//  Header.h
//  DailyC++
//
//  Created by MZ01-KYONGH on 2022/07/07.
//

#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time {
private:
    int hours;
    int mins;

public:
    Time();
    Time(int, int);
    void addHours(int);
    void addMins(int);
    Time operator+(Time&);
    Time operator*(int);
    virtual void show(); // 가상 메소드 -> 서로 독립된 두 개의 메소드가 있음
    ~Time();
    int getHour() {return hours; }
    int getMins() { return mins; }
    friend Time operator*(int n, Time& t) {
        return t * n;
    }
    friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime: public Time {
private:
    int day;
    
public:
    NewTime();
    NewTime(int, int, int);
    void show();
    
};
#endif // !TIMEH
