int func_hyper(float x, float y)
{
    if (x >= -4 && y >= -2 && y >= (1 / (x + 4) - 3))
    {
        return -1;
    }
    else
    {
        return 0;
    }
}