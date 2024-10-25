#include<stdio.h>
int main(){
    char pet;
    printf("Do you have a cat or dog c/d ?");
    scanf("%c",&pet);
    if (pet == 'd' || pet == 'D'){
        printf("Dogs say: woof\n");
    }
    else if (pet == 'c' || pet == "C"){
        printf("cats say meow\n");
    }else{
        printf("you entered wrong animal");
    }
    return 0;
}

