// Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You may assume no duplicates in the array.

// Here are few examples.

// [1,3,5,6], 5 → 2
// [1,3,5,6], 2 → 1
// [1,3,5,6], 7 → 4
// [1,3,5,6], 0 → 0


int searchInsert(vector<int> &numbers, int request_number) {

    int min_index = 0, max_index = (numbers.size() - 1), mid_index = (min_index + max_index) / 2;
    int request_index = max_index + 1;
    
    while(min_index <= max_index) {
        if(numbers[mid_index] == request_number || (mid_index == 0 && numbers[mid_index] > request_number) || (mid_index > 0 && numbers[mid_index] > request_number && numbers[mid_index -1] < request_number)) {
            request_index = mid_index;
            break;
        }
        
        if(numbers[mid_index] > request_number) max_index = mid_index - 1;
        else if(numbers[mid_index] < request_number) min_index = mid_index + 1;
        
        mid_index = (min_index + max_index) / 2;
    }
    
    
    return request_index;
}