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

float calculate(int arr[], int size) // Функция для вычисления среднего арифметического
{
    float sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += (float)arr[i];
    }
    
    return sum / size;
}

int main() {
    
    int arr[SIZE];
    Input(arr, SIZE);// Ввод чисел в массив
    printf("%.3f\n", calculate(arr, SIZE));

    return 0;
}



