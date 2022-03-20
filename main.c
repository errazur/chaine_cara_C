#include <stdio.h>
#include <stdlib.h>



//1
int longueurChaine (const char str []){
    int i=0;
    char chaine=0;

    do {

        chaine = str[i];
        i++;
    }
    while (chaine !='\0');

    i--;

    return i;
}
//2 - a
char MajCharToMin(char c){
    return c +32;
}
//b
char MinCharToMaj (char c){
    if (c>96 && c<123){
        return c -32;
    }
    return c;
}
//c
char invCharMinMaj (char c){
    if (c>96 && c<123){
        return c -32;
    }
    if (c>64 && c<91){
        return c+32;
    }
}
//d
void majStringToMin (char str [], char newStr []){
    int i =0;
    while (str[i] != '\0'){
        newStr[i]=MajCharToMin(str[i]);
        i++;
    }
    newStr[i]='\0';
}
//²
void minStringToMaj (char str [], char newStr []){
    int i =0;
    while (str[i] != '\0'){
        newStr[i]=MinCharToMaj(str[i]);
        i++;
    }
    newStr[i]='\0';
}
//petit 3
void invStringMinMaj (char str [], char newStr []){

}





int main()
{

char chaine[] ="wesh";
char chaine2[]="";

majStringToMin(chaine,chaine2);

printf("%s",chaine2);




    return 0;
}
