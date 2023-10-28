#include "my_func.h"

void main()
{
    printf("Лабораторная работа №4. Решение квадратных уравнений\n\n");
    int exit=0, a, b, c, mode, empty;
    char input[10];
    printf("Введите коэффиценты уравнения.\n\n\tВНИМАНИЕ!\nЛюбое не цифровое значение = 0!\nВещественные берутся без дробной части!\n\n");
    while (!exit)
    {
        printf("Введите коэффицент а: ");
        scanf("%s[^\n]\n",input);
        sscanf(input, "%d", &a);
        printf("Введите коэффицент b: ");
        scanf("%s[^\n]\n",input);
        sscanf(input, "%d", &b);
        printf("Введите коэффицент c: ");
        scanf("%s[^\n]\n",input);
        sscanf(input, "%d", &c);
        if(a==0 || b==0 || c==0)
        {
            printf("Это уравнение решается без использования способов в этой программе!\n\n");
            continue;
        }
        printf("\nВаше уравнение: %dx^2%s%dx%s%d=0\n\n",a,b>0?"+":"",b,c>0?"+":"",c);
        printf("Выберите способ решения:\n\n");
        printf("1 - Разложение левой части уравнения на множители\n");
        printf("2 - Метод выделения полного квадрата\n");
        printf("3 - Решение квадратных уравнений по формуле\n");
        printf("4 - Решение уравнений с использованием теоремы Виета\n");
        printf("5 - Решение уравнений способом «переброски»\n");
        printf("6 - Свойства коэффициентов квадратного уравнения\n");
        printf("7 - Графическое решение квадратного уравнения\n");
        printf("8 - Решение квадратных уравнений с помощью циркуля и линейки\n");
        printf("9 - Решение квадратных уравнений с помощью  номограммы\n");
        printf("10 - Геометрический способ решения квадратных  уравнений\n");
        printf("0 || другое значение - ВЫХОД\n\n");
        printf("Способ: ");
        scanf("%s[^\n]\n\n",input);
        sscanf(input, "%d", &mode);
        switch (mode)
        {
            case 1:
                multipliers(a,b,c);
                exit=1;
                break;
            case 2:
                full_square(a,b,c);
                exit=1;
                break;
            case 3:
                
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 6:
                
                break;           
            default:
                exit=1;
                break;
        }
        // if((int)input[0]<48 || (int)input[0]>57) continue;
        // else exit=1;
    }
}