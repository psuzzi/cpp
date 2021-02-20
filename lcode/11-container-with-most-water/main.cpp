#include "../StandardHeaders.hpp"
#include "Solution.cpp"

using namespace std;

struct Input
{
    vector<int> height;
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
        int size;
        is >> size;
        for(int j=0; j<size; j++){
            int n;
            is >> n;
            in.height.push_back(n);
        }
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
        int ans = sol.maxArea(test.in[i].height);
        int e = test.exp[i];
        cout << "Answer" << (i+1) << " : " << ans << " " << ((ans == e) ? "Correct" : "Wrong ") << endl;
    }

    /* code */
    return 0;
};

