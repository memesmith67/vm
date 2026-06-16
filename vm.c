//license:john morris beck 2026 gpl2 @ gnu.org
//gcc -O3 -march=native -flto vm.c
//todo: replace malloc and free for mmap an munmap, and make the files be in /dev/shm or fallback to /dev/tmp if shm is unavailable for shared memory between vm processes.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){int x,y,z,t=9999,s=sizeof(int);int *g=malloc(s*t),*h;while('\n'!=(g[--t]=getchar()));t++;while(1){h=g+t;z=h[0];x=h[1];y=h[2];switch(z){case 'q':exit(0);break;case '-':g[x]-=g[y];break;case '<':g[x]=g[x]<g[y];break;case 'r':g[y]=g[g[x]];break;case 'w':g[g[y]]=g[x];break;case 'a':h=realloc(g,s*g[x]);h==NULL?g[y]=0:(g=h);break;case 'i':z=g[x];while('\n'!=(*(g+z++)=getchar()));break;case 'o':z=g[x];while(*(g+z))putchar(*(g+z++));fflush(stdout);break;case 'x':t=g[x]-3;break;}t+=3;}}
