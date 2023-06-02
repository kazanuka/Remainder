#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int i;
    do{
        i = get_int("Cents Owed: \n");
    }
    while(i < 0);
    return i;
}

int calculate_quarters(int cents)
{
    int a = 0;
    int x = cents;

    while(x >= 25)
    {
        x = x - 25;
        a++;
    }
    return a;
}

int calculate_dimes(int cents)
{
    int b = 0;
    int y = cents;

    while(y >= 10)
    {
        y = y - 10;
        b++;
    }
    return b;
}

int calculate_nickels(int cents)
{
    int c = 0;
    int z = cents;

    while(z >= 5)
    {
        z = z - 5;
        c++;
    }
    return c;
}

int calculate_pennies(int cents)
{
    int d = 0;
    int t = cents;

    while(t >= 1)
    {
        t = t - 1;
        d++;
    }
    return d;
}
