#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, NULL);
    int dx, dy, p, x, y, x1, y1, x0, y0;
    x0 = 100;
    y0 = 100;
    x1 = 200;
    y1 = 200;
    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;
    p = 2 * dy - dx;

    while (x < x1)
    {
        if (p >= 0)
        {
            putpixel(x, y, 5);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
        else
        {
            putpixel(x, y, 5);
            p = p + 2 * dy;
        }
        x = x + 1;
    }
    delay(3000);
    return 0;
}
