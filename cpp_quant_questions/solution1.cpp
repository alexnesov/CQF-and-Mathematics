
// Compiling: g++ solution.cpp -o test.out

#include <iostream> 
#include <vector> 
#include <queue>


class Solution {
    public: 
        int findKthLargest(std::vector<int>& nums, int k) {
            std::priority_queue<int> max_heap;
            for (int i = 0; i < nums.size(); ++i){
                max_heap.push(nums[i]);
                }
                int j = 0;
                while (j++ < k -1){
                    max_heap.pop();
                }
                return max_heap.top();
            }
        };


int main() {
    // Creating first solution instance
    Solution sol_one;


    // Defining input vector
    std::vector<int> vect_input {3 ,2 , 1 , 5 , 6 ,4};

    // Testing the Solution
    std::cout << "\n\n";
    std::cout << sol_one.findKthLargest(vect_input, 2);
    std::cout << "\n\n";
    
    return 0;
}
