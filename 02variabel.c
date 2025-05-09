#include <stdio.h>

int add(int x, int y){
    int result = x + y;
    return result;
}

int subtract(int x, int y){
    int result = x - y;
    return result;
}

int main(){

    // variable scope = Refers to where a variable is recognized and accessible.
    //                               Variables can share the same name if
    //                               they're in different scopes {}

    int x = 5; 
    int y = 6; 

    int result = add(x, y);
    int kurang = subtract(x,y);

    printf("ini jumlah %d\n", result);
    printf("ini kurang %d", kurang);

    return 0;
}