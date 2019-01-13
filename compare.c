#include <stdio.h>

int compareFilles(FILE *f1, FILE *f2){
    int a, b;
    if (f1 == NULL || f2 == NULL) {
        fprintf(stderr, "An error was accourd(#1)\n");
        return 1;
    } else{
       a = getc(f1);
       b = getc(f2);

       while(a != EOF && b != EOF){//A loop until the end of the files(EOF)
        a = getc(f1);
        b = getc(f2);
       } 

       if(a == b){
           return 2;
       } else if(a!=b){
           return 1;
       } else {
           return 1;
       }
    }
}

int main(int argc, char const *argv[]){
    FILE *f1 = fopen(argv[1], "r");
    FILE *f2 = fopen(argv[2], "r");
    printf("%d",compareFilles(f1,f2));
    //closing the files
    fclose(f1);
    fclose(f2);
    return 0;
}
