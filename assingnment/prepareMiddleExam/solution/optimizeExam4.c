#include <stdio.h>

int main() {
    int n, num = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // 홀수 줄: 오른쪽에서 왼쪽
            int start = num + i - 1;
            for (int j = 0; j < i; j++) {
                printf("%d ", start--);
            }
        } else {
            // 짝수 줄: 왼쪽에서 오른쪽
            for (int j = 0; j < i; j++) {
                printf("%d ", num++);
            }
            // 이미 위에서 증가했으므로 continue
            continue;
        }
        // 홀수 줄일 경우에도 num 증가
        num += i;
        puts("");
    }

    return 0;
}
