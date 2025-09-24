/*
Name:Felistus Chepkurui 
Reg No:PA106/G/28718/25
Description:c program for loan
*/
#include<stdio.h>

int main(){
    int age,income;
    
    //user input 
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter your income\n");
    scanf("%d",&income);
    
    if(age>=21 && income>=21000){
        printf("Congratulations you qualify for a loan\n");
    }else{ 
        printf("Unfortunately,we are unable to offer you a loan at this time\n");
    }   
     
     
     return 0;
}     