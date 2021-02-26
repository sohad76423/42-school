#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int main(){
//ex00
    /*char src[]={'H','A','W','A','I','I'};
    char dest[10];
    char *ptr = src;
    char *point = dest;
    int x = 0;
    ft_strcpy(point, ptr);
    while(point[x])
    {
        printf("%c", point[x]);
        x++;
    }
    printf("\n");*/
    
    //ex01
    /*char src[]="HAWAII";
    char dest[500];
    int x = 0;
    while(src[x])
        x++;
    ft_strncpy(dest, src,x);
    printf("%s",dest);
    printf("\n");*/

    //ex02
    /*char src[]="";
    char *ptr = src;
    int i = ft_str_is_alpha(ptr);
    printf("%d",i);*/

    //ex03
    /*char src[]="15246819h";
    char *ptr = src;
    int i = ft_str_is_numeric(ptr);
    printf("%d",i);*/

    //ex04
    /*char src[]="1adhsdhs";
    char *ptr = src;
    int i = ft_str_is_lowercase(ptr);
    printf("%d",i);*/
    
    //ex05
    /*char src[]="AJYVHB";
    char *ptr = src;
    int i = ft_str_is_uppercase(ptr);
    printf("%d",i);*/
    
    //ex06
    /*char src[]=" AJYVHB";
    char *ptr = src;
    int i = ft_str_is_printable(ptr);
    printf("%d",i);
    return 0;*/

    //ex07
    /*char src[]="ardhtsr";
    char *ptr = src;
    ft_strupcase(ptr);
    printf("%s",ptr);
    return 0;*/

    //ex08
    /*char src[]="AFFWGx";
    char *ptr = src;
    ft_strlowcase(ptr);
    printf("%s",ptr);
    return 0;*/

    //ex09
    char src[]="AFFWGx-ethwvge 98tgsgst";
    char *ptr = src;
    ft_strcapitalize(ptr);
    printf("%s",ptr);
    printf("\n");
    return 0;

    //ex10
    /*char src[] = {"Nem Tudom"};
    char dest[] = {"\0"};
    char *ptr = src;
    char * point = dest;
    unsigned int x = 0;
    while(ptr[x])
        x++;
    ft_strlcpy(point, ptr, x);
    printf("%s",point);*/
}
