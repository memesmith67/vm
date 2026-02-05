//gcc -O3 -march=native -flto vm.c#license:john morris beck gpl2 @ gnu.org
//in case i die future design envolves incresasing register space for speedy caching, and replacing
//malloc and free for mmap an munmap, and make the files be in /dev/shm or fallback to /dev/tmp if shm is unavailable
//a special naming scheme with guarnteed unique filenames based on timestamp, process id, and a random string from /dev/urandom allows
//for optional shared memory between vm processes. shared memory is intended to be used immutably where possible else with locks
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define c(x,y) case x: y;break;
int main(){int x=0,y,z,i[16],f[999],*t=f;void* p[16];*i=1;*p=&t;while(t[x++]=getchar());while(1){x=t[1];y=t[2];z=*t;switch(z){c(0,exit(0))c(1,i[x]-=i[y])c(2,i[x]=i[x]<i[y])c(3,p[y]=p[x])c(4,i[y]=i[x])c(5,p[y]=*(void**)p[x])c(6,*(void**)p[y]=p[x])c(7,p[y]=(void*)((char*)(p[y]+(int)i[x])))c(8,p[y]=malloc(i[x]);i[x]=(p[y]==NULL))c(9,free(p[y]))c(10,fread(p[y],1,i[y],stdin))c(11,fwrite(p[y],1,i[y],stdout);fflush(stdout))}t+=3;}}
