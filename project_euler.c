#include <stdio.h>

int main(){
    int total = 1;

    for(int i = 0;i<3;i++){
        total = total * 2;
        total = total % 10;
    }
    printf("%d", total);
}