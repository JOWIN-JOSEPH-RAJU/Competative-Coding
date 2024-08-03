#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main() {

    char arr[100];
    int count=0;
    fgets(arr,100,stdin);
    for(int i =0;arr[i]!='\0';i++)
    {
       
            count++;
        
        
    }
    printf("%d",count);
    return 0;
}
