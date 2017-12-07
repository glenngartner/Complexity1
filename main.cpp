#include <iostream>
#include <cmath>

using namespace std;

float binaryWorstCase(int n) {
    return log(n);
}

int main() {
    int num = 200;

    for (int i = 0; i < num; i++) {
        printf("%.8f\n", binaryWorstCase(i));
    }

    return 0;
}