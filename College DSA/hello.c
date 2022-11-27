#include<stdio.h>
int main(){
    int a = 10;
    char b = 'A';
    float c= 3.5;
    double d = 10.01;
    printf("Size of int is =  %d" ,sizeof(3.1f));
    printf("\n");
    printf("Size of char is =  %d ",sizeof('c'));
    printf("\n");
    printf("Size of float is =  %d and value  = %d",sizeof(c),c);

    printf("\n");
    printf("Size of double is =  %d and value  = %d",sizeof(d),d);
    printf("\n");
    return 0;
}