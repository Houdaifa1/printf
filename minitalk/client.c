# include "minitalk.h"

void pass_bits_toserver(int pid,int c)
{
    int i;

    i = 7;
    while (i >= 0)
    {
        if (((c >> i) & 1) == 0)
            kill(pid,SIGUSR1);
        else   
            kill(pid, SIGUSR2);
        usleep(50);
        i--;
    }
    usleep(50);
}

int main (int arc, char **arv)
{
    int i = 0;
    if (arc == 3)
    {
        while (arv[2][i] != '\0')
        {
           pass_bits_toserver(atoi(arv[1]),arv[2][i]);
           i++;
        }
    }
}