/*전력량을 kwh단위로 입력받아 전기 요금과 세금(10%)를 계산하여 출력하세요.
기본요금은 없고 kwh당 요금은 0~50kwh: 34원, 51~100kwh: 81원, 101초과: 122원이다.
60kwh인 경우 50kwh까지는 34원을 적용하고, 51~60까지는 81원을 적용한다. 따라서 계산식은 (50*34)+(60-50)*81이다.
 */

#include <stdio.h>

int main()
{
    int kwh;
    double price;
    double tax;

    printf("전력량을 입력해주세요");
    scanf("%d", &kwh);

    if (kwh <= 50)
    {
        price = 50 * 34;
    }

    else if (kwh >= 51 && kwh <= 100) //  else if(kwh<=100)
    {
        price = 50 * 34 + (kwh - 50) * 81;
    }

    else
    {
        price = 50 * 34 + 50 * 81 + (kwh - 100) * 122;
    }

    tax = price * 0.1;

    printf("전기 요금은 %.1lf원이며, 세금은 %.1lf원입니다.", price, tax);

    return 0;
}
