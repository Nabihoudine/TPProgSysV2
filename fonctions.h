#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>

#define welcome_msg "Bienvenue dans le shell ENSEA\nPour quitter,taper 'exit'\n"
#define Command_dont_exist "commande doesnt exist\n"
#define msg_exit "Bye Bye\n"
#define prompt "enseash %"
#define prompt_exit "[exit :%d |%llu ms]\n"
#define prompt_sign "[sign :%d |%llu ms]\n"

#define MaxSize 512
#define out_buf 128

void display_msg(void);
void display_prompt(void);
void commande(void);

