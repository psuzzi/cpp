#include "../StandardHeaders.hpp"
using namespace std;

class Solution
{
public:

  vector<int> twoNumberSum(vector<int> array, int targetSum) {
    return twoNumberSum_2(array, targetSum);
  }


  // Naive: O(n^2) nested loop to test all combinations
  vector<int> twoNumberSum_1(vector<int> array, int targetSum) {
    vector<int> ans;
    for(int i=0; i<array.size()-1; i++){
      for(int j=i+1; j<array.size(); j++){
        if(array[i]+array[j]==targetSum){
          ans.push_back(array[i]);
          ans.push_back(array[j]);
        }
      }
    }
    return ans;
  }


  // Optimal time - O(n) time, O(n) space: use a set to store the differences with target sum
  vector<int> twoNumberSum_2(vector<int> array, int targetSum) {
    
    unordered_set<int> set;
    for(int n:array){
      int match = targetSum - n;
      if(set.find(match) != set.end()){
        return vector<int>{match, n};
      } else {
        set.insert(n);
      }
    }
    
    return {};
  }

  // Optimal space - O(n log n) time, O(1) space: sort the input and scan with two l/r pointers
  vector<int> twoNumberSum_3(vector<int> array, int targetSum) {

    sort(array.begin(), array.end());

    int l=0, r=array.size()-1;
    
    while(l<r){
			int sum = array[l] + array[r];
      if( sum == targetSum){
        return {array[l], array[r]};
      } else if (sum > targetSum) {
				r--;
			} else {
				l++;
			}
    }
    
    return {};
  }

};
