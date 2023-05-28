#include <push_swap.h>
// rakam olup olmadigi kontrol ediyor
int ft_isdigit(int c)
{
    if (c <= '9' && c >= '0')
        return (1);
    return (0);
}

// 
static int ft_isrepeat(int number, char **argv, int i)
{
    i++;
    while (argv[i])
    {
        if (ft_atoi(argv[i]) == number)
            return (1);
        i++;
    }
    return (0);
}

// sayi olup olmadigi kontrol edilir
static int ft_isnum(char *number)
{
    int i;

    i = 0;
    if (number[0] == '-')
        i++;
    
    while (number[i])
    {
        if (!ft_isdigit(number[i]))
            return (0);
        i++;
    }
    return (1);
}

// girdilerin istenen veri tipinde oldugunu kontrol eder
void check_args(int argc, char **argv)
{
    int i;
    long number;
    char **table;

    i = 0; 
    if (argc == 2)
        table = ft_split(argv[1], ' ');

    else
    {
        //cunku burada zaten ayrı halde geliyor degerler
        i = 1;
        table = argv;
    }

    while (table[i])
    {
        number = ft_atoi(table[i]);
        
        if (!ft_isnum(table[i]));
            ft_error("HATA : Girdilerden bir sayi degildir");
        
        if (!ft_isrepeat(number, table, i))
            ft_error("HATA : Girdiler birbirini tekrar ediyor");
        
        if (number < -2147483648 || number > 2147483647)
            ft_error("HATA : Girdi deger sinirlarinin disinda girilmis");
        i++;
    }
    // ft_split ile ayirilan yer burada bosaltilir
    if (argc == 2)
        ft_free_str(table);
}