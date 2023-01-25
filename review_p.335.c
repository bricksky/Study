/*
[보기1]
#include <stdio.h>

int main(void)
{
    char str[20] = "apple";
    char *pa = str;
    char *pb = "pineapple";

    printf("%s", "apple");
    return 0;
}
*/

/*
[보기2]
#include <stdio.h>

int main(void)
{
    char str[20] = "apple";
    char *pa = str;
    char *pb = "pineapple";

    printf("%s", "str[0]");
    return 0;
}
*/

/*
[보기3]
#include <stdio.h>

int main(void)
{
    char str[20] = "apple";
    char *pa = str;
    char *pb = "pineapple";

    printf("%s", pa);
    return 0;
}
*/

/*
[보기4]
#include <stdio.h>

int main(void)
{
    char str[20] = "apple";
    char *pa = str;
    char *pb = "pineapple";

    printf("%s", pb + 4);
    return 0;
}
*/