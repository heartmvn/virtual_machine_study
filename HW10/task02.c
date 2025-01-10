#include <stdio.h>
#include <string.h>
 
int main(void)
{
char input_f[] = "input.txt";
char output_f[] = "output.txt";
int i, n;
FILE *f_in, *f_out;  



    if((f_in = fopen(input_f, "r")) == NULL)//если файл открылся с ошибкамии, то программа вернет 1
    {
        perror("Error open file");
        return 1;
    }

    fscanf(f_in, "%d", &n);
    


    if((f_out = fopen(output_f, "w")) == NULL)//если файл открылся с ошибками, то программа вернет 1
    {
        perror("Error open file");
        return 1;
    }   


    char str[n + 2];
    char c = 'A';
    char c_num = '2';
    for (i = 0; i < n; ++i)
    {
        if (i%2==0)
            str[i] = c++;
        else 
        {
            str[i] = c_num;
            if (c_num == '8')
                c_num = '2';
            else
                c_num += 2;
        }
    }

    str[i] = '\0';
    fprintf(f_out, "%s", str);
    fclose(f_in);
    fclose(f_out);
    return 0;

}
