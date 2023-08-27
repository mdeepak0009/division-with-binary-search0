#include<iostream>
#include<cmath>
using namespace std;
int findmajority(int a[],int n){
    int maxcount=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
                count++;
        }
        if(count>maxcount){
            maxcount=count;
            index=i;
        }
    }
    if(maxcount>=n/2 && maxcount!=1){
        cout<<a[index];
    }
    else{
        cout<<-1;
    }
    return 0;
    
}
int main(){
    int n,a[30];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    findmajority(a,n);
}