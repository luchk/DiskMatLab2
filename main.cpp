#include <stdio.h>
#include <iostream>

void swap(char *s, int i, int j)
{
   int t = s[j];
    s[j] = s[i];
    s[i] = t;
}


int main()
{   int N;
    std::cin >> N;
    char s[N+1], t;
    int i, j, r, k;


    for(i=0; i<N; i++)
    {
        s[i] = '1'+i;
    }
    s[N] = '\0';

    while(true)
    {
        printf("%s\n", s);
        // Находим самое правое место, где s[i] < s[i+1]
        for(i=N-1; i>=0 && s[i] > s[i+1]; i--) {

        }
        // Находим s[j] - наименьший элемент справа от s[i] и больший его
        for(j=N-1; s[i] > s[j]; j--) ;
        // Меняем s[i] <-> s[j]

        swap(s, i, j);
        // То, что за "i" - переворачиваем
        for(k=i+1, r=N-1; r > k; k++, r--)
        {
            swap(s, r, k);
        }
        if (i<0)
        {
            break; // Уже получили "654321" - самую старшую перестановку
        }
    }
}