void printLin(Lin a)
{
    cout << a.cm << " " << a.mm;
}

Lin convertToLin(int kletki)
{
    Lin a;
    a.cm = kletki * 0.5;
    a.mm = 10 * (kletki * 0.5 - a.cm);

    return a;
}