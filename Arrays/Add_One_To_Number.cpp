// Given a non-negative number represented as an array of digits,

// add 1 to the number ( increment the number represented by the digits ).

// The digits are stored such that the most significant digit is at the head of the list.

// Example:

// If the vector has [1, 2, 3]

// the returned vector should be [1, 2, 4]

// as 123 + 1 = 124.


#include <cmath>
#include <iostream>
#include <vector>

vector<int> plusOne(vector<int> &vec) {
    reverse(vec.begin(), vec.end());
    auto carry = 1;
    vector<int> retVector;
    for(auto i = 0; i < vec.size(); ++i) {
        auto sum = vec[i] + carry;
        carry = sum / 10;
        retVector.push_back(sum % 10);
    }
    
    while(carry != 0) {
        retVector.push_back(carry % 10);
        carry /= 10;
    }
    
    while(retVector[retVector.size() -1 ] == 0) {
        retVector.pop_back();
    }
    reverse(retVector.begin(), retVector.end());
    reverse(vec.begin(), vec.end());
    return retVector;
}
