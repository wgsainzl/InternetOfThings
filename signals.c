#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void * no_me_matas(int signum){
    printf("Recibi la señal %d\n", signum);
    printf("No me puedes matar");
}

void terminar_ciclo(int signum){

}

int main(){
    signal(2, no_me_matas);
    while(1){
        printf("trabajando \n");
        sleep(2);
    }
    printf("Terminando");
    return 0;
}