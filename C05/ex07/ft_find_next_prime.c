int ft_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    int i;

    i = 2;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb <= 1)
        return (2);

    while (ft_is_prime(nb) != 1)
    {
        nb++;
    }
    return (nb);
}