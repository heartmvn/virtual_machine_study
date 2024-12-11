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


void Min(int arr[], int size, int *min, int *sum)// Функция для нахождения минимального значения и его индекса
{
    *min = arr[0];//Начинаем с первого элемента массива 
    *sum = 0;
    for (int i = 0; i < size; i++)//ставим условие цикла
    {
        if (arr[i] > 0) 
        {
            *sum = *sum + arr[i];
        }
    }
}


int main() 
{
    int arr[SIZE];
    int min, sum;

    Input(arr, SIZE);// Ввод чисел в массив

    // Нахождение всех положительных элементов массива и их сумма
    Min(arr, SIZE, &min, &sum);

    // Вывод суммы всех положительных элекментов массива
    printf("%d", sum);
    

    return 0;
}
