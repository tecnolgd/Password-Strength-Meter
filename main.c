//PASSWORD STRENGTH METER : A basic CLI based meter to measure the password strength and display rank of the password in terms of strength(crack-free)

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    char passWord[30];
    printf("\n\tPASSWORD STRENGTH METER\n");
    printf("\t-----------------------\n");
    printf("Enter a password :");
    scanf("%s",passWord);
    int length=strlen(passWord); //length of entered password
    int i=0,j=1,lwrCase=0,uprCase=0,splCase=0,digit=0,space=0,repeat=0,len=0; //initialisation
    if((length>=8)&&(length<=12))
    len++;
    if(length>12)
    len++;
    while(i<length){
        for(i=0;i<length;i++){       //logic for password strength testing
            if(isupper(passWord[i])) 
                uprCase++;
            else if(islower(passWord[i]))
                lwrCase++;
            else if((!isalpha(passWord[i]))&&(!isdigit(passWord[i])))
                splCase++;
            else if(isdigit(passWord[i]))
                digit++;
            else if(passWord[i]!=' ')
                space++;
        }
        int temp=length;
        for(i=0;i<length;i++){
            while(j<temp)
                if(passWord[i]!=passWord[i+j]){
                repeat+=2;
                temp--;
            }
        }

        }
        printf("Result :");
        int score=lwrCase+uprCase+splCase+digit+space+repeat+len;
        if((score>=1)&&(score<=10))
            printf("Weak\n");
        else if((score>=11)&&(score<=20))
            printf("Mediocre\n");
        else if((score>=21)&&(score<=30))
            printf("Strong\n");
        else if((score>=31)&&(score<=35))
            printf("Very Strong\n");
        else if(score>35)
            printf("Immaculate\n");

        
        }





        
    


