#include <stdio.h>                   // 이번에는 대/소문자 변환의 횟수까지 세는 것을 적용해보겠습니다.               

int main (void)
{
    char str[80];                  
    printf("문자 입력: ");
    gets(str);                     

    int i =0;    
    int checker = 0;                // 추가) 몇 번 바꼈는지를 생각해야하고,, 일단 if문에 들어가면 횟수에 변화를 가져왔다는 것이니까 새로운 변수를 만들고 if문 안에 checker++를 만들자.                  
    while(i<80)
    {   
        if(str[i]>64 && str[i]<91) 
        {
            str[i] = str[i]+32;  
            checker ++;            // 추가) checker ++를 만듦으로써 checker에 몇번의 변화가 있었는지를 확인할 수 있다.
        }
        i++;
        
    }
    printf("바뀐 문장: %s\n", str);     
    printf("바뀐 문자 수: %d", checker);         =  // 추가) 바뀐 문자의 수가 몇번인지 확인하고 출력하는 부분이다.

    return 0;
}