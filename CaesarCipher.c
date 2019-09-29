#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char text[50];
int len;
int key;
int i;
int num;
int num2;
char lt;

int main(void){

    printf("CAESAR CIPHER\n");
    printf("Encrypt: ");
    scanf("%s",&text);
    printf("Key: ");
    scanf("%i",&key);
    len = strlen(text);

    void calculate(int l,char text[],int k);
    calculate(len,text,key);

    return (EXIT_SUCCESS);
}

void calculate(int l,char text[],int k){
    if (k < 1) printf("KEY ERROR: [<1]\n");
    if (k > 26) printf("KEY ERROR: [26>]\n");
    int nlen(char t);
    char ltext(int n);
    for(i = 0; i < l; i++){
        num = nlen(text[i]);
        num2 = (num + key) % 26;
        lt = ltext(num2);
        printf("%c",lt);
    }
}

int nlen(char t){
    if (t == 'a' || t == 'A'){
        return 1;
    }else if (t == 'b' || t == 'B'){
        return 2;
    }else if (t == 'c' || t == 'C'){
        return 3;
    }else if (t == 'd' || t == 'D'){
        return 4;
    }else if (t == 'e' || t == 'E'){
        return 5;
    }else if (t == 'f' || t == 'F'){
        return 6;
    }else if (t == 'g' || t == 'G'){
        return 7;
    }else if (t == 'h' || t == 'H'){
        return 8;
    }else if (t == 'i' || t == 'I'){
        return 9;
    }else if (t == 'j' || t == 'J'){
        return 10;
    }else if (t == 'k' || t == 'K'){
        return 11;
    }else if (t == 'l' || t == 'L'){
        return 12;
    }else if (t == 'm' || t == 'M'){
        return 13;
    }else if (t == 'n' || t == 'N'){
        return 14;
    }else if (t == 'o' || t == 'O'){
        return 15;
    }else if (t == 'p' || t == 'P'){
        return 16;
    }else if (t == 'q' || t == 'Q'){
        return 17;
    }else if (t == 'r' || t == 'R'){
        return 18;
    }else if (t == 's' || t == 'S'){
        return 19;
    }else if (t == 't' || t == 'T'){
        return 20;
    }else if (t == 'u' || t == 'U'){
        return 21;
    }else if (t == 'v' || t == 'V'){
        return 22;
    }else if (t == 'w' || t == 'W'){
        return 23;
    }else if (t == 'x' || t == 'X'){
        return 24;
    }else if (t == 'y' || t == 'Y'){
        return 25;
    }else if (t == 'z' || t == 'Z'){
        return 26;
    }
}
char ltext(int n){
    switch (n){
    case 1:
        return 'a';
        break;
    case 2:
        return 'b';
        break;
    case 3:
        return 'c';
        break;
    case 4:
        return 'd';
        break;
    case 5:
        return 'e';
        break;
    case 6:
        return 'f';
        break;
    case 7:
        return 'g';
        break;
    case 8:
        return 'h';
        break;
    case 9:
        return 'i';
        break;
    case 10:
        return 'j';
        break;
    case 11:
        return 'k';
        break;
    case 12:
        return 'l';
        break;
    case 13:
        return 'm';
        break;
    case 14:
        return 'n';
        break;
    case 15:
        return 'o';
        break;
    case 16:
        return 'p';
        break;
    case 17:
        return 'q';
        break;
    case 18:
        return 'r';
        break;
    case 19:
        return 's';
        break;
    case 20:
        return 't';
        break;
    case 21:
        return 'u';
        break;
    case 22:
        return 'v';
        break;
    case 23:
        return 'w';
        break;
    case 24:
        return 'x';
        break;
    case 25:
        return 'y';
        break;
    case 26:
        return 'z';
        break;
    }
}
