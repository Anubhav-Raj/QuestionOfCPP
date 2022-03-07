#include <iostream>
using namespace std;

class rect {
    int x, y;
    public:
    rect(int a, int b);

    int area() {
        return (x * y);
    }
};

rect::rect(int a, int b) {
    x = a;
    y = b;
}

int main() {
    rect rect(3, 4);
    cout << "rect area: " << rect.area();
    return 0;
}