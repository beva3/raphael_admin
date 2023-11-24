#include "seconnecter.h"

void write(SIGNIN user,char* c_spasswd){
    FILE* f = fopen("./info_user/shadow","a+");
    if(f != NULL){
        if(verifie(user,c_spasswd) == 1){
            fprintf(f,"%s,%s\n",user.user_name,crypt(user.passwd,"beva"));
            fclose(f);
        }
        else{
            printf("Verifier votre mot de passe\n");
            exit(1);
        }
    }
    else    {printf("I don't Write!!!\n");}
}

int verifie(SIGNIN user,char* c_spasswd){
    return strcmp(user.passwd,c_spasswd) == 0 ?  1 : 0;
}