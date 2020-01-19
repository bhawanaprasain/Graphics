#include <graphics.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int gd = 0, gm, x1, y1, x2, y2;
    double s, c, angle;
    initgraph(&gd, &gm, NULL);
    x1 = 210, y1 = 210, x2 = 350, y2 = 350;
    setbkcolor(BLACK);
    line(x1, y1, x2, y2);
    angle = 30;
    c = cos(angle * 3.14 / 180);
    s = sin(angle * 3.14 / 180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    line(x1, y1, x2, y2);
    delay(2000);
    closegraph();
    return 0;
}