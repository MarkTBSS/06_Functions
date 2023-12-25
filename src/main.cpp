#include <iostream>

int max_of_four(int a, int b, int c, int d) {
    int result;
    if (a > b && a > c && a > d)
        result = a;
    else if (b > c && b > d)
        result = b;
    else if (c > d)
        result = c;
    else
        result = d;
    return result;
}

int main() {
    int showResult;
    showResult = max_of_four(3, 4, 6, 5);
    std::cout << showResult;
    return 0;
}