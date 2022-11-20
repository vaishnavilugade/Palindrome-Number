#include <stdio.h>

 
int main()
{
    char str[20];
    printf(" ");
    scanf("%s", str);
 
    int strSize = strlen(str);
    if (strSize > 20) {
       
        return 0;
    }
 
   
    char strReversed[20];
    for (int i = strSize - 1; i >= 0; --i) {
        strReversed[strSize - 1 - i] = str[i];
    }
 
    
    if (strcmp(str, strReversed) == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}