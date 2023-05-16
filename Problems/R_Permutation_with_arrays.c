// #include<stdio.h>

// int arr[10000000+1] = {0};
// int main(){
//     int n;
//     scanf("%d",&n);
    
    
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         scanf("%d",&x);
//         arr[x]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         scanf("%d",&x);
//         arr[x]--;
//     }
//     int check  = 1;
//     for (int i = 0; i < 10000000+1; i++)
//     {
//         if(arr[i]!=0){
//             printf("no");
//             check = 0;
//             break;
//         }
//     }
//     if(check) printf("yes");
    
//     return 0;
// }
#include<stdio.h>

int main(){
    for (int i = 3; i <= 700; i++)
    {
        printf("Hmm %d  \n",i);
    }
    
    return 0;
}