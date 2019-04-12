#include <stdio.h>

int main () {
    FILE* ptr = fopen("input2","r"); 
    FILE* ptw = fopen("output2","w"); 
    if (ptr==NULL) 
    { 
        printf("El archivo no existe."); 
        return 0; 
    }
    int t,s,n,c,d;
    float valor,minimo;
    fscanf(ptr,"%d",&t);
    while(t != 0)
    {
        fscanf(ptr,"%d",&s);
        fscanf(ptr,"%d",&n);
        d = 1;
        fscanf(ptr,"%f",&valor);
        minimo = valor;
        for(c=1;c<n;c++)
        {
            fscanf(ptr,"%f ",&valor);
            printf("%f",valor);
            if(minimo > valor)
            {
                d = c+1;
                minimo = valor;
            }
        }
        fprintf(ptw,"Debe comprar en el día %d:\n",d);
        t--;
    }
    fclose(ptr);
    fclose(ptw);
    return(0);
}
