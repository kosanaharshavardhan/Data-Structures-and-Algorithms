#include<iostream>
#include<map>
using namespace  std;
int main(){
    map<int,int> mp;
    cout<<"Enter values to be entered into map:";
    cout<<endl<<"Note: give 0 as a input to print the map:";
    cout<<endl;
    int ele;
    while(1){
        cin>>ele;
        if(ele==0)
            break;
        else{
            mp[ele]++;
            cout<<"element stored and updated it cnt: ";
        }
    }
    cout<<"Here Goes the map:"<<"\n";
        cout<<"Element"<<"->"<<"frequency";
    for(auto i=mp.begin();i!=mp.end();i++){
        cout<<i->first<<"->"<<i->second<<endl;
    }
}
