#include <graphics.h>
#include <stdio.h>
int main()
{
    int xc, yc, x, y, r, d, gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);
    setbkcolor(BLACK);
    r = 100;
    x = 0;
    y = r;
    d = 1 - r;
    xc = 300;
    yc = 300;
    do
    {
        putpixel(xc + x, yc + y, 4);
        putpixel(xc + x, yc - y, 4);
        putpixel(xc - x, yc + y, 4);
        putpixel(xc - x, yc - y, 4);
        putpixel(xc + y, yc + x, 4);
        putpixel(xc + y, yc - x, 4);
        putpixel(xc - y, yc + x, 4);
        putpixel(xc - y, yc - x, 4);

        if (d < 0)
        {
            x = x + 1;
            y = y;
            d = d + 2 * x + 2;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            d = d + 2 * (x - y) + 1;
        }
    } while (x < y);
    getch();
    closegraph();
    return 0;
}