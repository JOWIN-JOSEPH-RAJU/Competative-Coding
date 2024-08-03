#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char arr[100];
    char sr;
    int a=0;
    scanf("%s\n",&sr);
    fgets(arr,100,stdin);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==sr)
        {
          a=1;
          
        }
        
    }
    if(a==1)
    {
        printf("%s","Present");
    }
    else
    {
        printf("%s","Not Present");
    }
}
