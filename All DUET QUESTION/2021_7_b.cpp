#include<bits/stdc++.h>
using namespace std;

void swapArray(int *arr1,int *arr2,int size){
    for (int i = 0; i < size; i++)
    {
        int temp = *(arr1+i);
        *(arr1+i) = *(arr2+i);
        *(arr2+i) = temp;
    }
    
}


int main(){
    int arr1[] = {10,20,30,40,50};
    int arr2[] = {15,25,35,45,55};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    cout<<"Before Swap :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr2[i]<<" ";
    }
    swapArray(arr1,arr2,size);
    cout<<"\nAfter Swap :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}