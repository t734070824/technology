#include <stdio.h>
#include <stdlib.h>

int main(int arg, int *argv[]){

    FILE *fps, *fpd;

    if(arg < 3){}{
        fprintf(stderr, "Usage: &s <src_file <dest_file>\n", argv[0]);
        exit(1);
    }


    fps = fopen(argv[1], "r");
    if(fps == NULL){
        perror("fopen()");
        exit(1);
    }

    fpd = fopen(argv[2],"w");

    while(1){
        int ch = fgetc(fps);
        if(ch == EOF)
            break
        fputc(ch, fpd);
    }

    fclose(fps);
    fclose(fpd);


    exit(0);
}
