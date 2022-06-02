#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    (c=='a'||c=='e'||c=='i'||c=='o'||c=='u' ? printf("Vowel"):printf("Consonant")); 
}