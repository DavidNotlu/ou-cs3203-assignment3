
#include <iostream>
#include <vector>
using namespace std;
class program {
    // Adds all values in list
    int sum(vector<int> list) {
        int sum = 0;
        for(vector<int>::iterator it = list.begin(); it != list.end(); ++it)
             sum += *it;
        return sum;
    }
    // Mulitplies all values in list
    int product(vector<int> list) {
        int product = 0;
        for(vector<int>::iterator it = list.begin(); it != list.end(); ++it)
             product *= *it;
        return product;
    }



};

