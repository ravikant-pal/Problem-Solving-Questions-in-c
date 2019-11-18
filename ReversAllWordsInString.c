#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Welcome to Jumanji the world of Adventure !?*";
	int count=0;
	for(int i=0; i<=strlen(str); i++)
	{
	    if(str[i]==' ')
	    {
	        int j=i-1;
	        while(count>0)
	        {
	            printf("%c",str[j]);
	            --j;
	            --count;
	        }
	        printf(" ");
	    }
	    else
	    {
	        ++count;
	    }
	}
	//last word print kara rahe h!
	int j=strlen(str)-1;
	while(count>0)
	{
	 printf("%c",str[j]);
	 --j;
	 --count;
	 }

	return 0;
}