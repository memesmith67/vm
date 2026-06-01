//gcc -O3 -march=native -flto vm.c#license:john morris beck gpl2 @ gnu.org
//in case i die future design envolves incresasing register space for speedy caching, and replacing
//malloc and free for mmap an munmap, and make the files be in /dev/shm or fallback to /dev/tmp if shm is unavailable
//a special naming scheme with guarnteed unique filenames based on timestamp, process id, and a random string from /dev/urandom allows
//for optional shared memory between vm processes. shared memory is intended to be used immutably where possible else with locks
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define c(x,y) case x: y;break;int main(){int x,y,z,t=9999,*g=malloc((sizeof int)*9999),*h;while(g[t--]=getchar());while(1){z=t[0];x=t[1];y=t[2];switch(z){c('q',exit(0))c('-',g[x]-=g[y])c('<',g[x]=g[x]<g[y])c('r',g[y]=g[g[x]])c('w',g[g[y]]=g[x])c('a',h=realloc(g,(sizeof int)*g[x]);free(g);g=h)c('i',z=g[x];while('\n'!=(*(g+z++)=getchar())))c('o',z=g[x];while(*(g+z))putchar(*(g+z++)))}t+=3;}}
