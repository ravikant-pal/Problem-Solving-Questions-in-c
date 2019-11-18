#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {

    char str[1000];
    scanf("%s",str);
    int n=sizeof(str)/sizeof(str[0]);
    int frequency[10] ={0};
    //for(int i=0;i<10;i++) frequency[i]=0;
    
    for(int i=0;i<n;i++)
    {
        if(str[i] =='\0') break;
        if(isdigit(str[i]))
        {
            frequency[(int)str[i]-48]++;
            //printf("%d ",(int)str[i]-48);
        }else
        {
         continue;   
        }
    }
    for(int i=0; i<10; i++) printf("%d ",frequency[i]);   
    return 0;
}
