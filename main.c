#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int compareLongLong(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

static int lowerBound(const long long *arr, int size, long long target) {
    int left = 0;
    int right = size;

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }

    return left;
}

int canSplit(int N, int R, long long *d, int *compressed, int uniqueCount, long long limit) {

    int blocks = 1;
    long long sum = 0;

    int *seenStamp = (int *)calloc(uniqueCount, sizeof(int));
    if (seenStamp == NULL)
        return 0;

    int distinct = 0;
    int currentStamp = 1;

    for (int i = 0; i < N; i++) {

        sum += d[i];
        int key = compressed[i];

        if (seenStamp[key] != currentStamp) {
            distinct++;
            seenStamp[key] = currentStamp;
        }

        long long strain = sum * distinct;

        if (strain > limit) {

            blocks++;

            if (blocks > R) {
                free(seenStamp);
                return 0;
            }

            sum = d[i];

            currentStamp++;
            if (currentStamp == 0) {
                memset(seenStamp, 0, uniqueCount * sizeof(int));
                currentStamp = 1;
            }

            seenStamp[key] = currentStamp;
            distinct = 1;
        }
    }

    free(seenStamp);
    return 1;
}

long long scrollRestoration(int N, int R, long long* d) {

    long long *sorted = (long long *)malloc((size_t)N * sizeof(long long));
    int *compressed = (int *)malloc((size_t)N * sizeof(int));

    if (sorted == NULL || compressed == NULL) {
        free(sorted);
        free(compressed);
        return -1;
    }

    for (int i = 0; i < N; i++)
        sorted[i] = d[i];

    qsort(sorted, N, sizeof(long long), compareLongLong);

    int uniqueCount = 0;
    for (int i = 0; i < N; i++) {
        if (i == 0 || sorted[i] != sorted[i - 1])
            sorted[uniqueCount++] = sorted[i];
    }

    for (int i = 0; i < N; i++)
        compressed[i] = lowerBound(sorted, uniqueCount, d[i]);

    long long low = 0;
    long long high = 1000000000000000000LL;
    long long ans = high;

    while (low <= high) {

        long long mid = (low + high) / 2;

        if (canSplit(N, R, d, compressed, uniqueCount, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    free(sorted);
    free(compressed);
    return ans;
}

int main() {

    int N, R;

    if (scanf("%d", &N) != 1 || scanf("%d", &R) != 1 || N <= 0 || R <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    long long *d = (long long *)malloc((size_t)N * sizeof(long long));
    if (d == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        if (scanf("%lld", &d[i]) != 1) {
            printf("Invalid input\n");
            free(d);
            return 1;
        }
    }

    long long result = scrollRestoration(N, R, d);

    if (result < 0) {
        printf("Memory allocation failed\n");
        free(d);
        return 1;
    }

    printf("%lld\n", result);

    free(d);
    return 0;
}