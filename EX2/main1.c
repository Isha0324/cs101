#include <stdio.h>

int main(){
    int i = 128;
    if (i & (i-1)){
    printf("false");
}
    else {
    printf("true");
}
    return 0;
}

/*2的冪次方 AND 2的冪次方減1 =0(沒有數字) */
