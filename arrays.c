#include <stdio.h>
#include <stdlib.h>

void fill_array(int arr[], int n){
    int i,j;
    for(i = 0; i <n; i++){
        printf("insert the %d item of the array : ",i);
        scanf("%d", &arr[i]);
    }

}

void show(int arr[], int n){
    int i;
    for(i = 0;i < n ; i++){
        printf("%d", arr[i]);
    }
}

int main(){
    int n ;
    printf("how long should be your array: ");
    scanf("%d", &n);
    while (n < 2 & n > 5)
    {
        printf("verify your array lenth : ");
        scanf("%d", &n);
    }
    int  arr[n];
    fill_array(arr, n);
    show(arr, n);
    

    return 0;
}