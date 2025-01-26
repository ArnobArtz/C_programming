//1
#include <stdio.h>
int main() {
    int n, i, count = 0;
    float sum = 0, avg;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = sum / n;
    for (i = 0; i < n; i++) {
        if (a[i] >= avg * 0.9 && a[i] <= avg * 1.1) count++;
    }
    printf("%d\n", count);
    return 0;
}
 //2
 #include <stdio.h>
int fact(int x) {
    return (x == 0 || x == 1) ? 1 : x * fact(x - 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fact(n));
    return 0;
}
//3
#include <stdio.h>
int count_upper(char w[]) {
    int i, c = 0;
    for (i = 0; w[i] != '\0'; i++) {
        if (w[i] >= 'A' && w[i] <= 'Z') c++;
    }
    return c;
}
int main() {
    char w[100];
    scanf("%s", w);
    printf("%d\n", count_upper(w));
    return 0;
}
//4
#include <stdio.h>
struct Apt {
    int num;
    float sqft, rent;
};
int main() {
    struct Apt a[4];
    int i, max_idx = 0;
    float max_ratio = 0, ratio;
    for (i = 0; i < 4; i++) {
        scanf("%d %f %f", &a[i].num, &a[i].sqft, &a[i].rent);
        ratio = a[i].rent / a[i].sqft;
        if (ratio > max_ratio) {
            max_ratio = ratio;
            max_idx = i;
        }
    }
    printf("%d\n", a[max_idx].num);
    return 0;
}
//5
#include <stdio.h>
#include <string.h>
int main() {
    int n, i;
    char c, w[100][100];
    scanf("%d %c", &n, &c);
    for (i = 0; i < n; i++) scanf("%s", w[i]);
    for (i = 0; i < n; i++) {
        if (w[i][strlen(w[i]) - 1] == c) printf("%s\n", w[i]);
    }
    return 0;
}
//6
#include <stdio.h>
int main() {
    int h, m, max_h = 0;
    float u[3][12], sum[3] = {0}, max = 0;
    for (h = 0; h < 3; h++) {
        for (m = 0; m < 12; m++) {
            scanf("%f", &u[h][m]);
            sum[h] += u[h][m];
        }
        if (sum[h] > max) {
            max = sum[h];
            max_h = h + 1;
        }
    }
    printf("%d\n", max_h);
    return 0;
}
//7
#include <stdio.h>
#include <string.h>
int main() {
    char w[100];
    scanf("%s", w);
    printf("%s\n", w[0] == w[strlen(w) - 1] ? "Yes" : "No");
    return 0;
}
