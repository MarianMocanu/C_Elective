#include <stdio.h>
#include <stdlib.h>

// int main(){
//     int number;
//     float moms, pricePerPiece;
//     double totalWOMoms, totalCost;

//     number = 41112;
//     pricePerPiece = 11.48;
//     totalWOMoms = number*pricePerPiece;
//     totalCost = totalWOMoms + (0.25*totalWOMoms);

//     printf("\nNumber of lego blocks: %d", number);
//     printf("\nPrice per piece: %6.2f", pricePerPiece);
//     printf("\nTotal cost w/o moms: %-6.2lf", totalWOMoms);
//     printf("\nTotal cost with moms: %6.2lf", totalCost);

//     return 0;
// }

// int main(){
//     int number;
//     char character;
//     char string[20];
//     gets(string);
//     character = getchar();
//     scanf("%d", &number);
//     printf("\nNumber: %d", number);
//     printf("\nCharacter: %c", character);
//     printf("\nString: %s", string);
//     return 0;
// }

// int main(){
//     int dage[] = {31,28,31,30,31,30,31,31,30,31,30,31};

//     //siezof()return the size of the array in bytes
//     //in order to find the number of elements 
//     //we have to divide by the size of the type of the array
//     for (int i = 0; i < sizeof(dage)/sizeof(int); i++)
//     {
//         printf("\nMonth number %d contains %d days.", i+1, dage[i]);
//     }

//     return 0;
// }

// int main(){
//     int dage[] = {31,28,31,30,31,30,31,31,30,31,30,31};

//     //siezof()return the size of the array in bytes
//     //in order to find the number of elements 
//     //we have to divide by the size of the type of the array
//     int i = 0;
//     while (i < sizeof(dage)/sizeof(int))
//     {
//         printf("\nMonth number %d contains %d days.", i+1, dage[i]);
//         i++;
//     }

//     return 0;
// }

// int main(){
//     int dage[] = {31,28,31,30,31,30,31,31,30,31,30,31};

//     //siezof()return the size of the array in bytes
//     //in order to find the number of elements 
//     //we have to divide by the size of the type of the array
//     int i = 0;
//     do{
//         printf("\nMonth number %d contains %d days.", i+1, dage[i]);
//         i++;
//     } while (i < sizeof(dage)/sizeof(int));
    

//     return 0;
// }

// int main (){
//     char c;
//     printf("\nEnter character: ");
//     c = getchar();
//     if (c == 'a' || c == 'A')
//     {
//         printf("\nApple");
//     } 
//     else if (c == 'b' || c == 'B')
//     {
//         printf("\nBanana");        
//     }
//     else if (c == 'c' || c == 'C')
//     {
//         printf("\nCherry");        
//     }
//     else if (c == 'd' || c == 'D')
//     {
//         printf("\nDate");        
//     }
//     else if (c == 'e' || c == 'E')
//     {
//         printf("\nElderberry");        
//     }
//     else
//     {
//         printf("\nI don't know any fruit with a %c", c);
//     }
    
//     return 0;
// }

// int main (){
//      char c;
//     printf("\nEnter character: ");
//     c = getchar();

//     switch (c)
//     {
//     case 'a': case 'A':
//         printf("\nApple");
//         break;
//     case 'b': case 'B':
//         printf("\nBanana");
//         break;
//     case 'c': case 'C':
//         printf("\nCherry");
//         break;
    
//     default:  printf("\nI don't know any fruit with a %c", c);
//         break;
//     }
//     return 0;
// }

// int min(int a, int b){
//     if(a<b) return a;
//     else return b;
// }

// int main(){
//     int x = 15;
//     int y = 20;
//     printf("\nThe smallest value is %d", min(x, y));
//     return 0;
// }

int multiply(int a){
    return a*a;
}

int main(){
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);
    printf("\n%d multiplied by %d is %d", number, number, multiply(number));
    return 0;
}