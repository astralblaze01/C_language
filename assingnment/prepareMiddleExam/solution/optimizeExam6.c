#include <stdio.h>

int main() {
    int n, value;
    scanf("%d", &n);

    int firstZeroFound = 0; // 첫 0 만났는지 여부
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);

        if (value == 0) {
            if (firstZeroFound) {
                // 두 번째 이후 0을 만났다면 그 전에 세었던 값 출력
                printf("%d ", count);
            }
            // 첫 0을 만났다면 플래그 on
            firstZeroFound = 1;
            count = 0; // 다음 0 사이 카운트 초기화
        } else {
            if (firstZeroFound) {
                count++;
            }
        }
    }

    return 0;
}
