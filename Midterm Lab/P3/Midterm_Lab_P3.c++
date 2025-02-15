#include <iostream>
#include <cstdint>

void draw_square(int *number);
void draw_right_triangle(int *number);
void draw_left_triangle(int *number);
void draw_inverted_right_triangle(int *number);
void draw_inverted_left_triangle(int *number);
void draw_diamond(int *number);

int main()
{
    int number; 
    std::cout << "Enter a number: "; 
    std::cin >> number;
    while (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore(INT64_MAX, '\n');
        std::cout << "Invalid input.\n"
                  << "Enter a number: ";
        std::cin >> number;
    }

    draw_square(&number);
    std::cout << '\n';
    draw_right_triangle(&number);
    std::cout << '\n';
    draw_left_triangle(&number);
    std::cout << '\n';
    draw_inverted_right_triangle(&number);
    std::cout << '\n';
    draw_inverted_left_triangle(&number);
    std::cout << '\n';
    draw_diamond(&number);
    std::cout << '\n';

    return 0;
}

void draw_square(int *number)
{
    for (int i = 1; i <= *number; i++)
    {
        if(i == 1 || i == *number)
        {
            for (int j = 1; j <= *number; j++)
            {
                std::cout << "* ";
            }
            std::cout << '\n';
        }
        else
        {
            std::cout << "*";
            for (int k = 1; k <= (*number * 2) - 3; k++) std::cout << " ";
            std::cout << "*\n";
        }
    }
}

void draw_right_triangle(int *number)
{
    for (int i = 1; i <= *number; i++)
    {
        for (int j = 1; j <= i; j++) std::cout << "* ";
        std::cout << '\n';
    }
}

void draw_left_triangle(int *number)
{
    for (int i = 1; i <= *number; i++)
    {
        for (int k = i; k < *number; k++) std::cout << "  ";
        for (int j = 1; j <= i; j++) std::cout << "* ";
        std::cout << '\n';
    }
}

void draw_inverted_right_triangle(int *number)
{
    for (int i = *number; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--) std::cout << "* ";
        std::cout << '\n';
    }
}

void draw_inverted_left_triangle(int *number)
{
    for (int i = *number; i >= 1; i--)
    {
        for (int k = *number; k > i; k--) std::cout << "  ";
        for (int j = 1; j <= i; j++) std::cout << "* ";
        std::cout << '\n';
    }
}

void draw_diamond(int *number)
{
    for (int i = 1; i <= *number; i++)
    {
        for (int k = i; k < *number; k++) std::cout << ' ';
        for (int j = 1; j <= i; j++) std::cout << "* ";
        std::cout << '\n';
    }
    for (int i = *number; i >= 1; i--)
    {
        for (int k = i - 1; k < *number; k++) std::cout << ' ';
        for (int j = 1; j <= i - 1; j++) std::cout << "* ";
        std::cout << '\n';
    }
}