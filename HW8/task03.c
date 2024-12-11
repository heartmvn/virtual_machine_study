#include <stdio.h>

#define SIZE 10 // Размер массива


void Input(int arr[], int size) // Функция для ввода массива
{
    //printf("Введите %d чисел через пробел:\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
}


void Min(int arr[], int size, int *min, int *posmin)// Функция для нахождения минимального значения и его индекса
{
    *min = arr[0];
    *posmin = 1; // Индексация с 1
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < *min) 
        {
            *min = arr[i];
            *posmin = i + 1; // Индексация с 1
        }
    }
}


void Max(int arr[], int size, int *max, int *posmax) // Функция для нахождения максимального значения и его индекса
{
    *max = arr[0];
    *posmax = 1; // Индексация с 1
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > *max) 
        {
            *max = arr[i];
            *posmax = i + 1; // Индексация с 1
        }
    }
}

int main() 
{
    int arr[SIZE];
    int min, max, posmin, posmax;

    Input(arr, SIZE);// Ввод чисел в массив

    // Нахождение минимального и максимального элементов
    Min(arr, SIZE, &min, &posmin);
    Max(arr, SIZE, &max, &posmax);

    // Вывод минимального и максимального элемента и их индексов
    printf("%d %d ", posmax, max);
    printf("%d %d", posmin, min);
    

    return 0;
}
