#include <stdio.h>
#include <string.h>
int main()
{
 // reverse of a string
 
       char *s;
       char array[20];
       int i,len;
       printf("enter a string");
       gets(array);
       len=strlen(array);
       s=array;
       printf("the reverse of string is:\n");
       for(i=len;i>=0;i--)
       {
		   printf("%c",*(s+i));
       }


}
