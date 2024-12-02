#include <stdio.h>
#include <stdlib.h>

int main(void)
{
while(1)
{
    char c1;
    char c2;
    printf("가위(s) 바위(r) 보(p) 게임을 시작합니다\n");
    printf("가위 바위 보를 선택하세요");
    scanf("%c",&c1);
    c2=(char)rand()%3; //컴퓨터의 값이 정해짐
    //0: 가위 1: 바위 2: 보
    if(c1=='s'&c2=='0')
    {
        printf("당신은 가위를 냈고 컴퓨터는 가위를 냈습니다.\n");
        printf("당신은 비겼습니다\n");
    }
            else if(c1=='s'&c2=='1')
            {
                
                printf("당신은 가위를 냈고 컴퓨터는 바위를 냈습니다.\n");
                printf("당신은 졌습니다\n");
            }
                else if(c1=='s'&c2=='2')
                {
                    printf("당신은 가위를 냈고 컴퓨터는 보를 냈습니다.\n");
                    printf("당신은 이겼습니다\n");
                }
    
    if(c1=='r'& c2=='0')
    {
        printf("당신은 바위를 냈고 컴퓨터는 가위를 냈습니다.\n");
        printf("당신은 이겼습니다\n");}
            else if(c1=='r'& c2=='1')
            {
                printf("당신은 바위를 냈고 컴퓨터는 바위를 냈습니다.\n");
                printf("당신은 비겼습니다\n");
            }
                else if (c1=='r'&c2=='2')
                {
                    printf("당신은 바위를 냈고 컴퓨터는 보를 냈습니다.\n");
                    printf("당신은 졌습니다\n");
                 }
    
    if(c1=='p'&c2=='0')
    {
        printf("당신은 보를 냈고 컴퓨터는 가위를 냈습니다.\n");
        printf("당신은 졌습니다\n");}
            else if(c1=='p'&c2=='1')
            {
                printf("당신은 보를 냈고 컴퓨터는 바위를 냈습니다.\n");
                printf("당신은 이겼습니다\n");
            }
                else if (c1=='p'&c2=='2')
                {
                   
                    printf("당신은 보를 냈고 컴퓨터는 보를 냈습니다.\n");
                    printf("당신은 비겼습니다\n");
                }
    }

        printf("다음에 또 만나요");
        return 0;   
}

