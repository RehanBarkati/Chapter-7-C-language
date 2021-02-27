# include<stdio.h>
void printArr(int *arr,int n){
  int i=0;
    printf("Array: "); 
    while(i<n){
       printf("%d",arr[i]);
       printf(", ");
       i++;
   }
   printf("\n");
}

 int count_positive(int *arr,int n){
  int i,pos_count=0;
  for(i=0;i<n;i++){
      if(arr[i]>0){
          pos_count++;
      }
    }
   return count_positive;
 }
int count_negative(int *arr,int n){
  int i,neg_count=0;
  for(i=0;i<n;i++){
      if(arr[i]<0){
          neg_count++;
      }
    }
   return neg_count;
 }

int main(){
    int arr[]={1,2,3,4,-1,-2,-3};
    printArr(arr,7);
    count_positive(arr,7);
     printf("count of positive number=%d\n",count_positive(arr,7));
     count_negative(arr,7);
     printf("count of negative number=%d\n",count_negative(arr,7));
    return 0;
}