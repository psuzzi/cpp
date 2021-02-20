#include "../StandardHeaders.hpp"
#include "Solution.cpp"

using namespace std;

struct Input
{
    string a;
    string b;
};

struct Test
{
    int t;
    vector<Input> in;
    vector<int> exp;
};

// operator to read input
std::istream &operator>>(std::istream &is, Test &test)
{
    is >> test.t;
    for(int i=0; i<test.t; i++){
        Input in;
        int ans;
        is >> in.a >> in.b;
        is >> ans;
        test.in.push_back(in);
        test.exp.push_back(ans);
    }
    return is;
};

int main(int argc, char const *argv[])
{
    Solution sol;

    std:ifstream inputfile("in.txt");
    if(!inputfile){
        cout << "Error reading input file" << endl;
        return 1;
    }

    Test test;
    inputfile >> test;

    for(int i=0; i<test.t; i++){
        int ans = sol.numJewelsInStones(test.in[i].a, test.in[i].b);
        int e = test.exp[i];
        cout << "Answer" << (i+1) << " : " << ans << " " << ((ans == e) ? "Correct" : "Wrong ") << endl;
    }

    /* code */
    return 0;
};

