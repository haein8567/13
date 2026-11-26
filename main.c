#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Point 변수의 이름을 Bookshelves라고 적용. 
//세 줄이 있고 줄 당 10개의 입력이 가능.
//이차원변수 사용

struct Book {
    int number;
    char title[10];
};

void main(void) {
    int i;
    struct Book **bookshelf;


//3개의 Book 구조체 포인터 변수 동적 할당

bookshelf =(struct Book **)malloc(3*sizeof(struct Book *));
for(i=0;i<3;i++)
    bookshelf[i] = (struct Book *)malloc(10*sizeof(struct Book));



//이중 포인터 형태의 동적 메모리 접근 및 반납
bookshelf[1][3].number = 5;
strcpy(bookshelf[1][3].title, "C++ Programing");

(bookshelf[2]+4) -> number = 3;
strcpy((bookshelf[2]+4)->title, "Communications Theory");

printf("book(1,3): %i, %s", (bookshelf[1]+3)->number, (bookshelf[1]+3)->title);
printf("book(2,4 : %i, %s", bookshelf[2][4].number, bookshelf[2][4].title);

//2차원 구조체 메모리 반납
for(i=0;i<3;i++)
    free(bookshelf[i]);
    free(bookshelf);

return;}