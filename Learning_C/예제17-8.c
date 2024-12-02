#include <stdio.h>

struct address // 주소록을 만들 구조체 선언
{
    char name[20]; // 이름을 저장할 멤버
    int age;       // 나이을 저장할 멤버
    char tel[20];  // 전화번호 저장할 멤버
    char addr[80]; // 주소를 저장할 멤버
};

void print_list(struct address *lp);

int main(void)
{
    struct address list[5] = {// 요소가 5개인 구조체 배열 선언
                              {"홍길동", 23, "111-1111", "울릉도 독도"},
                              {"이순신", 35, "222-2222", "서울 건천동"},
                              {"장보고", 19, "333-3333", "완도 청해진"},
                              {"유관순", 15, "444-4444", "충남 천안"},
                              {"안중근", 45, "555-5555", "황해도 해주"}};

    print_list(list);

    return 0;
}

void print_list(struct address *lp) // 매개변수는 구조체 포인터
{
    int i; // 반복 제어 변수

    for (i = 0; i < 5; i++) // 배열 요소의 개수만큼 반복
    {
        printf("%10s%5d%15s%20s\n",
               (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
    }
}