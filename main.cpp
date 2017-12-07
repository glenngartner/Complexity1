#include <iostream>
#include <cmath>

using namespace std;

float binaryWorstCase(int n) {
    return log(n);
}

void printWorstCase(int argc, char** argv){
   printf("%.8f\n", binaryWorstCase(argc));
}

int main() {
    int num = 200;

    for (int i = 0; i < num; i++) {
        printf("%.8f\n", binaryWorstCase(i));
    }

    return 0;
}