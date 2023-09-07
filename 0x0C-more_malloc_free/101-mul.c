char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
    int j, k, mul, mulrem, add, addrem;

    mulrem = addrem = 0;
    for (j = num_index, k = dest_index; j >= 0; j--, k--)
    {
        mul = (n - '0') * (num[j] - '0') + mulrem;
        mulrem = mul / 10;
        add = (dest[k] - '0') + (mul % 10) + addrem;
        addrem = add / 10;
        dest[k] = add % 10 + '0';
    }

    for (addrem += mulrem; k >= 0 && addrem; k--)
    {
        add = (dest[k] - '0') + addrem;
        addrem = add / 10;
        dest[k] = add % 10 + '0';
    }

    if (addrem)
    {
        char *temp = malloc((dest_index + 2) * sizeof(char));
        if (temp == NULL)
        {
            return NULL;
        }
        temp[0] = addrem + '0';
        for (int i = 1; i <= dest_index + 1; i++)
        {
            temp[i] = dest[i - 1];
        }
        free(dest);
        return temp;
    }

    return dest;
}

