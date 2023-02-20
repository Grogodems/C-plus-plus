#include <iostream>

class Money {
private:
    long rubles;
    unsigned char kopecks;

public:
    Money(long rub = 0, unsigned char kop = 0) : rubles(rub), kopecks(kop) {}

    long getRubles() const { return rubles; }
    unsigned char getKopecks() const { return kopecks; }

    Money operator+(const Money& other) const {
        Money result(*this);
        result += other;
        return result;
    }

    Money operator-(const Money& other) const {
        Money result(*this);
        result -= other;
        return result;
    }

    Money operator*(double factor) const {
        long totalKop = static_cast<long>(rubles * 100 + kopecks) * factor;
        long newRubles = totalKop / 100;
        unsigned char newKopecks = totalKop % 100;
        return Money(newRubles, newKopecks);
    }

    Money operator/(double divisor) const {
        long totalKop = static_cast<long>(rubles * 100 + kopecks) / divisor;
        long newRubles = totalKop / 100;
        unsigned char newKopecks = totalKop % 100;
        return Money(newRubles, newKopecks);
    }

    double operator/(const Money& other) const {
        return static_cast<double>(rubles * 100 + kopecks) / static_cast<double>(other.rubles * 100 + other.kopecks);
    }

    bool operator==(const Money& other) const {
        return (rubles == other.rubles) && (kopecks == other.kopecks);
    }

    bool operator!=(const Money& other) const {
        return !(*this == other);
    }

    bool operator<(const Money& other) const {
        if (rubles == other.rubles) {
            return kopecks < other.kopecks;
        }
        return rubles < other.rubles;
    }

    bool operator<=(const Money& other) const {
        return (*this < other) || (*this == other);
    }

    bool operator>(const Money& other) const {
        return !(*this <= other);
    }

    bool operator>=(const Money& other) const {
        return !(*this < other);
    }

    Money& operator+=(const Money& other) {
        rubles += other.rubles;
        kopecks += other.kopecks;
        if (kopecks >= 100) {
            kopecks -= 100;
            rubles += 1;
        }
        return *this;
    }

    Money& operator-=(const Money& other) {
        if (*this < other) {
            rubles = 0;
            kopecks = 0;
        }
        else {
            rubles -= other.rubles;
            if (kopecks < other.kopecks) {
                rubles -= 1;
                kopecks += 100;
            }
            kopecks -= other.kopecks;
        }
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const Money& money);
};

std::ostream& operator<<(std::ostream& os, const Money& money) {
    os << money.getRubles() << ',' << static_cast<int>(money.getKopecks());
    return os;
}