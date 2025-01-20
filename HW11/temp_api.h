#ifndef TEMP_API_H
#define TEMP_API_H

#define DAYS_IN_MONTH 31


typedef struct // Структура для хранения данных о температуре
{
    int year;       // Год
    int month;      // Месяц
    int day;        // День
    int hour;       // Часы
    int minute;     // Минуты
    int temperature; // Температура
} TemperatureRecord;

// Прототипы функций
void monthly_stats(TemperatureRecord records[], int num_records, int month);
void yearly_stats(TemperatureRecord records[], int num_records);

#endif
