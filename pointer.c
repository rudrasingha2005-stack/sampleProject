#include <stdio.h>

int main() {
    int n = 3;
    int grid[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("Rotated Matrix:\n");

    for(int j = 0; j < n; j++) {
        for(int i = n - 1; i >= 0; i--) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}