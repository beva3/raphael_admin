#include "seconnecter.h"

void write(SIGNIN user){
    FILE* f = fopen("./info_user/shadow","a+");
    if(f != NULL){fprintf(f,"%s,%s\n",user.user_name,crypt(user.passwd,"beva"));}
    else    {printf("I don't Write!!!\n");}
    fclose(f);
}