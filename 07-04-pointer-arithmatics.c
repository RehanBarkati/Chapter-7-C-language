# include<stdio.h>

int main(){
    // addition of a number  to a pointer
    // int a=40;
    // int *ptr=&a;
    // printf("The value of ptr is %u\n",ptr);
    // ptr++;
    // ptr=ptr +1;
    // printf("the value of ptr after increment is %u\n",ptr);

// char c=40;
//     char *ptr=&c;
//     printf("The value of ptr is %u\n",ptr);
//     ptr++;
//     printf("the value of ptr after increment is %u\n",ptr);

// subtraction of a pointer from another pointer
int a[]={2,4};
int *i=&a[0],*j=&a[1];
printf("the value of i and j is %u and %u\n",i,j);
printf("The value of j-i is %u\n",j-i);
printf("The value of *j-*i is %d\n",*j-*i);
    return 0;
}