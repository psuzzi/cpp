#include "../StandardHeaders.hpp"
using namespace std;

class Solution
{
public:

string tournamentWinner(vector<vector<string>> competitions, vector<int> results) {
  
	unordered_map<string,int> scoremap;
	
	for(int i=0; i<results.size(); i++){
		int res = results[i];
		string win = (results[i]) ? competitions[i][0] : competitions[i][1];
		
		auto it = scoremap.find(win);
		
		if(it != scoremap.end()){
			it->second+=3;
		} else {
			scoremap.insert(make_pair(win, 3));
		}
	}
	
	string ans = "";
	int points = 0;
	for( auto it = scoremap.begin(); it != scoremap.end(); it++){
		if( it->second > points ){
			points = it->second;
			ans = it->first;
		}
	}
	
  return ans;
}


};
