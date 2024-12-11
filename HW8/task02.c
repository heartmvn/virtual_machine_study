#include <stdio.h>

#define SIZE 5 // Размер массива


void Input (int arr[], int size) // Функция для ввода массива
{
    //printf("Введите %d числе через пробел:\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
}

int Min(int arr[], int size) // Функция для вычисления минимального значения
{
    int min=arr[0];
    for (int i = 1; i < size; i++) 
        if (min > arr[i])
            min = arr[i];
    
    return min;
}

int main() 
{
    
    int arr[SIZE];
    Input(arr, SIZE);// Ввод чисел в массив
    printf("%d", Min(arr, SIZE));// Вывод результата сразу с вызовом функции

    return 0;
}

