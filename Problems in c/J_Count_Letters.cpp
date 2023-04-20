#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int pos = s[i]-97;
        arr[pos]++;
        
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]!=0){
            printf("%c : %d\n",i+'a',arr[i]);
        }
        
        
    }
    
    
    return 0;
}