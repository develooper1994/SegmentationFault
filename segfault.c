#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//const int a=10;
//char name[]="clang";
//char* name="clang";
int main(){
/*
    //const int a=10;
    int* b=(int)&a;   // accessing by removing const(c style const_cast)
    *b=5;               // changing value
    printf("%d\n",*b); // what happend?
*/


    //char* name="clang";  // read-only section
    int name[]={1,2,3,4,5,6,7,8,9}; // not read-only section
    int* allocation = (int*)malloc(sizeof(name));
    memcpy(allocation, name, sizeof(name));
    //name[20]='g';         // changing value
    *(allocation + 1) = 's';
    printf("%d\n",allocation[0]); // what happend?

    free(allocation);
    allocation=0;
    *(allocation + 2) = 'o';
    //printf("%d\n",allocation[0]);

    return 0;
}
