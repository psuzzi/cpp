#include "../StandardHeaders.hpp"
#include "Solution.cpp"

using namespace std;

struct IO
{
    vector<int> array;
    vector<int> sub;
    bool expected;
};

int main(int argc, char const *argv[])
{
    
    vector<IO> ios 
    {
        {
            { 5, 1, 22, 25, 6, -1, 8, 10 },
            { 1, 6, -1, 10 },
            true
        }
    };
    
    Solution sol;



    for(IO io : ios)
    {
        bool ans = sol.isValidSubsequence(io.array, io.sub);
        cout << "Answer : " << ((io.expected == ans) ? "Correct" : "Wrong ") << endl;
    }


    /* code */
    return 0;
};

