// #include <stdio.h>

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int arr1[6] = {1, 2, 3, 4, 5, 6};
//     int c = 5 + 6;

//     int mergedArray[c];

//     for (int i = 0; i < 5; i++)
//     {
//         mergedArray[i] = arr[i];
//     }
//     for (int j = 0; j < 6; j++)
//     {                                 
//         mergedArray[j + 5] = arr1[j]; 
//     }

//     for (int i = c; i > 0; i--)
//     {
//         printf("%d ", mergedArray[i]); 
//     }
//     return 0; 
// }

// #include <stdio.h>

// int main()
// {
//     int k = 0;
//     int arr[5] = {1, 2, 4, 5};
//     int arr1[6] = {1, 2, 7, 9, 20, 3};
//     int arr2[k];

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             if (arr[i] == arr1[j])
//             {
//                 arr2[k] = arr[i];
//                 k++;
//             }
//         }
//     }

//     for (int i = 0; i < k; i++)
//     {
//         printf("%d ", arr2[i]);
//     }

//     return 0;
// }

#include<stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,6,6,3,1};
    int n,count=0;
    printf("Enter integer to find: ");
    scanf("%d",&n);

    for(int i=0;i<10;i++){
        if(arr[i]==n){
            count++;
        }
    }
    printf("%d",count);
}
