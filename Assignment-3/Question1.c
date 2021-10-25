#include<stdio.h>
#include<string.h>
#define p 31

long long int getHash(char *s) {
    long long int hash = 0;
    long long int pow = 1;
    for (int c=0;c<strlen(s);c++) {
        hash = (hash + (s[c] - 'a' + 1) * pow) % 100000009;
        pow = (pow * p) % 100000009;
    }

    return hash;
}

int main()
{
    char s[1000];
    printf("Enter the String: ");
    scanf("%[^\n]s",s);
    printf("Hash value: %lld",getHash(s));

    return 0;
}
