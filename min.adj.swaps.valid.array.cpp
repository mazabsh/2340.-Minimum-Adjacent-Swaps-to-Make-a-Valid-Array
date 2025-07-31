#include<iostream> 
#include<vector> 
#include<climits> 

using namespace std; 

class Solution{
public: 
    int minimumSwaps(vector<int>& nums) {
      int n = nums.size(); 
      int minVal = INT_MAX; 
      int maxVal = INT_MIN; 
      int minIndex = -1; 
      int maxIndex = -1; 
      for(int i=0; i<n; ++i){
        if(minVal>nums[i]){
          minVal = nums[i]; 
          minIndex = i; 
        }
        if(maxVal<=nums[i]){
          maxVal = nums[i]; 
          maxIndex = i; 
        }
      }
      int count = minIndex + (n-1-maxIndex); 
      if(minIndex>maxIndex) --count; 
      return count; 
    }
};
int main(){
  vector<int> nums = {3,4,5,5,3,1}; 
  Solution sol; 
  cout <<sol.minimumSwaps(nums) << endl; 
  return 0; 
}
