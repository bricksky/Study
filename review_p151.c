#include <stdio.h>

int main(void)
{
    int age = 25, chest = 95;
    char size; // 어차피 s,m,l이기에 char형으로 받는게 맞다. (이 부분 실수했음)
    if (age < 20)
    {
        if (chest < 85)
            size = 'S'; // 문자를 받을 때에는 ''와 같은 작은 따옴표를, 문자열을 받을 때에는 ""큰 따옴표를 받아야 한다.
        else if (chest < 95)
            size = 'M';
        else
            size = 'L'
    }
    else
    {
        if (chest < 90)
            size = 'S';
        else if (chest < 100)
            size = 'M';
        else
            size = 'L'
    }

    printf("사이즈는 %c입니다.\n", size) return 0;
}

// 8행과 15행에서 실수를 했다. 어차피 if / else if / else의 경우 if 문에 적용이 되지 않으면 자동으로 if 에서의 값은 무시하고 else if로 넘어가게된다.
// 하지만 해당 부분에서 나는 코드를 작성할 때 else if 부분에서 (chest>=85)를 작성하며 불필요한 코드를 작성했다.
// 한번 if문의 적용을 받지않으면 쭉 적용 대상에서 제외되는 것을 잊지 말자!!