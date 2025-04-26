#include<iostream>
using namespace std;
class Solution {
    public:
        string findCommonResponse(vector<vector<string>>& responses) {
            map<string,int> calmp;
            for(int i=0;i<responses.size();i++){
                   unordered_set<string> totalmp; 
               
                for(int j=0;j<responses[i].size();j++){
                    if(totalmp.insert(responses[i][j]).second)
                            calmp[responses[i][j]]++;
                }
                
                // for(int j=0;j<responses[i].size();j++){
                //      if(totalmp[responses[i][j]]==0){
                //              totalmp[responses[i][j]]++;
                //          }
                // }
                
                // for(int j=0;j<responses[i].size();j++){
                //     if(totalmp[responses[i][j]]>0){
                //         calmp[responses[i][j]]++;
                //         totalmp[responses[i][j]]=0;
                //     }
                // }
                // for(int j=0;j<responses[i].size();j++){
                //    totalmp[responses[i][j]]=0;      
                // }   
            }
            
            int maxcnt=-1;
            string ans;
            for(auto i=calmp.begin();i!=calmp.end();i++){
                // cout<<i->first<<":"<<i->second;
                if(i->second==maxcnt){
                    for(int k=0;k<=1000;k++){
                        if((int)i->first[k]<(int)ans[k]){
                            ans=i->first;
                            break;
                        }
                        else if((int)i->first[k]>(int)ans[k]){
                            break;
                        }
                    }
                        
                }
                else if(i->second>maxcnt){
                    ans=i->first;
                    maxcnt=i->second;
                }
            }
            return ans;
        }
     };//©leetcode