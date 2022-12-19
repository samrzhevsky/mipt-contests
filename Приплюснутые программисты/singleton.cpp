class A
{
public:
    static A* getA()
    {
        if (a == nullptr)
        {
            a = new A();
        }

        return a;
    }
    int64_t time()
    {
        return createdAt;
    }
    A(const A&) = delete;
    void operator=(const A&) = delete;
    ~A()
    {
        delete a;
    }

private:
    static A* a;
    static int64_t createdAt;
    A()
    {
        struct timeval t;
        gettimeofday(&t, NULL);
        createdAt = (t.tv_sec) * 1000000 + t.tv_usec;
    }
};

A* A::a = nullptr;
int64_t A::createdAt = 0;