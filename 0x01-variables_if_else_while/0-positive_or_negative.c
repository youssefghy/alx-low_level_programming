#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL)); // do not touch this line

    int n = rand() % RAND_MAX; // do not touch this line

    std::cout << n;

    if (n > 0) {
        std::cout << " is positive\n";
    } else if (n == 0) {
        std::cout << " is zero\n";
    } else {
        std::cout << " is negative\n";
    }

    return 0;
}
