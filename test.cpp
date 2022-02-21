
// C++ Implementation for drawing line
#include <graphics.h>
  
// driver code
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    circle(320,240,200);
    getch();
    closegraph();
    return 0;
}