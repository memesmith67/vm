#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define c(x,y) case x: y;break;
#define w(x,y) while(x){y;}
#define a g[x]
#define b g[y]
int main(){int x,y,z,t=9999,s=sizeof(int);int *g=malloc(s*t),*h;w('\n'!=(g[--t]=getchar()))t++;w(1,h=g+t;z=h[0];x=h[1];y=h[2];switch(z){c('q',exit(0))c('-',a-=b)c('<',a=a<b)c('r',b=g[a])c('w',g[b]=a)c('a',h=realloc(g,s*a);h==NULL?b=0:(g=h))c('i',z=a;w('\n'!=(*(g+z++)=getchar())))c('o',z=a;w(*(g+z),putchar(*(g+z++))))c('x',t=a-3)}t+=3)}
