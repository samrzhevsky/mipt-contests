size_t my_strlen(const char *str)
{
	size_t res;
	for (res = 0; str[res]; res++);
	return res;
}