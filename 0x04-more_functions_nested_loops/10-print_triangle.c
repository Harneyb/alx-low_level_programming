/**
 * print_triangle - entry point
 * Description: prints diagonal
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int row;
int hash;
int sp;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (sp = size - row; sp >= 1; sp--)
{
_putchar('_');
}
for (hash = 1; hash <= row; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
