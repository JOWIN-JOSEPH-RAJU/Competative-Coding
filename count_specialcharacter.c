#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
        char arr[100];
    
    int count=0;
    printf("hiii");
    fgets(arr,100,stdin) ; 
    for(int i=0;arr[i]!='\0';i++)
    {
        int j=isalnum(arr[i]);
        if(j==0)
        {
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}
