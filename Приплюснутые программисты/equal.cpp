template <typename T>
bool arrays_are_equal(T arr1[], T arr2[], size_t size = -1)
{
    if (size == -1)
        return true;

    for (size_t i = 0; i < size; i++)
        if (arr1[i] != arr2[i])
            return false;

    return true;
}