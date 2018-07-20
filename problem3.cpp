#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf ("%d", &n);
    char *s=(char*)malloc(10240*sizeof(char));
    scanf("%s",s);
    int k,x;
    scanf("%d",&k);
    for(int i=0; i<=strlen(s);i++){
        if(isalpha(s[i])){
            if(isupper(s[i]))
                x='A';
            else
                x='a';
            int a = (int)s[i];
                a= x+((a+k-x)%26);
            char c = a;
                s[i] = c;

        }
    }
    printf ("%s", s);
    return 0;


}
