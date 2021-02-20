#include "../StandardHeaders.hpp"
#include "Solution.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Solution sol;

    std:ifstream infile("in.txt");
    if(!infile.is_open()){
        cout << "Error reading input file" << endl;
        return 1;
    }

    // 1st line # of test cases
    int t, n=0;
    infile >> t;
    string a, b;
    int e;
    while( n++ < t ){
        infile >> a >> b;
        infile >> e;
        int ans = sol.numJewelsInStones(a, b);
        cout << "Answer" << n << " : " << ans << " " << ((ans == e) ? "Correct" : "Wrong ") << endl;
    }

    /* code */
    return 0;
}
