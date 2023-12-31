#include <stdio.h>

void rotateRight(int source[], int k, int size) {
int temp[k];
for (int i = 0; i < k; i++) {
temp[i] = source[size - k + i];
}

for (int i = size - 1; i >= k; i--) {
source[i] = source[i - k];
}

for (int i = 0; i < k; i++) {
source[i] = temp[i];
}
}
int main() {
int source[] = {10, 20, 30, 40, 50, 60};
int k = 3;
int size = sizeof(source) / sizeof(source[0]);

rotateRight(source, k, size);

printf("[ ");
for (int i = 0; i < size; i++) {
printf("%d", source[i]);
if (i < size - 1) {
printf(", ");
}
}
printf(" ]\n");

return 0;
}
