#include "prog1.h"
#include <stdio.h>
#include <string.h>



int match_ends(int n, string words[]){
 int darab = 0;
 for(int i = 0; i<n;i++){
     string szo= words[i];
     if(strlen(szo)>= 2 && szo[0] == szo[strlen(szo)-1]){
         darab++;
     }
 }
 return darab;
}
int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    // match_ends() meghívása itt...

    printf("%d\n",match_ends(szavak1_meret,szavak1));

    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}