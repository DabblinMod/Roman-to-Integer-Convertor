#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int romanToInt(char * s){
    int size=strlen(s);
    printf("Size: %d", size);
    printf("Str: %s", s);
    printf("\n");
    int num=0; //count the number with each new addition
    if(size==1){
            if(s[0]=='I'){
                num+=1;
            }
            else if(s[0]=='V'){
                    num+=5;
                }
            else if(s[0]=='X'){
                    num+=10;
                }
            else if(s[0]=='L'){
                num+=50;
            }
            else if(s[0]=='C'){
                num+=100;
            }
            else if(s[0]=='D'){
                num+=500;
            }
            else if(s[0]=='M'){
                num+=1000;
            }
    }
    for(int i=0; i < size-1; i++){
        printf("Index: %d, Char: %c\n", i, s[i]);
        if(i < size-1){
            if(s[i]=='I' && s[i+1]=='V'){
                num+=4;
                i+=1;
            }
            else if(s[i]=='I' && s[i+1]=='X'){
                num+=9;
                i+=1;
            }
            else if(s[i]=='X' && s[i+1]=='L'){
                num+=40;
                i+=1;
            }
            else if(s[i]=='X' && s[i+1]=='C'){
                num+=90;
                i+=1;
            }
            else if(s[i]=='C' && s[i+1]=='D'){
                num+=400;
                i+=1;
            }
            else if(s[i]=='C' && s[i+1]=='M'){
                num+=900;
                i+=1;
            }
            else if(s[i]=='I'){
                num+=1;
            }
            else if(s[i]=='V'){
                num+=5;
            }
            else if(s[i]=='X'){
                num+=10;
            }
            else if(s[i]=='L'){
                num+=50;
            }
            else if(s[i]=='C'){
                num+=100;
            }
            else if(s[i]=='D'){
                num+=500;
            }
            else if(s[i]=='M'){
                num+=1000;
            }
        }
        if(i==size-2){
            if(s[size-1]=='I'){
                num+=1;
            }
            else if(s[size-1]=='V'){
                    num+=5;
                }
            else if(s[size-1]=='X'){
                    num+=10;
                }
            else if(s[size-1]=='L'){
                num+=50;
            }
            else if(s[size-1]=='C'){
                num+=100;
            }
            else if(s[size-1]=='D'){
                num+=500;
            }
            else if(s[size-1]=='M'){
                num+=1000;
            }
        }
    }
    printf("Total is: %d", num);
    return num;
}