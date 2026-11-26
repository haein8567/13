#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int number;
    char title[20];
};

void main(void){
    struct Book *p;
    p= (struct Book *)malloc(2*sizeof(struct Book));


    if (p == NULL){
    printf("memory allocation error");
    return -1;
    }

    p->number = 1;
    strcpy(p->title, "C programming");

    (p+1)->number = 2;
    strcpy((p+1)->title, "Electronics");

    //Test code
    
    printf("%i : %s", p->number, p->title);
     printf("%i : %s", (p+1)->number, (p+1)->title);

    free(p);
    return 0;

}