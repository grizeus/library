int my_isalnum(int c)
{
     length = strlen(c);
     for (int i = 0; i < length; i++)
     {
           if (isdigit(c[i]))
                continue;
     }
    else
            return 0;

     return 1;
}