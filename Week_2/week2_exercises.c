#include<stdio.h>
#include<stdlib.h>

// int main(){
//     int x = 10;
//     int y = 20;
//     int *pointer_x = NULL;
//     int *pointer_y = NULL;
//     pointer_x = &x;
//     pointer_y = &y;

//     printf("\nValues: x = %d and y = %d", *pointer_x, *pointer_y);
//     printf("\nAddresses: x = %d and y = %d", pointer_y, pointer_y);

//     return 0;
// }

//Asignment 9
// void swap(int *a, int *b); 

// int main()
// {
//     int i, j, n;
//     int array[] = {7, 3, 9, 2, 11};
//     int *array_pointer = NULL;
//     array_pointer = array;
//     printf("Array before sort: \n\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("array[%d] = %d \n", i, *(array_pointer + i));
//     }
//     n = 5;
//     for (int i = 0; i < n-1; i++)
//     {
//        for (int j = 0; j < n-1; j++)
//        {
//            if (array[j] > array[j+1])
//            {
//                swap(&array[j], &array[j+1]);
//            }
           
//        }
       
//     }
//     printf("Array after sort: \n\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("array[%d] = %d \n", i, *(array_pointer + i));
//     }
//     system("pause");
//     return 0;
// }

// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// Asignment 10
// #define MAX 100
// int main()
// {
//     int array[100];
//     int *array_pointer = NULL;
//     array_pointer = array;
//     for (int i = 0; i < MAX; i++)
//     {
//         *(array_pointer + i) = i;
//     }
//     printf("Array initialized with pointers: \n\n");
//     for (int i = 0; i < MAX; i++)
//     {
//         printf("array[%d] = %d \n", i, *(array_pointer + i));
//     }

//     return 0;
// }

//Asignment 11
// int main(){
//     int array[100];
//     int *pointers[10];

//     for (int i = 0; i < 10; i++)
//     {
//         pointers[i] = &array[i*10];
//         for (int j = 0; j < 10; j++)
//         {
//             *(pointers[i] + j) = i*10 + j;
//         }
        
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//            printf("pointers[%d] = %d\n", i, *(pointers[i] + j));
//         }
//     }

//     return 0;
// }

//Asignment 12
int * increasePointer(int *pointer, int *pointers[]);

int main(){
    int array[100];
    int *pointers[10];

    for (int i = 0; i < 10; i++)
    {
        pointers[i] = &array[i*10];
        for (int j = 0; j < 10; j++)
        {
            *(pointers[i] + j) = i*10 + j;
            // printf("Address: %d \n", pointers[i] + j);
        }
    }

    int *circularPointer = NULL;
    circularPointer = pointers[9];
    
    printf("Value of cicularPointer is %d\n", *circularPointer);
    printf("Address of circularPointer is %d\n\n", circularPointer);
    printf("Value of cicularPointer +1 is %d\n", *increasePointer(circularPointer, pointers));
    printf("Address of circularPointer +1 is %d\n\n", increasePointer(circularPointer, pointers));
    printf("Value of 1st element is %d \n", *pointers[0]);
    printf("Address of 1st element is %d\n\n", pointers[0]);
    printf("Value of last element is %d\n", *pointers[9]);
    printf("Address of last element is %d\n", pointers[9]);
    return 0;
}

int * increasePointer(int *pointer, int *pointers[]){
    pointer++;
    if (pointer > pointers[sizeof(pointers)/sizeof(int)])
    {
        return pointers[0];
    }
    return pointer;
}