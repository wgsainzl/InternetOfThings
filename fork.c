#include <stdio.h>
#include <unistd.h>


int main(){
    int a=5;

    int pid  = fork();

    if(pid==0){
        printf("Soy el proceso hijo a = %d\n",a);
        execl("./hola", "pedro", "juan", "yo", (char *) NULL);
        printf("Esto no se imprime");
        return 0;
    }

    printf("Soy el proceso padre, a = %d\n",a);
    return 0;
}