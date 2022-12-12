template <typename T, typename Y>
void copy_array(T src[], Y dest[], size_t size = 1)
{
    for (size_t i = 0; i < size; i++)
        dest[i] = (Y) src[i];
}