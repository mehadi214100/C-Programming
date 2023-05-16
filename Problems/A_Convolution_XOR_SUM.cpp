#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    int sum = 0;
    int module = 1e9+7;
    sort(arr,arr+n);
    do
    {
        for (int i = 0; i < n; i++)
        {
            sum+= arr[i]^arr2[i];
        }
        cout<<endl;
    } while (next_permutation(arr,arr+n));
    cout<<sum;
    return 0;
}