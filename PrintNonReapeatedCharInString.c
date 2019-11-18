#include <stdio.h>
#include <string.h>

int main() {
	char str[] =" deeb xdf kfgf jhdfgus pak kum ar ";
	int len =strlen(str);
	char temp;
	//sorting
	for (int i = 0; i <len-1; i++) {
      for (int j = i+1; j <len; j++) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
  }
   //str = aadeekkmpru
	//logic 
	char prev = str[0];
	int count=0;
	for(int i=1; i<=len; i++)
	{
	    if(prev != str[i])
	    {
	        if(count ==0)printf("%c",prev);
	        //if(count !=0)printf("%c repeted %d times\n",prev,count);
	        prev = str[i];
	        count=0;
	    }
	    else
	    {
	        ++count;
	    }
	}
	
	return 0;
}