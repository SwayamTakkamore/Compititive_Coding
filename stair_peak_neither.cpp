#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int i,a,b,c;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a<b && b<c){
            cout<<"STAIR"<<endl;
        }
        else if(a<b && b>c){
            cout<<"PEAK"<<endl;
        }
        else{
            cout<<"NONE"<<endl;
        }
    }
    return 0;
}