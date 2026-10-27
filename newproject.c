#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 20

int x, y, fruitX, fruitY, score;
int gameOver;
int tailX[100], tailY[100];
int nTail;

enum Direction {STOP = 0, LEFT, RIGHT, UP, DOWN};
enum Direction dir;

void Setup() {
    gameOver = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    score = 0;
}

void Draw() {
    system("cls");

    for(int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {

            if(j == 0)
                printf("#");

            if(i == y && j == x)
                printf("O");
            else if(i == fruitY && j == fruitX)
                printf("*");
            else {
                int print = 0;
                for(int k = 0; k < nTail; k++) {
                    if(tailX[k] == j && tailY[k] == i) {
                        printf("o");
                        print = 1;
                    }
                }

                if(!print)
                    printf(" ");
            }

            if(j == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }

    for(int i = 0; i < WIDTH + 2; i++)
        printf("#");

    printf("\nScore: %d\n", score);
}

void Input() {

    if(_kbhit()) {
        switch(_getch()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = 1;
                break;
        }
    }
}

void Logic() {

    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;

    tailX[0] = x;
    tailY[0] = y;

    for(int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];

        tailX[i] = prevX;
        tailY[i] = prevY;

        prevX = prev2X;
        prevY = prev2Y;
    }

    switch(dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    // Wall Collision
    if(x >= WIDTH || x < 0 || y >= HEIGHT || y < 0)
        gameOver = 1;

    // Tail Collision
    for(int i = 0; i < nTail; i++) {
        if(tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    // Food
    if(x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        nTail++;
    }
}

int main() {

    Setup();

    while(!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }

    printf("\nGame Over!\n");
    printf("Final Score: %d\n", score);

    return 0;
}