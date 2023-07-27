#include <stdio.h>
void palindrome();
int main() {
    palindrome();
    return 0;
}
void palindrome(){
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
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}