#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

#define welcome_msg "Bienvenue dans le shell ENSEA\nPour quitter,taper 'exit'\n"
#define prompt "enseash %"

void display_msg(void);
void display_prompt(void);
void commande(void);
