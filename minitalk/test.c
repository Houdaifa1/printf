# include "minitalk.h"

void sighandler(int);

// int main () {
   
// signal(SIGINT, sighandler);
//    while(1) {
        
//       printf("Going to sleep for a second...\n");
//       sleep(5); 
//    }
//    return(0);
// }

// void sighandler(int signum) {
//    printf("Caught signal %d, coming out...\n", signum);
//    exit(1);
// }   


int main ()
{

    int c = 32;

    write (1, &c, 1);
}