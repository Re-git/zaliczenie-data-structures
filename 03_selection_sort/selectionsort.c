#include <stdio.h>

void zamien(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int find_index_min(int * arr, int arr_size, int offset)
{
    int i;
    int index = offset;
    int min=*(arr+offset);
    for(i=1+offset;i<arr_size;i++)
    {
        if(*(arr+i)<min) 
        {
            min = *(arr+i);
            index = i;
        }
    }
    return index;
}

void selection_sort(int * arr, int arr_size){
    int i;
    int min;
    for(i=0;i<arr_size-1;i++)
    {
        min = find_index_min((arr),arr_size, i);
        zamien(&arr[min], &arr[i]);
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
    selection_sort(tab1, sizeof(tab1)/sizeof(int));
    selection_sort(tab2, sizeof(tab2)/sizeof(int));
    selection_sort(tab3, sizeof(tab3)/sizeof(int));
    print_tab(tab1, sizeof(tab1)/sizeof(int));
    print_tab(tab2, sizeof(tab2)/sizeof(int));
    print_tab(tab3, sizeof(tab3)/sizeof(int));
}