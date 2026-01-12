#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("test1.txt", "r");

    char buffer[255];
    while(fgets(buffer, 255, ptr) != NULL){
        printf("%s", buffer);
    }
    /* */
    fclose(ptr);

    ptr = fopen("test2.txt", "a");
    fputs("CSM Reze Arc was PEAK.\nAdd to that, the Assasins Arc seems to be very good too.\nMan Tatsuki Fujimoto is cooking hard.\n", ptr);
    fclose(ptr);

    ptr = fopen("test3.txt", "w");
    fprintf(ptr, "\n");
    fclose(ptr);
    return 0;
}
