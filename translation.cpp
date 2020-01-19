#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    int P[4], T[2];
    initgraph(&gd, &gm, NULL);
    setbkcolor(BLACK);
    T[0] = 70;
    T[1] = 70;

    P[0] = 30;
    P[1] = 30;
    P[2] = 80;
    P[3] = 80;
    line(P[0], P[1], P[2], P[3]);

        P[0] = P[0] + T[0];
    P[1] = P[1] + T[1];
    P[2] = P[2] + T[0];
    P[3] = P[3] + T[1];
    line(P[0], P[1], P[2], P[3]);

    getch();
    closegraph();
    return 0;
}