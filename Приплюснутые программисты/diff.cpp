template <typename T>
int *diff_of_arrays(T arr1[], T arr2[], T *res, size_t size, T start = 0)
{
    for (size_t i = 0; i < size; i++)
        res[i] = arr1[i] - arr2[i] + start;

    return res;
}