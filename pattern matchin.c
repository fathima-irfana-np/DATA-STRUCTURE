#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  //pattern matching
  
    char text[20],pat[20];
    int a,b,i,j;
  printf("enter the text");
   gets(text);
  printf("enter the pattern");
  gets(pat);
  
  a=strlen(pat);
  b=strlen(text);
  
  for(i=0;i<=b-a;i++)
  for(j=0;j<a;j++)
	  if(text[i+j]!=pat[j]){
		  break;}
  if(j==a)
  printf(" pattern found at position %d",i+1);



}
