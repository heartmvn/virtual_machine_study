#include <stdio.h>
 
const int line_width = 256;//задаем максимальную длину строки
 
int main(void)
{
char * input_f = "input.txt";
char * output_f = "output.txt";
char line[line_width];
char c;
FILE *f;  


    if((f = fopen(input_f, "r")) == NULL)//если файл открылся с ошибкамии, то программа вернет 1
    {
        perror("Error open file");
        return 1;
    }


    int count = 0;//выше был обьявлен массив line, данный блок считывает поступающие на вход символы, записывает их в массив. переменная count ведет подсчет 
    while(((c = getc(f)) != EOF) && (c != '\n'))
        line[count++] = c;
    line[count] = '\0'; 
    
    fclose(f); 


    if((f = fopen(output_f, "w")) == NULL)//если файл открылся с ошибками, то программа вернет 1
    {
        perror("Error open file");
        return 1;
    }   


    for (int i = 0; i < 3; i++)//цикл для написания строки 3 раза
    {
        if (i)
            fprintf(f, ", ");      
        fprintf(f, "%s", line);
    }  
    fprintf(f, " %d", count);//печать кол-во символов
    fclose(f);// закрыть файл
    return 0;

}

