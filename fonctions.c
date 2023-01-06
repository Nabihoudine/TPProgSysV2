#include <sys/wait.h>
#include "fonctions.h"

void display_msg(void)
{
    write(1,welcome_msg,sizeof(welcome_msg)-1);

}

void display_prompt(void)
{
    write(1,prompt,sizeof(prompt)-1);


}

void commande(void)
{
    int nbCharRead;
    int status;
    char buf[MaxSize];
    nbCharRead=read(1,buf,MaxSize);
    buf[nbCharRead-1]='\0';
    pid_t ret=fork();
    fork();
    if(fork()==0)
    {
        execlp(buf,buf,NULL);
        sprintf(out_buf,Command_dont_exist,buf);
        write(1,out_buf,strlen(out_buf));
        exit(EXIT_FAILURE);

    }

        wait(&status);
        display_prompt();

        if(buf=="exit")
        {
            write(1,msg_exit,sizeof(exit));
            exit(EXIT_SUCCESS);


        }
    }
    //read(1,message,sizeof(message));
    //fork();
    //write(1,"Today is what happened to yesterday",sizeof("Today is what happened to yesterday")-1);


