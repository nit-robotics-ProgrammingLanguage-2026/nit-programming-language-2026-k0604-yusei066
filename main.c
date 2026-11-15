#include <stdio.h>

int main(void) {
    int nyuuryoku;
    long s = 0;

    scanf("%d", &nyuuryoku);

    if (nyuuryoku < 0) {
        printf("NG\n");
        return 0;
    }

    for (int number = 1; ; number++) { 
        if (number > nyuuryoku) {
            break;
        }
        if (number % 3 == 0 || number    % 5 == 0) /*3の倍数と5の倍数を除外*/
        {
            continue;
        }
        s += number;
    }

    printf("%ld\n", s); /*65536以上の数字にも対応*/

    return 0;
}
