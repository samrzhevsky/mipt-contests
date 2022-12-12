class C
{
public:
    double re;
    double im;

    double abs()
    {
        return pow(re, 2) + pow(im, 2);
    }

    C(double re = 0, double im = 0) : re(re), im(im) {}
    C(const C &c) : re(c.re), im(c.im) {}
};

std::ostream &operator<<(std::ostream &os, C c)
{
    os << c.re << " " << c.im;
    return os;
}

bool operator==(C c1, C c2)
{
    return c1.re == c2.re && c1.im == c2.im;
}

bool operator!=(C c1, C c2)
{
    return !(c1.re == c2.re && c1.im == c2.im);
}

C operator+(C c1, C c2)
{
    C c(c1.re + c2.re, c1.im + c2.im);
    return c;
}

C operator-(C c1, C c2)
{
    C c(c1.re - c2.re, c1.im - c2.im);
    return c;
}

C operator*(C c1, C c2)
{
    C c(c1.re * c2.re - c1.im * c2.im, c1.re * c2.im + c1.im * c2.re);
    return c;
}

C operator/(C c1, C c2)
{
    C c((c1.re * c2.re + c1.im * c2.im) / (c2.re * c2.re + c2.im * c2.im), (c2.re * c1.im - c1.re * c2.im) / (c2.re * c2.re + c2.im * c2.im));
    return c;
}