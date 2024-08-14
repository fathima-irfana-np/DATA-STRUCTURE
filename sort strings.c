#include <stdio.h>
#include <string.h>
int main(){
// sort of string

  char str[20][20],temp[20];
  int count,i,j;
  printf("how many strings that that you are going to enter");
  scanf("%d",&count);
  printf("enter the strings");
  for(i=0;i<=count;i++){
	  gets(str[i]);}
  for(i=0;i<=count;i++){
	  for(j=i+1;j<=count;j++)
		if(strcmp(str[i],str[j])>0)
		{
			strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp);
			
	}

}
	  printf("string after sorting is");
	  for(i=0;i<=count;i++){
		  puts(str[i]);}
	  
	 



 


}
