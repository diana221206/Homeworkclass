#include <iostream>

class Point {
private:
    static int count; 
    int x, y; 

public:
    Point(int x, int y) : x(x), y(y) {
        count++; 
    }

    count--;

    static int getCount() {
        return count;
    }

    void display() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int Point::count = 0;

int main() {
    Point p1(1, 2);
    Point p2(3, 4);

    std::cout << Point::getCount() << std::endl;

    {
        Point p3(5, 6);
        std::cout << Point::getCount() << std::endl;
    }

    std::cout << Point::getCount() << std::endl;

    return 0;
}
