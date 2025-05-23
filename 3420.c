#include <stdio.h>
#include <string.h>
#include <math.h>

long long formula(long long n) {
    return (n * ((3 * n) + 1)) / 2;
}

long long max(long long a, long long b){
    return (a>b ? a:b);
}

long long binaria(long long n) {
    long long start = 0;
    long long end = 2e9;
    long long mid;

    long long res = 0;

    while (start <= end) {
        mid = (end + start) / 2;

        if (formula(mid) <= n) {
            start = mid + 1;
            res = max(res, mid);
        } else {
            end = mid - 1;
        }
    }

    return res;
}

int main() {

    long long cartas;
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%lld", &cartas);
        printf("%lld\n", binaria(cartas));
    }


    return 0;
}