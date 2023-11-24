#ifndef __SECONNECTER__
#define __SECONNECTER__

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <crypt.h>

    typedef struct SIGNIN
    {
        char user_name[256];
        char passwd[256];
    }SIGNIN;
    

    void write(SIGNIN user);

#endif