class Matrix
{
public:
    int rows;
    int columns;
    double *data;

    Matrix(int rows, int columns)
    {
        if (rows < 1 || columns < 1)
        {
            std::cout << "Wrong size of matrix";
            exit(1);
        }
        else
        {
            this->rows = rows;
            this->columns = columns;

            this->data = (double *)calloc(rows * columns, sizeof(double));
            if (this->data == NULL)
            {
                std::cout << "Wrong size of matrix";
                exit(1);
            }
        }
    }

    Matrix(Matrix &other)
    {
        this->rows = other.rows;
        this->columns = other.columns;

        this->data = (double *)calloc(other.rows * other.columns, sizeof(double));

        if (this->data == NULL)
        {
            std::cout << "Wrong size of matrix";
            exit(1);
        }

        for (int i = 0; i < other.rows; i++)
            for (int j = 0; j < other.columns; j++)
                this->data[(i * other.columns) + j] = other.data[(i * other.columns) + j];
    }

    ~Matrix()
    {
        free(this->data);
    }
};

std::ostream &operator<<(std::ostream &os, Matrix &M)
{
    for (int i = 0; i < M.rows; i++)
    {
        for (int j = 0; j < M.columns; j++)
        {
            os << M.data[(i * M.columns) + j] << " ";
        }
        os << std::endl;
    }
    return os;
}