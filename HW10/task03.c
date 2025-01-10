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

    
    output_f = fopen("output.txt", "w");// Открываем файл output.txt для записи, если файл открылся с ошибкамии, то программа вернет 1
    if (output_f == NULL) 
    {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    else 
    {
        char lastChar = str[length - 1]; // Запоминаем последний символ строки

        
        for (i = 0; i < length - 1; i++) 
        {
            if (str[i] == lastChar) 
            {
                fprintf(output_f, "%d ", i); // Номера символов с 1
            }
        }
    }

    
    fclose(output_f);// Закрываем файл output.txt

    return 0;
}

