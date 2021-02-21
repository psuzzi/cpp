#include "../StandardHeaders.hpp"
using namespace std;

class Solution
{
public:

  //  Optimal - O(n) time, O(1) space: iterate with two indices
  bool isValidSubsequence(vector<int> array, vector<int> sequence) {
    int arrIdx = 0, seqIdx = 0;
    
    while( arrIdx < array.size() && seqIdx < sequence.size() ){
      if( array[arrIdx] == sequence[seqIdx] ){
        seqIdx++;
      }
      arrIdx++;
    }
    
    return seqIdx == sequence.size();
  }


};
