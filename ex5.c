#include<stdio.h>
void sayHello(){
    char name[30];
    printf("Enter your name: ");
    scanf("%s\n",&name);
    printf("hello %s\n",name);
}

int main() {
    sayHello();

   
}
