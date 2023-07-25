#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nome = get_string("Qual é seu nome? \n");
    printf("hello,%s \n",nome);
}