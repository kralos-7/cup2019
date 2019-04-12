#include <stdio.h>

/*
face or cross game
face  = 0
cross = 1
*/

int main () {
    FILE* ptr = fopen("input1","r"); 
    FILE* ptw = fopen("output1","w"); 
    if (ptr==NULL) 
    { 
        printf("El archivo no existe."); 
        return 0; 
    }
    int t,i,w,c,a,b;
    t=a=b=0;
    fscanf(ptr,"%d",&i);
    while(i != 0)
    {
        for(c=0;c<i;c++)
        {
            fscanf(ptr,"%d",&w);
            if(w==0)
                a++;
            if(w==1)
                b++;
        }
        fprintf(ptw,"Tiempo %d:\n",t);
        fprintf(ptw,"Gana A %d veces\n",a);
        fprintf(ptw,"Gana B %d veces\n",b);
        a=b=0;
        t++;
        fscanf(ptr,"%d\n",&i);
    }
    fclose(ptr);
    fclose(ptw);
    return(0);
}
