#include<iostream>
#include<vector>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        int count1=0;
        int count2=1;
        for(int i=0;i<s1.length()-1;i++){
            if(s1[i]=='0' && s1[i+1]=='1'){
                if(count1==0){
                count1++;
                }
            }
            if(s1[i]!=s1[i+1]){
                count2++;
            }
        }
        cout<<count2-count1<<endl;
    }


    return 0;
}