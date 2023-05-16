#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int op = max(arr[0]*arr[1],arr[n-1]*arr[n-2]);
        cout<<op<<endl;
        
        
    }
    
    return 0;
}