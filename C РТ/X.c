unsigned long long fact(unsigned long long n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}