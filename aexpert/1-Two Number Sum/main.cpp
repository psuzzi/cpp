#include "../StandardHeaders.hpp"
#include "Solution.cpp"

using namespace std;

struct IO
{
    vector<int> array;
    int target;
    vector<int> expected;
};

int main(int argc, char const *argv[])
{
    
    IO io 
    {
        {3, 5, -4, 8, 11, 1, -1, 6},
        10,
        {-1,11}
    };
    
    Solution sol;


    vector<int> ans = sol.twoNumberSum(io.array, io.target);

    sort(ans.begin(), ans.end()); // needed to compare
    cout << "Answer : " << ((io.expected == ans) ? "Correct" : "Wrong ") << endl;


    /* code */
    return 0;
};

