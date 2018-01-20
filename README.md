## Постановка задачи

Написать машинно-независимую программу, транспонирующую двоичный код целого
числа.

## Алгоритм решения

Переменная **a** — исходное число, переменная **b** — результат.
На каждом шаге я забираю последнюю цифру в двоичной записи числа **a** и
прибавляю её в конец двоичной записи числа **b**.

## Требования

        Docker

или

        gcc (or any other C compiler), stdio.h, limits.h

## Запуск (через Docker)

1. Собрать образ

        $ docker build -t int-flip .

2. Запустить

        $ docker run -i int-flip

3. Ввести с клавиатуры число и нажать `<Enter>`

## Дополнительные варианты запуска (через Docker)

1. Запустить, подав на вход текстовый файл, содержащий число:

        $ cat file.txt | docker run -i int-flip

## Запуск (без Docker)

1. Скомпилировать:

        $ gcc -o int-flip main.c

2. Запустить:

        $ ./int-flip

3. Ввести с клавиатуры число и нажать `<Enter>`

## Дополнительные варианты запуска (без Docker)

1. Запустить, подав на вход текстовый файл, содержащий число:

        $ ./int-flip < file.txt

## Результат работы

Результат работы содержит информацию о каждом шаге алгоритма и окончательный
ответ.
