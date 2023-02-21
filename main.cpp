
#include <iostream>
#include <vector>
using namespace std;
class program {
    
    int sum(vector<int> list) {
        int sum = 0;
        for(vector<int>::iterator it = list.begin(); it != list.end(); ++it)
             sum += *it;
        return sum;
    }



};

