#include<stdio.h>
int main()
{
int n,i,pos,num;
int arr[100];
printf("Enter the no of elements in an array : ");
scanf("%d",&n);
printf("Enter %d elements: \n",n);
for(i=0;i<n;i++){                
 scanf("%d",&arr[i]);
}

printf("Enter position to delete : ");
scanf("%d",&pos); 
if (pos<1|| pos> n+1){
printf("invalid position!\n");
}
else{
for(i=pos;i<n-1;i++){
arr[i]=arr[i+1];
}  
                                      
n--;
printf("array elements after deletion are \n");
for(i=0;i<n;i++){                
 printf("%d \n",arr[i]);
}
printf("\n");
}
return 0;
}
