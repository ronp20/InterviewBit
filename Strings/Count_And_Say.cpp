// The count-and-say sequence is the sequence of integers beginning as follows:

// 1, 11, 21, 1211, 111221, ...
// 1 is read off as one 1 or 11.
// 11 is read off as two 1s or 21.

// 21 is read off as one 2, then one 1 or 1211.

// Given an integer n, generate the nth sequence.

// Note: The sequence of integers will be represented as a string.

// Example:

// if n = 2,
// the sequence is 11.


string countAndSay(int index) {
    if (index == 0) return "";
    
    string current = "1";
    if (index == 1) return current;
    
    auto previous = current;
    for(auto i = 2; i <= index; ++i) {
        current.clear();
        
        for(auto j = 0; j < previous.length(); ++j) {
            auto freq = 1;
            
            while(j + 1 < previous.length() && previous[j] == previous[j + 1]) {
                ++freq;
                ++j;
            }
            
            current.append(to_string(freq) + previous[j]); 
        }
        previous = current;
    }
    
    return current;
}