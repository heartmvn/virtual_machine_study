#include <stdio.h>
#include "temp_api.h"

int main() {

   TemperatureRecord records[] = {
        {2025, 1, 1, 0, 0, -5},
        {2025, 1, 2, 12, 30, 0},
        {2025, 1, 3, 6, 45, -10},
        {2025, 2, 15, 14, 0, 5},
        {2025, 2, 16, 16, 0, 10},
        {2025, 12, 25, 10, 0, -15},
        {2025, 12, 31, 20, 30, 0}
    };

    int num_records = sizeof(records) / sizeof(records[0]);
    
    // Ввод статистики по месяцам
    for (int month = 1; month <= 12; month++) {
        monthly_stats(records, num_records, month);
    }

    // Вывод статистики за год
    yearly_stats(records, num_records);

    return 0;
}
