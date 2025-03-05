#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

void rotateClockwise90(int image[SIZE][SIZE]) {
    int imageSize = SIZE;
    for (int i = 0; i < imageSize; i++) {
        for (int j = i; j < imageSize; j++) {
            int temp = image[i][j];
            image[i][j] = image[j][i];
            image[j][i] = temp;
        }
    }
    for (int k = 0; k < imageSize; k++) {
        int a = 0, b = imageSize - 1;
        while (a < b) {
            int temp = image[k][a];
            image[k][a] = image[k][b];
            image[k][b] = temp;
            a++;
            b--;
        }
    }
}

void rotateAnticlockwise90(int image[SIZE][SIZE]) {
    int imageSize = SIZE;
    for (int i = 0; i < imageSize; i++) {
        for (int j = i; j < imageSize; j++) {
            int temp = image[i][j];
            image[i][j] = image[j][i];
            image[j][i] = temp;
        }
    }
    for (int k = 0; k < imageSize; k++) {
        int a = 0, b = imageSize - 1;
        while (a < b) {
            int temp = image[a][k];
            image[a][k] = image[b][k];
            image[b][k] = temp;
            a++;
            b--;
        }
    }
}

void flipVertically(int image[SIZE][SIZE]) {
    for (int i = 0; i < SIZE / 2; i++) {
        for (int j = 0; j < SIZE; j++) {
            int temp = image[i][j];
            image[i][j] = image[SIZE - 1 - i][j];
            image[SIZE - 1 - i][j] = temp;
        }
    }
}

void flipHorizontally(int image[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE / 2; j++) {
            int temp = image[i][j];
            image[i][j] = image[i][SIZE - 1 - j];
            image[i][SIZE - 1 - j] = temp;
        }
    }
}

void scaleImage(int image[SIZE][SIZE], int SCALE) {
    for (int i = 0; i < SIZE; i++) {
        for (int di = 0; di < SCALE; di++) {
            for (int j = 0; j < SIZE; j++) {
                for (int dj = 0; dj < SCALE; dj++) {
                    if (image[i][j] == 0)
                        printf("⬜");
                    else
                        printf("⬛");
                }
            }
            printf("\n");
        }
    }
}

void printImage(int image[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (image[i][j] == 0)
                printf("⬜");
            else
                printf("⬛");
        }
        printf("\n");
    }
}

int main() {
    int image[SIZE][SIZE] = {  
        {1, 1, 1, 1, 1, 1},
        {1, 0, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1},
        {1, 0, 1, 1, 0, 1},
        {1, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1}
    };

    system("clear");
    int choice, scale;
    printf("Original Image:\n\n");
    printImage(image);
    while (1) {
        printf("\nMenu:\n");
        printf("1. Rotate 90\u00b0 Clockwise\n");
        printf("2. Rotate 90\u00b0 Anticlockwise\n");
        printf("3. Flip Vertically\n");
        printf("4. Flip Horizontally\n");
        printf("5. Scale Image\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                rotateClockwise90(image);
                printf("\nRotated 90\u00b0 Clockwise:\n");
                printImage(image);
                break;
            case 2:
                rotateAnticlockwise90(image);
                printf("\nRotated 90\u00b0 Anticlockwise:\n");
                printImage(image);
                break;
            case 3:
                flipVertically(image);
                printf("\nFlipped Vertically:\n\n");
                printImage(image);
                break;
            case 4:
                flipHorizontally(image);
                printf("\nFlipped Horizontally:\n\n");
                printImage(image);
                break;
            case 5:
                printf("Enter scale factor: ");
                scanf("%d", &scale);
                printf("\nScaled Image:\n\n");
                scaleImage(image, scale);
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
    