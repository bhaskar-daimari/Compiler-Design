#include <stdio.h>

int main(){
    char c, next;
    FILE *ptr;
    ptr = fopen("program1.c", "r");

    while((c=fgetc(ptr)) != EOF){
        if(c=='/'){
            next = fgetc(ptr);
            if (next == '/'){
                printf("There is comment(s) in the c file.\n");
                return 0;
            }
            else if (next == '*'){
                printf("There is comment(s) in the c file.\n");
                return 0;
            }
        }
    }
    printf("There was no comment to be found in the c file.\n");
    fclose(ptr);
    return 0;
}
