// https://codeforces.com/group/yg7WhsFsAp/contest/355505/problem/P60
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1];
    int arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }

    for (int i = 0; i < n2; i++)
    {
        int count = 0;
        for (int j = 0; j < n1; j++)
        {
            if(arr2[i]>=arr1[j]){
            // cout<<arr1[j]<<" ";
                count++;
            }
            // cout<<arr1[j]<<" ";

        }
        cout<<count<<" ";
    }

    return 0;
}
