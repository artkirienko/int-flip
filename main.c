//
//  main.c
//  int-flip
//
//  Created by Артём Кириенко on 03.10.12.
//  Copyright (c) 2012 Артём Кириенко. All rights reserved.
//
//  Написать машинно-независимую программу, транспонирующую двоичный код целого.
//
//  Мой алгоритм: переменная a — исходное число, переменная b — результат.
//  На каждом шаге я забираю последнюю цифру в двоичной записи числа a и
//  прибавляю её в конец двоичной записи числа b.

#include <stdio.h>
#include <limits.h>

int printbinary(unsigned int a);

int main(int argc, const char * argv[])
{
    unsigned int a, b=0;
    if ((scanf("%d", &a) == 1)) {
        printf("a: "); printbinary(a);
        printf("b: "); printbinary(b);
               for (int i = 0; i < ((sizeof(a)*CHAR_BIT)-1); i++){
                   b = b + a%2; a >>= 1; b <<= 1;
                   printf("a: "); printbinary(a);
                   printf("b: "); printbinary(b);
               }
    }
    a=b;
    printf("Ответ: %u ", a); printbinary(a);
    return 0;
}

// Вспомогательная функция, используется для отладки.
// Печатает двоичный код числа в обратном порядке, т.е. для 5: 10100000.
int printbinary(unsigned int a){
    for (int i=0; i < ((sizeof(a)*CHAR_BIT)); i++){
        printf("%d", a%2); a >>= 1;
    }
    printf("\n");
    return 0;
}

