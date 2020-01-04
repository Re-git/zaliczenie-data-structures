#include <stdio.h>

void zamien(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void insertion_sort(int tab[], int size)
{   
    int i,j;
    int k;
    for(i=1 ; i<size ; i++)
    {
        k = tab[i];
        for(j=i-1 ; j>=0 ; j--)
        {      
            if(k < tab[j]) zamien(&tab[i-(i-j-1)], &tab[j]);
        }
    }
}

void print_tab(int *tab, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab1[] = {5,1,4,2,3};
    int tab2[] = {1,2,3,4,5};
    int tab3[] = {5,4,3,2,1};
    insertion_sort(tab1, sizeof(tab1)/sizeof(int));
    insertion_sort(tab2, sizeof(tab2)/sizeof(int));
    insertion_sort(tab3, sizeof(tab3)/sizeof(int));
    print_tab(tab1, sizeof(tab1)/sizeof(int));
    print_tab(tab2, sizeof(tab2)/sizeof(int));
    print_tab(tab3, sizeof(tab3)/sizeof(int));

}