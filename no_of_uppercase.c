#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char arr[30];
    int count=0;
    int j=0;
    fgets(arr,30,stdin);
    
    for(int i=0;arr[i]!=NULL;i++)
    {
        j=(int)arr[i];
        
       
        if(64<j&&j<90)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
