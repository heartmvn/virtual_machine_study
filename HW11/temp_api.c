#include <stdio.h>
#include "temp_api.h"


void monthly_stats(TemperatureRecord records[], int num_records, int month) // Функция для вывода статистики за месяц
{
    int sum_temp = 0;
    int min_temp = 100; // Температура не может быть выше 99
    int max_temp = -100; // Температура не может быть ниже -99
    int count = 0;

    for (int i = 0; i < num_records; i++) 
    {
        if (records[i].month == month) 
        {
            sum_temp += records[i].temperature;
            if (records[i].temperature < min_temp) 
            {
                min_temp = records[i].temperature;
            }
            
            if (records[i].temperature > max_temp) 
            {
                max_temp = records[i].temperature;
            }
            
            count++;
        }
    }

    if (count > 0) 
    {
        printf("Статистика для месяца %d:\n", month);
        printf("Средняя температура: %.2f\n", (double)sum_temp / count);
        printf("Минимальная температура: %d\n", min_temp);
        printf("Максимальная температура: %d\n", max_temp);
    } 
    
    else 
    {
        printf("Нет данных для месяца %d.\n", month);
    }
}


void yearly_stats(TemperatureRecord records[], int num_records) // Функция для вывода статистики за год
{
    int sum_temp = 0;
    int min_temp = 100; // Температура не может быть выше 99
    int max_temp = -100; // Температура не может быть ниже -99
    int count = 0;

    for (int i = 0; i < num_records; i++) 
    {
        sum_temp += records[i].temperature;
        if (records[i].temperature < min_temp) 
        {
            min_temp = records[i].temperature;
        }

        if (records[i].temperature > max_temp) 
        {
            max_temp = records[i].temperature;
        }
       
        count++;
    }

    if (count > 0) 
    {
        printf("Статистика за год:\n");
        printf("Среднегодовая температура: %.2f\n", (double)sum_temp / count);
        printf("Минимальная температура: %d\n", min_temp);
        printf("Максимальная температура: %d\n", max_temp);
    } 
    
    else 
    {
        printf("Нет данных для года.\n");
    }
}