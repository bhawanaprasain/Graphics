#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, NULL);

    for (i = 0; i < 200; i++)
    {
        circle(150 + i, 405, 30);
        circle(50 + i, 405, 30);

        line(100 + i, 405, 125 + i, 360);
        line(50 + i, 405, 75 + i, 360);
        line(50 + i, 405, 100 + i, 405);
        line(150 + i, 405, 110 + i, 320);
        line(75 + i, 360, 75 + i, 350);
        line(65 + i, 350, 85 + i, 350);
        line(75 + i, 360, 125 + i, 360);
        line(100 + i, 320, 120 + i, 320);

        delay(10);
        cleardevice();
    }
    closegraph();
    return 0;
}
