
#include "stdio.h"
int RGB(int r,int g,int b)
{
return r << 16 | g << 8 | b;
      // return r+256*g+256*256*b;
}
void main()
{
      long int color = 16711680;
      int buf[3] = { ( (color & (0xff << 16)) >> 16),   ((color & (0xff << 8)) >> 8),  ( (color & (0xff)))};
      printf("  %d-%d-%d\n",buf[0],buf[1],buf[2]);
      int r,g,b,c;
      c = RGB(buf[0],buf[1],buf[2]);
      printf("0x%06x  , %d\n",c, c);
}