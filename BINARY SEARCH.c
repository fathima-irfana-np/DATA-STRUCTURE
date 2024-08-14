#include <stdio.h>
#include <string.h>
int main(){
	
	int n,i,array[100],mid,high,low,key;
	printf("how many number that you are going to enter");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);}
	printf("enter the item or value that u wan to search");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(high+low)/2;
	
	while(low<=high)
	{
	if(array[mid]<key)
		low=mid+1;
	else if(array[mid]==key){
	     printf("%d is find at the location of %d",key,mid+1);
	     break;}
	else
	 high=mid-1;
		mid=(high+low)/2;
       }
       if(low>high)
		   printf("not found");
		   
		   
		   }

	

