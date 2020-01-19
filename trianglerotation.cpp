#include <graphics.h>
#include <stdio.h>
#include <math.h>

void rotate(int x[], int y[], float s, float c)
{
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
    for (int i = 0; i < 3; i++)
    {
        x[i] = floor(x[i] * c + y[i] * s);
        y[i] = floor(-x[i] * s + y[i] * c);
    }
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
}
int main()
{
    int gd = 0, gm, x1, y1, x2, y2;
    float s, c, angle;
    initgraph(&gd, &gm, NULL);
    int x[] = {50, 100, 150};
    int y[] = {100,
               50,
               100};
    angle = 30;
    c = cos(angle * 3.14 / 180);
    s = sin(angle * 3.14 / 180);
    setbkcolor(BLACK);
    rotate(x, y, s, c);
    delay(2000);
    closegraph();
    return 0;
}