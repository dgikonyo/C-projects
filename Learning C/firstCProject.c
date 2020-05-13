#include <stdio.h>
//tells compiler to include information about the standard output/input library
//Main usually calls other libraries and functions to help in execution
int main()  //program begins by executing from Main..so every C program must have a main
{
    int i,n;
    int sum=0;
    printf("This is an arithmetic progression\n");

    printf("Enter the position of the last term\n");
    scanf("%d",&n);
    //by adding '&'- we are getting the value of the number stored in variable n so we are dereferencing
    for (i=1;i<=n;++i){
       sum=sum+i;
    }
    printf("The Sum=%d\n",sum);
    return 0;

}