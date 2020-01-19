#include <stdio.h>
#include <graphics.h>

void scale(int x[], int y[], int sx, int sy)
{
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
    for (int i = 0; i < 3; i++)
    {
        x[i] = x[i] * sx;
        y[i] = y[i] * sy;
    }
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
}
int main()
{
    int x[] = {50, 100, 150};
    int y[] = {100,
               50,
               100};
    int sx = 3, sy = 3;
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, NULL);

    scale(x, y, sx, sy);
    getch();

    return 0;
}
