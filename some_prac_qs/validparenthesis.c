#include<stdio.h>

char isValid(char* s) {
    int i = 0, top = -1;
    char stack[10000];
    while(s[i] != 0){
        if(s[i] == '(')     stack[++top] = ')';
        else if(s[i] == '[')     stack[++top] = ']';
        else if(s[i] == '{')     stack[++top] = '}';
        else{
            if(top != -1){
                if(stack[top--] != s[i])   return 'N';
            }
            return 
        }
        ++i;
    }
    if(top==-1) return 'Y';
    return 'N';
}

int main(){
    char s[10];
    printf("Enter: ");
    gets(s);
    printf("%c", isValid(s));
    return 0;
}
