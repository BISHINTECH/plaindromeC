#include <stdio.h>
void palindrome(int);
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}
void palindrome(int n){
    int backup,rev=0,rem;
    
    backup=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    n=backup;
    if(n==rev){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}