#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

#define welcome_msg "Bienvenue dans le shell ENSEA\nPour quitter,taper 'exit'\n"
#define Command_dont_exist "commade doesnt exist\n"
#define msg_exit "Bye Bye\n"
#define prompt "enseash %"
#define cmd "ls"
#define MaxSize 512
#define out_buf 128

void display_msg(void);
void display_prompt(void);
void commande(void);
