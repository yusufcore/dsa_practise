// go-q3to statement in  C.
#include <stdio.h>

int main(){     // runs an infinte loop.
    printf("Start of main \n");
    ab:
    printf("main function \n");
    goto ab;
    printf("end of main \n");
    return 0;
}

int main(){     // executes only one time.
    printf("Start of main \n");
    goto ab;
    printf("main function \n");
    ab:
    printf("end of main \n");
    return 0;
} 

// go to: is used to jump in forward/backward direction.