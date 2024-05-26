#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
void solve(long long int d,vector <long long> &ks,vector <long long>& time){
    int e=ks.size()-1;
    long long int s=0;
    long long int ans=0;
    while((e-s)>1){
        int mid =(e+s)/2;
        if(d<=ks[mid]){
            e=mid;
        }
        else{
            s=mid;
        }
 
    }
    // long long int time_f=(d-ks[s])*(time[e]-time[s])/((ks[e]-ks[s]));
    if(d==ks[s]){
        cout<<time[s];
        return;
    }
    cout<<(d-ks[s])*(time[e]-time[s])/((ks[e]-ks[s]))+time[s];
    return;
    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        int q;
        cin>>n;
        cin>>k;
        cin>>q;
        vector <long long> ks(k+1,0);
        vector <long long> time(k+1,0);
        // ks.push_back(0);
        // time.push_back(0);
 
        for(int i=0;i<k;i++){
            long long int in;
            cin>>in;
            ks[i+1]=in;
        }
        for(int i=0;i<k;i++){
            long long int in;
            cin>>in;
            time[i+1]=in;
        }
        for(int i=0;i<q;i++){
            long long int d;
            cin>>d;
            solve(d,ks,time);
            cout<<" ";
 
        }
        cout<<"\n";
    }
 
 
}

