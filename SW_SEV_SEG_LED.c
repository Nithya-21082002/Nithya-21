#include<AT89S52.h>
#define SEV_SEG P0
#define SW P1
const char b_sw[9]={0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};
const char b[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main(){
   SW=0xFF;
   SEV_SEG=0xFF;
   while(1){
    char s,i;
    s=SW;
    for(i=0;i<8;i++){
         if(s==b_sw[i]){
             break;
         }
         else{
           
           }
      }
      if(i!=8){
       SEV_SEG=b[i];
       }
       else{
       SEV_SEG=0xFF;
          }
   }
}

