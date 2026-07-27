// #include <stdio.h>

// int case1(int x){

//      switch(x){
//         case 97: "a";
//         printf("a");
//         break;
//         case 2: "66";
//         printf("B");
//         break;
//         case 3: "i";
//         printf("i");
//         break;
//         case 4: "o";
//         printf("i");
//         break;
//         case 5: "u";
//         printf("u");
//         break;
//         default:
//         printf("Not a vowel");
//     }
// }
// int main(){
//     int y = 97;
//     case1(y);
// }


#include <stdio.h>

int case1(int x){

     switch(x){
        case 95+2: "a";
        printf("a");
        break;
        case 15&10: "10";
        printf("B");
        break;
        case 15/3: "76";
        printf("i");
        break;
        case 4: "o";
        printf("t");
        break;
        default:
        printf("Not a vowel");
    }
}
int main(){
    int y = 5;
    case1(y);
}
// switch case: better replacement of if-else-if.