#include <stdio.h>
#include <string.h>
char* str_n(char * str, int M, int N){
    char str1[1000], str2[1000]="";
    char *res = NULL;
    int l, i, n = strlen(str);
    int b=0;//первый символ слова, счетчик для каждого слова
    for (i = 0; i<n; i++){
        if (str[i]!=' ') {
            str1[b] = str[i];
            b++;
        }
        if ((str[i]==' ')||(i == n-1)){//доходим до конца слова (либо пробел, либо последний символ)
            str1[b]=' ';
            str1[b+1]='\0';
            l = strlen(str1);
            if ((l-1 >= N)||(l-1 <= M)) {
                strcat(str2, str1);
            }
            for (int j = 0; j < l+1; j++) {
                str1[j] = 0;
            }
            b = 0;
        }
    }
    res = str2;
    return res;
}
int main() {
    char str[1000];
    gets(str);//пока заменим функцию readline
    int M, N;
    scanf("%d%d", &M, &N);
    printf ("%s\n", str_n(str, M, N));

    return 0;
}
