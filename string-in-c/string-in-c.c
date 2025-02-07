#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    char str1[100], str2[100];
    int i, *ptr;
    float j;
    long long k;
    printf("I LoVe COMSCI\n");
    puts("not True");
    fgets(str1, 100, stdin);
    scanf("%s", str2);
    i = atoi(str1);
    j = atof(str2);
    k = atol(str1);
    printf("int => %d\nfloat => %f\nlong int => %ld\n",i, j, k);
    ptr = (int *)malloc(2 * sizeof(int));
    free(ptr);
    char txt1[27] = "IlikemeBetter";
    char txt2[] = "ParisintheRain";
    char txt3[] = "Apple,Pen";
    char txt4[] = "Rain";
    char txt5[] = "paRis";
    printf("text1 lenght: %d\n", strlen(txt1));
    printf("text2 lenght: %d\n", strnlen(txt2, 15));
    printf("strcat => %s\n",strcat(txt1, txt2));
    printf("strcpy => %s\n",strcpy(txt1, txt2));
    printf("strncpy => %s\n",strncpy(txt1, txt2, 5));
    char *check;
    check = strstr(txt1, txt4);
    if (check){
        printf("strstr => Found: %s\n", check);
    } else {
        printf("Not found.\n");
    }
    printf("strpbrk => %s\n",strpbrk(txt1, txt2));
    printf("strspn => %d\n",strspn(txt1, txt2));
    printf("strcspn => %d\n",strcspn(txt1, txt2));
    char *token = strtok(txt3, ",");
    while (token != NULL){
        printf("strtok => %s\n", token);
        token = strtok(NULL, ",");
    }
    printf("strcmp => %d\n", strcmp(txt2, txt4));
    printf("strncmp => %d\n", strncmp(txt2, txt4, 5));
    printf("strcasecmp => %d\n", strcasecmp(txt2, txt5));
    printf("strncasecmp => %d\n", strncasecmp(txt2, txt5, 5));
    return 0;
}