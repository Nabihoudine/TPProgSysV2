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

void commande(void) {
    struct timespec start, end;
    int nbCharRead,nbCharRead2,nbCharRead3;
    long t;
    int status;
    char buf[MaxSize]={0};
    const char *arg[MaxSize]={0};
    char *token;
    clock_gettime(CLOCK_REALTIME,&start);
    //nbCharRead = read(1, buf, MaxSize);
    nbCharRead2 = read(1, arg, MaxSize);
    //buf[nbCharRead - 1] = '\0';
    arg[nbCharRead2 -1] = '\0';
    pid_t ret = fork();
    fork();
    if (fork() == 0) {
        token = strtok(buf, arg);
        while (token != NULL)
        {
            //execlp(buf, buf, NULL);
            token =strtok(NULL,arg);
            execvp(arg[0], arg);
            exit(EXIT_FAILURE);
            if (WIFEXITED(status)) {
                clock_gettime(CLOCK_REALTIME, &end);
                t = (end.tv_sec - start.tv_sec);
                sprintf(buf, prompt_exit, WEXITSTATUS(status), t);
                write(1, buf, strlen(buf));
            } else {
                clock_gettime(CLOCK_REALTIME, &end);
                t = (end.tv_sec - start.tv_sec);
                sprintf(buf, prompt_sign, WSTOPSIG(status), t);
                write(1, buf, strlen(buf));
            }
            // sprintf(out_buf, Command_dont_exist, buf);
            //write(1, out_buf, strlen(out_buf));
            //exit(EXIT_FAILURE);
        }
    }
    wait(&status);
    display_prompt();





    if (strcmp(buf,"exit")==0)
        {
            write(1,msg_exit,strlen(msg_exit));
            exit(EXIT_SUCCESS);


        }

}

    //read(1,message,sizeof(message));
    //fork();
    //write(1,"Today is what happened to yesterday",sizeof("Today is what happened to yesterday")-1);



