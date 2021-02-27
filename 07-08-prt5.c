# include<stdio.h>
void reverse(int *arr ){
       int temp;
       for(int i=0;i<4;i++){
       temp=arr[i];
       arr[i]=arr[7-i-1];
       arr[7-i-1]=temp;
    }
}
int main(){
    int i;
   int arr[]={1,2,3,4,5,6,7,};
   reverse(arr);
   for(i=0;i<7;i++){
   printf("the value of element %d is %d\n",i+1,arr[i]);
   }
    return 0;
}