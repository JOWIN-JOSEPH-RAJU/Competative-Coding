#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main() {

    char arr[100];
    
    fgets(arr,100,stdin);
    for(int i =0;arr[i]!='\0';i++)
    {
        if(arr[i]=='a'||arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='i'||arr[i]=='I'||arr[i]=='o'||arr[i]=='O'||arr[i]=='U'||arr[i]=='U')
        {
            arr[i]= ' ';
        }
        
        
        
    }
    printf("%s",arr);
    return 0;
}

 
