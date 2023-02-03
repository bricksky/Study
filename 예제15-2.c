#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main(void)
{
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb); // 바꾸기 전
    swap_ptr(&pa, &pb);                     // swap함수를 통해 pa와 pb의 값을 바꿈
    printf("pa -> %s, pb -> %s\n", pa, pb); // 바꾼 후

    return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
    char *pt;

    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}