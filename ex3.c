#include<stdio.h>
int main(){
    char pet;
    printf("Do you have a cat or dog c/d ?");
    scanf("%c\n",&pet);
    if (pet == 'd' || pet == 'D'){
        printf("Dogs say: hav\n");
    }
    else if (pet == 'c' || pet == "C"){
        printf("cats say miyav\n");
    }else{
        printf("you entered wrong animal");
    }
    return 0;
}

