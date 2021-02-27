# include<stdio.h>

int main(){
    // int a[]={1,2,3,4,5,6,7,8,9};
    // int *ptr=a;
    // printf("The third element of array is %d",*(ptr +2));
    int arr[10];
    int *ptr=arr; // int *ptr=&arr[0];
    ptr=ptr +2;
    if(ptr==&arr[2]){
        printf("These points to the same location");
    }
    else{
        printf("These don not points to the same location");
    }
    return 0;
}