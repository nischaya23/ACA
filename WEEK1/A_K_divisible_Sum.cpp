#include<iostream>
#include<vector>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n;
        cin>>k;
        long long int tsum=0;
        if(n%k==0){
            tsum=n;
            cout<<1<<"\n";
            continue;
        }
        else{
            tsum=((n/k)+1)*k;
        }
        long long int ans=1;
        int insum=n;
        if(k%n==0){
            insum=k;
            ans=k/n;
        }
        else{
            insum=((k/n))*n;
            ans=k/n;
        }

        while(insum<tsum){
            insum=insum+n;
            ans+=1;
        }
        cout<<ans<<"\n";



    }
    return 0;
}