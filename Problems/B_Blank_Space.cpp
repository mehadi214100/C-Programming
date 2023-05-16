#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count = 0;
        int present = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            
            if(arr[i]==1){
                if(present>count) {
                    count = present; 
                }
                present = 0;

            }
            else{
                present++;
            }
            
        }
        if(present>count) {
            count = present;
            present = 0;
        }
        cout<<count<<endl;
        
        
        
    }
    
    return 0;
}