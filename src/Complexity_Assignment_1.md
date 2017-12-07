1. An algorithm that has O(1) is a mix-master, and an algorithm that has O(2^n) is a hand operated whisk, mixing wet cement, that slowly hardens into a cement-cicle, with a whisk for a stick.

2. The best case scenario for binary search is that the item being searched for is the first item in the search index (ie: the first place you look). That's a complexity of 0(1) . In the case of binary search, where a 50-50 split is used to divide the list, that’s the middle item of the list.

3. The worst case scenario for binary search is a time complexity of O(logN), where the last element in a half is the item you're looking for.

4. The bounded case scenario for binary search is O(logN).

5. [See chart](./5_Source_Data_Graph.png)

6. The limit of the function as it approaches infinity is infinity.

7. The complexity is O(N^2)

8. See function in main.cpp. It looks something like this: 

```cpp
float binaryWorstCase(int n) {
    return log(n);
}
```

- I printed a list of values to a CSV file to make the graph, like this: 

```cpp
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

```

- The .csv file can be read in any graphing application (I used Excel, for expediency). It created this graph in answer 9.

9. [See Chart](./9_binary_worst_case_graph.png)

10. The Big-O of binary search is O(logN)

11. The big-Omega of binary search is O(1)

12. The big-theta of binary search is O(logN) 
