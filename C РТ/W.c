unsigned int nod(unsigned int a, unsigned int b)
{
    return b ? nod(b, a % b) : a;
}