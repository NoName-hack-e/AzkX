#include "include/io.h"
#include <stdlib.h>
#include <stdio.h>

char* file_chr(const char* file_P){
    
    char* buffer=0;
    
    long leg;
    
    file* f= fopen(file_P, "rb");
    
    if (f){
        
        fseek(f,0,sek_end);
        
        leg =ftell(f);
        
        fseek(f,0,sek_set);

    buffer=calloc(leg,leg);

    if (buffer)
        fread(buffer,1,leg,f);
fclose(f);
return bufferl
    
    }
    printf("error reding file",file_P);
    exit(2);

}