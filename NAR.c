#include <stdio.h>
char* palindrome();
int main() {
    char* result=palindrome();
    printf("%s",result);
    
    return 0;
}
char* palindrome(){
    int n,backup,rev=0,rem;
    printf("enter a number:");
    scanf("%d",&n);
    backup=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    n=backup;
    if(n==rev){
        static char result[15]="palindrome";
        return result;
    }
    else{
        static char result[15]="not palindrome";
        return result;
    }
}