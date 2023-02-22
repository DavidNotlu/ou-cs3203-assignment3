
#include <iostream>
#include <vector>
using namespace std;
class program {
public:
    int sum(vector<int> list);
    int product(vector<int> list);
    vector<int> reverseList(vector<int> list);
};

// Adds all values in list
int program::sum(vector<int> list) {
    int sum = 0;
    for(vector<int>::iterator it = list.begin(); it != list.end(); ++it)
         sum += *it;
    return sum;
};
// Mulitplies all values in list
int program::product(vector<int> list) {
    int product = 1;
    for(vector<int>::iterator it = list.begin(); it != list.end(); ++it)
         product *= *it;
    return product;
};
//Reverses given list
vector<int> program:: reverseList(vector<int> list) {
    reverse(list.begin(), list.end());
    return list;
};


// Main function
int main() {
    program x;
    int input;
    vector<int> reversed;
    vector<int> vector;
    
    // input elements for vector list
    while(cin>>input)
    {
        vector.push_back(input);
    }
    //prints out the sum and product funtion
    cout<<"The Sum is: "<<x.sum(vector)<<endl;
    cout<<"The Product is: "<<x.product(vector)<<endl;
    cout<<"The Reverse is: ";
    reversed = x.reverseList(vector);
    for (int i = 0; i < reversed.size(); i++)
            cout << reversed[i] << " ";
        cout << endl;
    return 0;
}

