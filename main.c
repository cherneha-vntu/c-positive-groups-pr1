#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void process_positive_groups(int *arr, int n) {
    int i = 0;

    while (i < n) {
        if (arr[i] <= 0) {
            i++;
            continue;
        }

        int start = i;

        while (i < n && arr[i] > 0) {
            i++;
        }
        int end = i;

        int len = end - start;

        long long sum = 0;
        for (int j = start; j < end; j++) {
            sum += arr[j];
        }

        double avg = (double)sum / len;

        printf("  Група [%d..%d] (%d елем.): сума=%lld, середнє=%.2f\n", start, end - 1, len, sum, avg);

        int replaced = 0;
        for (int j = start; j < end; j++) {
            if ((double)arr[j] > avg) {
                arr[j] = (int)avg;
                replaced++;
            }
        }
        printf("    Замінено елементів: %d\n", replaced);
    }
}

void print_array(const int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            printf("\033[32m%4d\033[0m", arr[i]);
        else
            printf("%4d", arr[i]);

        if ((i + 1) % 20 == 0)
            printf("\n");
    }
    printf("\n");
}

int main(void) {
    srand((unsigned)time(NULL));

    int n = 50 + rand() % 151;
    printf("Розмір масиву: %d\n\n", n);

    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        fprintf(stderr, "Помилка виділення пам'яті\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 41) - 20;
    }

    printf("=== Початковий масив ===\n");
    print_array(arr, n);

    printf("\n=== Обробка груп додатних чисел ===\n");
    process_positive_groups(arr, n);

    printf("\n=== Масив після обробки ===\n");
    print_array(arr, n);

    free(arr);
    return 0;
}
