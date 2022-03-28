#include <iostream>
#include <SDL.h>
#include <conio.h>
#include<vector>
#define WINDOW_WIDTH 1000
using namespace std;


void verticalLine(SDL_Renderer* render, int x, int y, int length) {
    bool side = false;
    if (length < 0) {
        side = true;
        length *= -1;
    }
    for (int i = 0; i < length; i++) {
        SDL_RenderDrawPoint(render, x, y);
        if (side)
            y += 1;
        else
            y -= 1;
    }
}


void rect(SDL_Renderer* render, int x, int y, int h, int w) {
    h *= (-1);
    for (int i = 0; i < w; i++) {
        verticalLine(render, x, y, h);
        x += 1;
    }
}

void menu(SDL_Renderer* renderer) {
    rect(renderer, 190, 100, 20, 100);
    rect(renderer, 230, 115, 125, 20);

    rect(renderer, 370, 100, 25, 40);
    rect(renderer, 355, 125, 25, 20);
    rect(renderer, 405, 125, 25, 20);
    rect(renderer, 340, 150, 90, 20);
    rect(renderer, 420, 150, 90, 20);
    rect(renderer, 340, 175, 20, 100);

    rect(renderer, 490, 100, 140, 20);
    rect(renderer, 570, 100, 140, 20);
    rect(renderer, 510, 120, 20, 12);
    rect(renderer, 522, 140, 20, 12);
    rect(renderer, 534, 160, 20, 12);
    rect(renderer, 546, 180, 20, 12);
    rect(renderer, 558, 200, 20, 12);

    rect(renderer, 640, 100, 140, 20);
    rect(renderer, 720, 100, 20, 20);
    rect(renderer, 700, 120, 20, 20);
    rect(renderer, 680, 140, 20, 20);
    rect(renderer, 660, 160, 20, 20);
    rect(renderer, 680, 180, 20, 20);
    rect(renderer, 700, 200, 20, 20);
    rect(renderer, 720, 220, 20, 20);

    rect(renderer, 790, 100, 20, 20);
    rect(renderer, 790, 150, 90, 20);

    rect(renderer, 360, 300, 20, 20);
    rect(renderer, 440, 300, 20, 20);
    rect(renderer, 380, 280, 20, 60);
    rect(renderer, 440, 320, 20, 20);
    rect(renderer, 420, 340, 20, 20);
    rect(renderer, 400, 360, 20, 20);
    rect(renderer, 390, 380, 20, 20);
    rect(renderer, 370, 400, 20, 100);

    rect(renderer, 490, 340, 20, 60);

    rect(renderer, 570, 280, 140, 20);
    rect(renderer, 630, 320, 60, 20);
    rect(renderer, 590, 280, 20, 20);
    rect(renderer, 610, 300, 20, 20);
    rect(renderer, 590, 400, 20, 20);
    rect(renderer, 610, 380, 20, 20);


    rect(renderer, 100, 600, 70, 10);
    rect(renderer, 140, 610, 30, 10);
    rect(renderer, 110, 600, 10, 30);
    rect(renderer, 110, 640, 10, 30);

    rect(renderer, 160, 600, 70, 10);

    rect(renderer, 195, 600, 10, 20);
    rect(renderer, 190, 610, 10, 15);
    rect(renderer, 205, 610, 10, 15);
    rect(renderer, 180, 620, 50, 10);
    rect(renderer, 220, 620, 50, 10);
    rect(renderer, 180, 640, 10, 50);

    rect(renderer, 240, 600, 10, 10);
    rect(renderer, 280, 600, 10, 10);
    rect(renderer, 250, 610, 10, 10);
    rect(renderer, 270, 610, 10, 10);
    rect(renderer, 260, 620, 50, 10);

    rect(renderer, 300, 600, 70, 10);
    rect(renderer, 300, 600, 10, 40);
    rect(renderer, 300, 640, 10, 40);
    rect(renderer, 300, 660, 10, 40);

    rect(renderer, 360, 600, 70, 10);
    rect(renderer, 370, 640, 10, 10);
    rect(renderer, 380, 650, 10, 10);
    rect(renderer, 380, 660, 10, 10);
    rect(renderer, 370, 600, 10, 10);
    rect(renderer, 380, 610, 20, 10);
    rect(renderer, 370, 630, 10, 10);

    rect(renderer, 420, 600, 10, 50);
    rect(renderer, 420, 660, 10, 50);
    rect(renderer, 440, 600, 70, 10);

    rect(renderer, 550, 600, 70, 10);
    rect(renderer, 590, 610, 30, 10);
    rect(renderer, 560, 600, 10, 30);
    rect(renderer, 560, 640, 10, 30);

    rect(renderer, 610, 600, 70, 10);

    rect(renderer, 645, 600, 10, 20);
    rect(renderer, 640, 610, 10, 15);
    rect(renderer, 655, 610, 10, 15);
    rect(renderer, 630, 620, 50, 10);
    rect(renderer, 670, 620, 50, 10);
    rect(renderer, 630, 640, 10, 50);

    rect(renderer, 690, 600, 10, 10);
    rect(renderer, 730, 600, 10, 10);
    rect(renderer, 700, 610, 10, 10);
    rect(renderer, 720, 610, 10, 10);
    rect(renderer, 710, 620, 50, 10);

    rect(renderer, 750, 600, 70, 10);
    rect(renderer, 750, 600, 10, 40);
    rect(renderer, 750, 640, 10, 40);
    rect(renderer, 750, 660, 10, 40);

    rect(renderer, 810, 600, 70, 10);
    rect(renderer, 820, 640, 10, 10);
    rect(renderer, 830, 650, 10, 10);
    rect(renderer, 830, 660, 10, 10);
    rect(renderer, 820, 600, 10, 10);
    rect(renderer, 830, 610, 20, 10);
    rect(renderer, 820, 630, 10, 10);

    rect(renderer, 870, 600, 10, 50);
    rect(renderer, 870, 660, 10, 50);
    rect(renderer, 880, 600, 70, 10);
    rect(renderer, 900, 600, 70, 10);
    //keys 1
    rect(renderer, 200, 700, 5, 100);
    rect(renderer, 200, 800, 5, 100);
    rect(renderer, 200, 700, 100, 5);
    rect(renderer, 300, 700, 105, 5);
    rect(renderer, 225, 720, 60, 10);
    rect(renderer, 265, 720, 60, 10);
    rect(renderer, 235, 780, 10, 10);
    rect(renderer, 255, 780, 10, 10);
    rect(renderer, 245, 740, 50, 10);

    rect(renderer, 100, 800, 5, 100);
    rect(renderer, 100, 900, 5, 100);
    rect(renderer, 100, 800, 100, 5);
    rect(renderer, 200, 800, 105, 5);
    rect(renderer, 130, 820, 10, 20);
    rect(renderer, 140, 820, 10, 20);
    rect(renderer, 140, 810, 10, 40);
    rect(renderer, 110, 850, 10, 80);
    rect(renderer, 130, 820, 60, 10);
    rect(renderer, 170, 820, 60, 10);

    rect(renderer, 200, 800, 5, 100);
    rect(renderer, 200, 900, 5, 100);
    rect(renderer, 200, 800, 100, 5);
    rect(renderer, 300, 800, 105, 5);
    rect(renderer, 230, 810, 10, 40);
    rect(renderer, 270, 820, 10, 10);
    rect(renderer, 220, 820, 10, 10);
    rect(renderer, 220, 830, 10, 10);
    rect(renderer, 230, 840, 10, 40);
    rect(renderer, 270, 850, 20, 10);
    rect(renderer, 220, 860, 10, 10);
    rect(renderer, 230, 870, 10, 40);

    rect(renderer, 300, 800, 5, 100);
    rect(renderer, 300, 900, 5, 100);
    rect(renderer, 300, 800, 100, 5);
    rect(renderer, 400, 800, 105, 5);
    rect(renderer, 320, 810, 10, 50);
    rect(renderer, 320, 810, 80, 10);
    rect(renderer, 320, 880, 10, 50);
    rect(renderer, 370, 820, 70, 10);

    // keys 2
    rect(renderer, 700, 700, 5, 100);
    rect(renderer, 700, 800, 5, 100);
    rect(renderer, 700, 700, 100, 5);
    rect(renderer, 800, 700, 105, 5);
    rect(renderer, 745, 720, 60, 10);
    rect(renderer, 740, 720, 10, 10);
    rect(renderer, 750, 720, 10, 10);
    rect(renderer, 735, 730, 10, 10);
    rect(renderer, 755, 730, 10, 10);
    rect(renderer, 745, 710, 10, 10);

    rect(renderer, 600, 800, 5, 100);
    rect(renderer, 600, 900, 5, 100);
    rect(renderer, 600, 800, 100, 5);
    rect(renderer, 700, 800, 105, 5);
    rect(renderer, 620, 845, 10, 60);
    rect(renderer, 630, 835, 30, 10);
    rect(renderer, 640, 830, 40, 10);

    rect(renderer, 700, 800, 5, 100);
    rect(renderer, 700, 900, 5, 100);
    rect(renderer, 700, 800, 100, 5);
    rect(renderer, 800, 800, 105, 5);
    rect(renderer, 745, 810, 60, 10);
    rect(renderer, 735, 850, 10, 30);
    rect(renderer, 730, 840, 10, 40);

    rect(renderer, 800, 800, 5, 100);
    rect(renderer, 800, 900, 5, 100);
    rect(renderer, 800, 800, 100, 5);
    rect(renderer, 900, 800, 105, 5);
    rect(renderer, 830, 845, 10, 60);
    rect(renderer, 870, 840, 20, 10);
    rect(renderer, 860, 835, 30, 10);

}

void pole(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 165, 30, 0, 0);
    rect(renderer, 200, 200, 250, 50);
    rect(renderer, 200, 550, 250, 50);
    rect(renderer, 400, 200, 250, 50);
    rect(renderer, 400, 200, 250, 50);
    SDL_RenderPresent(renderer);
    SDL_RenderClear(renderer);
    int level1[11][20] = {
{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0},
{0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0},
{0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0},
{0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0},
{0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
}

int main(int argc, char* args[])
{
    SDL_Renderer* renderer;
    SDL_Window* window;
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_WIDTH, 0, &window, &renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 160, 54, 35, 0);
    menu(renderer);
    SDL_RenderPresent(renderer);
    SDL_RenderClear(renderer);
    char ch;
    int k = 0;
    int code;
    while (k != 1)
    {
        ch = _getch();
        code = static_cast<int>(ch);
        if (ch == 13)
            k = 1;
    }
    pole(renderer);
    SDL_Delay(30000);
    SDL_Quit();
    return 0;
}
