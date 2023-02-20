#include <iostream>

class Array {
public:
    static const int MAX_SIZE = 100;
    Array(int size = 0, unsigned char value = 0);
    virtual ~Array();
    unsigned char& operator[](int index);
    virtual void addArrays(Array& other);

protected:
    unsigned char data[MAX_SIZE];
    int size;
};

Array::Array(int size, unsigned char value) {
    this->size = size;
    for (int i = 0; i < size; i++) {
        data[i] = value;
    }
}

Array::~Array() {}

unsigned char& Array::operator[](int index) {
    if (index < 0 || index >= size) {
        std::cerr << "Error: index out of bounds." << std::endl;
        exit(1);
    }
    return data[index];
}

void Array::addArrays(Array& other) {
    if (size != other.size) {
        std::cerr << "Error: arrays must have the same size." << std::endl;
        exit(1);
    }
    for (int i = 0; i < size; i++) {
        data[i] += other.data[i];
    }
}

class ArrayAddOne : public Array {
public:
    ArrayAddOne(int size = 0, unsigned char value = 0) : Array(size, value) {}
    void addArrays(Array& other) override;
};

void ArrayAddOne::addArrays(Array& other) {
    if (size != other.size) {
        std::cerr << "Error: arrays must have the same size." << std::endl;
        exit(1);
    }
    for (int i = 0; i < size; i++) {
        data[i] += other.data[i] + 1;
    }
}

class ArrayAddTwo : public Array {
public:
    ArrayAddTwo(int size = 0, unsigned char value = 0) : Array(size, value) {}
    void addArrays(Array& other) override;
};

void ArrayAddTwo::addArrays(Array& other) {
    if (size != other.size) {
        std::cerr << "Error: arrays must have the same size." << std::endl;
        exit(1);
    }
    for (int i = 0; i < size; i++) {
        data[i] += other.data[i] + 2;
    }
}
int main() {
    Array a(5, 10);
    Array b(5, 5);

    std::cout << "Array a:" << std::endl;
    for (int i = 0; i < a.size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array b:" << std::endl;
    for (int i = 0; i < b.size; i++) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    a.addArrays(b);

    std::cout << "Array a after adding b:" << std::endl;
    for (int i = 0; i < a.size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    ArrayAddOne c(3, 20);
    ArrayAddOne d(3, 10);

    std::cout << "Array c:" << std::endl;
    for (int i = 0; i < c.size; i++) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array d:" << std::endl;
    for (int i = 0; i < d.size; i++) {
        std::cout << d[i] << " ";
    }
    std::cout << std::endl;

    c.addArrays(d);

    std::cout << "Array c after adding d with +1:" << std::endl;
    for (int i = 0; i < c.size; i++) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    ArrayAddTwo e(4, 5);
    ArrayAddTwo f(4, 3);

    std::cout << "Array e:" << std::endl;
    for (int i = 0; i < e.size; i++) {
        std::cout << e[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array f:" << std::endl;
    for (int i = 0; i < f.size; i++) {
        std::cout << f[i] << " ";
    }
    std::cout << std::endl;

    e.addArrays(f);

    std::cout << "Array e after adding f with +2:" << std::endl;
    for (int i = 0; i < e.size; i++) {
        std::cout << e[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}