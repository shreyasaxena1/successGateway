//Reverse String word by word

#include<iostream>
#include<string.h>
using namespace std;

void StringReverse(char *);

int main(){
    char sent[]="This is shreya saxena the best";
    StringReverse(sent);
    cout<<sent;
    return 0;
}

void reverseChar(char *s,char *e){
    char t;
    while(s<e){
    t=*s;
    *s=*e;
    *e=t;
    e--,s++;
    }
}
void StringReverse(char *s){
  char *wb=s , *temp=s;
  while(*wb==' '){
      wb++;
  }
  while (*temp!='\0')
  {
      temp++;
     if(*temp=='\0'){
         reverseChar(wb,temp-1);
     }
     else if(*temp==' '){
         reverseChar(wb,temp-1);
         wb=temp+1;
     }
  }
  reverseChar(s,temp-1);

}