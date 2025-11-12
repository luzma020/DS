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
printf("Enter elements to insert : ");
scanf("%d",&num);
printf("Enter position to insert (1 to %d): ",n+1);
scanf("%d",&pos); 
if (pos<1|| pos> n+1){
printf("invalid position!\n");
}
else{
for(i=n;i>=pos;i--){
arr[i]=arr[i-1];
}  
arr[pos-1]=num;                                      
n++;
printf("array elements are \n");
for(i=0;i<n;i++){                
 printf("%d",arr[i]);
}
printf("\n");
}
return 0;
}
