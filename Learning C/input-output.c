#include <stdio.h>
int main(){
    int c;
    c=getchar();

    /*while(c!=EOF){
        putchar(c);
        c=getchar();
    }*/

    if (c==EOF){
        printf("%d",EOF);
    }
}

//check on how to detect EOF