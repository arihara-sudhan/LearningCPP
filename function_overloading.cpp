#include <iostream>

int abs(int n);
double abs(double n);
long abs(long n);

int main() {
    std::cout << abs(-2) << "\n";
    std::cout << abs(-2.2) << "\n";
    std::cout << abs(-2L) << "\n";
    return 0;
}

int abs(int n) {
    return n > 0 ? n : -n;
}

double abs(double n) {
    return n > 0 ? n : -n;
}

long abs(long n) {
    return n > 0 ? n : -n;
}
