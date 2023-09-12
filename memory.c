#include<stdio.h>
#include<stdlib.h>
int *ptr=NULL;
void fun(){
    int *ptr=(int*)malloc(20);
    printf("fun :%ls %d",ptr,*ptr);
    printf("%d",ptr[1]);
    printf("%d",ptr[2]);
    printf("%d",ptr[3]);
    printf("%d",ptr[4]);


}

int main(){
    printf("main:%ls ",ptr);
    fun();
}