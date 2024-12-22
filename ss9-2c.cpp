#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index, newValue;

    printf("Mảng ban đầu: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Nhập vị trí cần sửa (0-4): ");
    scanf("%d", &index);
    if (index < 0 || index >= 5) {
        printf("Vị trí không hợp lệ.\n");
        return 1;
    }

    printf("Nhập giá trị mới: ");
    scanf("%d", &newValue);
    arr[index] = newValue;

    printf("Mảng sau khi sửa: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);

    return 0;
}
