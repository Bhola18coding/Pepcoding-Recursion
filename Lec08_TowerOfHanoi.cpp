#include <iostream>
using namespace std;

void toh(int n, int t1, int t2, int t3) {
    if (n == 0)
        return;

    // Faith: Move n-1 disks from source to help
    toh(n - 1, t1, t3, t2);

    // Expectation: Move nth disk from source to destination and print
    std::cout << n << "[" << t1 << "->" << t2 << "]" << std::endl;

    // Move n-1 disks from help to destination
    toh(n - 1, t3, t2, t1);
}

int main() {
    int n, to1, to2, to3;

    std::cout << "Enter the number of disks: ";
    std::cin >> n;

    std::cout << "Enter source tower: ";
    std::cin >> to1;

    std::cout << "Enter destination tower: ";
    std::cin >> to2;

    std::cout << "Enter auxiliary tower: ";
    std::cin >> to3;

    toh(n, to1, to2, to3);

    return 0;
}