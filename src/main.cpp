#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

float binaryWorstCase(int n) {
    return log(n);
}

int main() {
    // how many lines to print
    int num = 200;

    // open (or create, if it doesn't exist) the file that contains
    // the output data
    ofstream myFile;
    myFile.open("../src/output.csv");

    // write the data to a file
    for (int i = 1; i <= num; i++) {
        myFile << i << ",";
        myFile << binaryWorstCase(i) << endl;
        printf("%.8f\n", binaryWorstCase(i));
    }

    // close the file
    myFile.close();

    return 0;
}