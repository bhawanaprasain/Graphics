
#include <graphics.h>
#include <math.h>
int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, dx, dy, p, x7, y7, i, lx, ly, m;
    initgraph(&gd, &gm, NULL);
    x1 = 200;
    y1 = 150;
    x2 = 50;
    y2 = 40;
    dx = x2 - x1;
    dy = y2 - y1;
    if (x2 > x1)
    {

        lx = 1;
    }
    else
    {
        lx = -1;
    }
    if (y2 > y1)
    {

        ly = 1;
    }
    else
    {
        ly = -1;
    }
    putpixel(x1, y1, RED);
    if (abs(dx) > abs(dy))
    {

        p = (2 * abs(dy)) - abs(dx);

        for (int i = 0; i < abs(dx); i++)
        {

            if (p < 0)
            {

                x1 = x1 + lx;
                y1 = y1;

                p = p + (2 * abs(dy));
            }
            else
            {
                x1 = x1 + lx;
                y1 = y1 + ly;

                p = p + (2 * abs(dy)) - (2 * abs(dx));
            }
            putpixel(x1, y1, RED);
        }
        delay(300);
    }

    else
    {
        //this is the case when slope is greater than or equal to 1  i.e: m>=1
        //this putpixel is for very first pixel of the line
        p = (2 * abs(dx)) - abs(dy);

        for (int i = 0; i < abs(dy); i++)
        {

            if (p < 0)
            {
                x1 = x1;
                y1 = y1 + ly;

                p = p + (2 * abs(dx));
            }
            else
            {
                x1 = x1 + lx;
                y1 = y1 + ly;

                p = p + (2 * abs(dx)) - (2 * abs(dy));
            }
            putpixel(x1, y1, RED);
            // display pixel at coordinate (x, y)
            delay(100);
        }

        delay(300);
    }
    closegraph();
}
