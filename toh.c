#include <stdio.h>

void TOH(int n, char sour, char temp, char dest){
    if(n<1){
        return;
    }
    TOH(n-1, sour, dest, temp);
    printf("%d disk is moved form %c to %c\n", n,sour,dest);
    TOH(n-1, temp, sour,dest);
}

int main(){
    int n = 5;
    TOH(n, 'A', 'B', 'C');
    printf("the nnumber of moves done by disc is:%d", (int) pow(2,n)-1);
    return 0;
}
