#include <iostream>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> jset;
        for (char const &c : jewels){
            jset.insert(c);
        }
        int ans = 0;
        for( char const &c : stones){
            if(jset.find(c) != jset.end())
                ans++;
        }
        return ans;
    };
};