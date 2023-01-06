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


    //read(1,message,sizeof(message));
    //write(1,"Today is what happened to yesterday",sizeof("Today is what happened to yesterday")-1);
    execvp("ls","-l");
}
