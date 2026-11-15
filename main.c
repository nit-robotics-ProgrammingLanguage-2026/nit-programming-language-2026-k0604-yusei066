#include <stdio.h>

int main(void) {
    int a;
    long s = 0;

    scanf("%d", &a);

    if (a < 0) {
        printf("NG\n");
        return 0;
    }

    for (int i = 1; ; i++) { 
        if (i > a) {
            break;
        }
        if (i % 3 == 0 || i % 5 == 0) /*3の倍数と5の倍数を除外*/
        {
            continue;
        }
        s += i;
    }

    printf("%ld\n", s); /*65536以上の数字にも対応*/

    return 0;
}
