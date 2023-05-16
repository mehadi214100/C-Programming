#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while (q--)
    {
        int n,t;
        cin>>n>>t;
        int arr[n];
        int pow[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>pow[i];
        }
        int power = 0;
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]<=t){
                if(pow[i]>=power){
                    index = (i+1);
                    power = pow[i];
                }
            }
            t--;
        }
        
        cout<<index<<endl;
    }
    
    return 0;
}