#include "../StandardHeaders.hpp"
#include "Solution.cpp"

using namespace std;

struct IO
{
    vector<vector<string>> array;
    vector<int> results;
    string expected;
};

int main(int argc, char const *argv[])
{
    
    vector<IO> ios 
    {
        {
            {
                {"HTML", "C#"},
                {"C#", "Python"},
                {"Python", "HTML"}
            },
            { 0, 0, 1},
            "Python"
        }
    };
    
    Solution sol;

    for(IO io : ios)
    {
        string ans = sol.tournamentWinner(io.array, io.results);
        cout << "Answer : " << ((io.expected == ans) ? "Correct" : "Wrong ") << endl;
    }

    /* code */
    return 0;
};

