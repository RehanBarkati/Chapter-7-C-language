# include<stdio.h>
// void printArray(int *ptr, int n){
//     for(int i=0;i<n;i++){
//         printf("the value of element %d is %d\n",i+1,*(ptr + i));
//     }
// }
// void printArray(int ptr[], int n){
//     for(int i=0;i<n;i++){
//         printf("the value of element %d is %d\n",i+1,*(ptr + i));
//     }
// }
void printArray(int ptr[], int n){
    for(int i=0;i<n;i++){
        printf("the value of element %d is %d\n",i+1,ptr[i]);
    }
}
int main(){
    int arr[]={3,4,5,6,7,8,9};
    printArray(arr,7);
    return 0;
}