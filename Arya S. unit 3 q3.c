/*Q3)John and Peter are playing word game. The game will begin by one of them telling a word
beginning with the letter ‘a’. The other person has to tell a word beginning with the letter
that at the end of the word told by the other. The game continues in this fashion till they are
tired of playing. Write a C program to check whether John and Peter played the game
correctly*/

#include <stdio.h>
#include <string.h>
int main(){
char c='a',s[100];
int i=1;
 while(i){
printf("%s's turn: ",(i%2)? "John" : "Peter");
scanf("%s",s);
 if(s[0]==c){
c=s[strlen(s)-1];
 i++;
}
else{
    printf("Wrong word, %s lost",(i%2)? "John" : "Peter");
 i=0;
    
}
 }
return 0;
}
