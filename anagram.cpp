#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<string>> findAnagrams(const vector<string>& dict);

vector<vector<string>> findAnagrams(const vector<string>& dict)
{
    unordered_map< string, vector< string > > hMap;
    vector< vector< string > > result;

    int i = 0;
    

    for(auto word : dict){
        string key = word;
        sort(key.begin(), key.end());
        hMap[key].push_back(word);
        i++;
        if(i == dict.size()){
            for(auto index : hMap){
                if(index.second.size() > 1){
                    result.push_back(index.second);
                    //cout << "Key= " << index.first << endl;
                }
            }
        }
    }

    return result;
}

