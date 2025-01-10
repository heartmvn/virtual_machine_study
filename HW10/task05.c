#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *input_f, *output_f;
    char str[1001]; // Массив для строки, учитываем нулевой символ завершения строки
    int length, i;

    
    input_f = fopen("input.txt", "r");// Открываем файл input.txt для чтения, если файл открылся с ошибкамии, то программа вернет 1
    if (input_f == NULL)
    {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    fgets(str, sizeof(str), input_f);// Читаем строку из файла
    fclose(input_f);

    
    length = strlen(str);// Находим длину строки

    
    if (str[length - 1] == '\n') // Проверяем, что строка не пуста (если есть символ новой строки в конце, убираем его)
    {
        str[length - 1] = '\0';
        length--;
    }

    
    
    for (i = 0; i < length; i++) // Заменяем все буквы 'a' на 'b' и наоборот
    {
        if (str[i] == 'a') 
        {
            str[i] = 'b';  // Заменяем строчную 'a' на 'b'
        } 
        
        else if (str[i] == 'b') 
        {
            str[i] = 'a';  // Заменяем строчную 'b' на 'a'
        } 
        
        else if (str[i] == 'A') 
        {
            str[i] = 'B';  // Заменяем заглавную 'A' на 'B'
        } 
        
        else if (str[i] == 'B') 
        {
            str[i] = 'A';  // Заменяем заглавную 'B' на 'A'
        }
    }

    
    output_f = fopen("output.txt", "w");// Открываем файл output.txt для записи, если файл открылся с ошибкамии, то программа вернет 1
    if (output_f == NULL) 
    {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    fprintf(output_f, "%s", str);// Записываем результат в файл
    
    fclose(output_f);// Закрываем файл output.txt

    return 0;
}

