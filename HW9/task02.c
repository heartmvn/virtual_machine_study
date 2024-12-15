#include <stdio.h>

void Input(int a[], int n) // Функция для ввода массива
{
    //printf("Введите %d чисел через пробел:\n", size);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
}

void sort_even_odd(int n, int a[]) 
{
    int even[n], odd[n];  // Два массива для чётных и нечётных чисел
    int even_count = 0, odd_count = 0;

    
    for (int i = 0; i < n; i++)// Разделяем элементы на чётные и нечётные
    {
        if (a[i] % 2 == 0) {
            even[even_count++] = a[i];  // Чётные элементы
        } else {
            odd[odd_count++] = a[i];    // Нечётные элементы
        }
    }

    
    for (int i = 0; i < even_count; i++)// Вставляем чётные элементы в начало исходного массива 
    {
        a[i] = even[i];
    }

    
    for (int i = 0; i < odd_count; i++)// Вставляем нечётные элементы в конец исходного массива 
    {
        a[even_count + i] = odd[i];
    }
}

void print_array(int n, int a[]) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int n;

    scanf("%d", &n);// Ввод размера массива

    if (n <= 0)// Проверка на корректность размера 
    {
        //printf("Размер массива должен быть положительным числом.\n");
        return 1;  // Выход из программы с ошибкой
    }

    int a[n];  // Массив, размер которого зависит от введенного значения
    
    Input(a, n);
    sort_even_odd(n, a);// Сортировка массива
    //printf_s("Массив после сортировки: ");
    print_array(n, a);

    return 0;
}
