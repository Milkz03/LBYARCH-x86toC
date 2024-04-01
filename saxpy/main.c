// Mikkel Dominic V. Gamboa - Frances Julianne R. Dela Cruz
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

extern float mulasm(float A, float X, float Y);

float multiplication(float A, float X, float Y) {
    return A * X + Y;
}

int main(void) {
    //for (int s = 0; s < 30; s++) {
        const int n = 1048576;
        // 1048576 16777216 268435456
        float A = 2.0;
        float* X = (float*)malloc(n * sizeof(float));
        float* Y = (float*)malloc(n * sizeof(float));
        float* Z = (float*)malloc(n * sizeof(float));

        double cTime = 0.0;
        double aTime = 0.0;

        for (int m = 0; m < n; m++) {
            X[m] = (float)1.0 + m;
        }
        for (int o = 0; o < n; o++) {
            Y[o] = (float)11.0 + o;
        }

        clock_t startTime, endTime;

        startTime = clock();
        for (int i = 0; i < n; i++) {
            Z[i] = multiplication(A, X[i], Y[i]);
        }
        endTime = clock();
        cTime = (double)(endTime - startTime);

        printf("C Correct Output: \n");
        for (int i = 0; i < 10; i++) {
            printf("Answer: %.1f \n", Z[i]);
        }
        printf("CTIME: %.1f \n", cTime);
        printf("---------------------------- \n");

        startTime = clock();
        for (int j = 0; j < n; j++) {
            Z[j] = mulasm(A, X[j], Y[j]);
        }
        endTime = clock();
        aTime = (double)(endTime - startTime);

        printf("ASM Correct Output: \n");
        for (int j = 0; j < 10; j++) {
            printf("Answer: %.1f \n", Z[j]);
        }
        printf("ATIME: %.1f \n\n", aTime);

        free(X);
        free(Y);
        free(Z);
    //}
    return 0;
}
