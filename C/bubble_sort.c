#include<stdio.h>
int main(){
 int arr[10];
 int n,c=0,s,i,j;
 printf("Enter size: ");
scanf("%d",&n);
 printf("Enter elements : ");
for(i=0;i<n;i++){
 scanf("%d",&arr[i]);
 }

 for(i=0;i<n-1;i++){
 for(j=0;j<n-i-1;j++)
 {
 if(arr[j]>arr[j+1]){
 int tmp=arr[j+1];
 arr[j+1]=arr[j];
 arr[j]=tmp;
 }
 }
 }
 printf("\nSorted array : ");
 for(i=0;i<n;i++)
 printf("%d ",arr[i]);
 return 0;
}
