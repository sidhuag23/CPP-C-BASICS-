#include<stdint.h>
#include<stdio.h>

typedef uint8_t BYTE;

int main(int argc , char *argv[]){

     //check cmd argument usage
     if(argc!=2){
       printf("sorry  please enter the right arguments");
       return 1;
     }

     //open the file
     FILE *testjpeg=fopen(argv[1],"r");
     if(!testjpeg){
       return 1;
     }

     //declare first 3 bytes
     BYTE testbyte[3];
     //read first 3 bytes from the file
     fread(testbyte,sizeof(BYTE),3,testjpeg);

    //check first three bytes
  if(testbyte[0]==0xff && testbyte[1]==0xd8 && testbyte[2]==0xff ){
    printf("jpeg file");
  }
  else{
    printf("not a jpeg file sorry");
  }


  return 0;
}
