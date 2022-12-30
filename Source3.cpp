#include <iostream>

class Counter
{
public:
    Counter(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " seconds" << std::endl;
    }
    int seconds;
};

Counter operator + (Counter c1, Counter c2)
{
    return Counter(c1.seconds + c2.seconds);
}

int main()
{
    Counter c1(20);
    Counter c2(10);
    Counter c3 = c1 + c2;
    c3.display();   // 30 seconds

    return 0;
}

Counter operator + (Counter c1, Counter c2)
{
    return Counter(c1.seconds + c2.seconds);
}

int operator + (Counter c1, int s)
{
    return c1.seconds + s;
}

Counter c1(20);
int seconds = c1 + 25;  // 45
std::cout << seconds << std::endl;


class Counter
{
public:
    Counter(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " seconds" << std::endl;
    }
    Counter operator + (Counter c2)
    {
        return Counter(this->seconds + c2.seconds);
    }
    int operator + (int s)
    {
        return this->seconds + s;
    }
    int seconds;
};

int main()
{
    Counter c1(20);
    Counter c2(10);
    Counter c3 = c1 + c2;
    c3.display();           // 30 seconds
    int seconds = c1 + 25;  // 45

    return 0;
}

bool operator == (Counter c1, Counter c2)
{
    return c1.seconds == c2.seconds;
}
bool operator != (Counter c1, Counter c2)
{
    return c1.seconds != c2.seconds;
}
bool operator > (Counter c1, Counter c2)
{
    return c1.seconds > c2.seconds;
}
bool operator < (Counter c1, Counter c2)
{
    return c1.seconds < c2.seconds;
}
int main()
{
    Counter c1(20);
    Counter c2(10);
    bool b1 = c1 == c2;     // false
    bool b2 = c1 > c2;       // true

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    return 0;
}

class Counter
{
public:
    Counter(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " seconds" << std::endl;
    }
    Counter& operator += (Counter c2)
    {
        seconds += c2.seconds;
        return *this;
    }
    int seconds;
};
int main()
{
    Counter c1(20);
    Counter c2(10);
    c1 += c2;
    c1.display();   // 30 seconds
    return 0;
}

class Counter
{
public:
    Counter(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " seconds" << std::endl;
    }
    // префиксные операторы
    Counter& operator++ ()
    {
        seconds += 5;
        return *this;
    }
    Counter& operator-- ()
    {
        seconds -= 5;
        return *this;
    }
    // постфиксные операторы
    Counter operator++ (int)
    {
        Counter prev = *this;
        ++* this;
        return prev;
    }
    Counter operator-- (int)
    {
        Counter prev = *this;
        --* this;
        return prev;
    }
    int seconds;
};
int main()
{
    Counter c1(20);
    Counter c2 = c1++;
    c2.display();       // 20 seconds
    c1.display();       // 25 seconds
    --c1;
    c1.display();       // 20 seconds
    return 0;
}

Counter& operator++ ()
{
    seconds += 5;
    return *this;
}

Counter operator++ (int)
{
    Counter prev = *this;
    ++* this;
    return prev;
}