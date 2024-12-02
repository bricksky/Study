/*

[1번 문항]
도서명, 저자, 페이지 수, 가격을 멤버로 가지는 book 구조체를 만들어주세요.

struct book
{
    char title [30];
    char author [20];
    int page;
    int price;
};

*/

//[2번 문항]

/* 내가 작성한 답안
#include <stdio.h>

struct cracker
{
    int price;
    int calories;
};

int main(void)
{
    struct cracker basasak;
    printf("바사삭의 가격과 열량을 입력하세요: ");
    scanf("%d%d", (basasak.price), (basasak.calories));

    printf("바사삭의 가격: %d원");
    scanf("%d", basasak.price);

    printf("바사삭의 열량: %dkcal ");
    scanf("%d", basasak.price);

    return 0;
}
*/

/*
[정답]
#include <stdio.h>

struct cracker
{
    int price;
    int calories;
};

int main(void)
{
    struct cracker basasak;
    printf("바사삭의 가격과 열량을 입력하세요: ");
    scanf("%d%d", &basasak.price, &basasak.calories);

    printf("바사삭의 가격: %d원\n", basasak.price);
    printf("바사삭의 열량: %dkcal\n", basasak.calories);

    return 0;
}
*/