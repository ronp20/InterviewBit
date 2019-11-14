// Given the array of strings A,
// you need to find the longest string S which is the prefix of ALL the strings in the array.

// Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
// and S2.

// For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".



// Input Format

// The only argument given is an array of strings A.
// Output Format

// Return longest common prefix of all strings in A.
// For Example

// Input 1:
//     A = ["abcdefgh", "aefghijk", "abcefgh"]
// Output 1:
//     "a"
//     Explanation 1:
//         Longest common prefix of all the strings is "a".

// Input 2:
//     A = ["abab", "ab", "abcd"];
// Output 2:
//     "ab"
//     Explanation 2:
//         Longest common prefix of all the strings is "ab".#include <iostream>


string longestCommonPrefix(vector<string> &strings) {
    string returnString = "";
    if(strings.size() == 0) return returnString;
    
    for(auto i = 0; i <strings[0].length(); ++i) {
        auto is_different = false;
        
        for(auto j = 1; j < strings.size(); ++j) {
            if(strings[0][i] != strings[j][i]) {
                is_different = true;
                break;
            }
        }
        
        if(is_different) break;
        returnString.push_back(strings[0][i]);
    }
    
    return returnString;
}