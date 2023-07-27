#include <stdio.h>
char* palindrome(int);
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    char* result=palindrome(n);
    printf("%s",result);
    
    return 0;
}
char* palindrome(int n){
    int backup=n,rev=0,rem;
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