#include <stdio.h>

void zamien(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int* arr, int arr_size)
{
    int i,j;
    int counter = 0;
    for(j=0;j<arr_size-1;j++)
    {
        for(i=0;i<arr_size-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                zamien(&arr[i], &arr[i+1]);
            }
            counter++;
        }
    }
    printf("Loop counter : %d\n",counter);
}

void bubble_sort_2(int *tab, int size)
{
    int i,j;
    int counter = 0;
    for(j=0;j<size-1;j++)
    {
        for(i=0;i<size-1-j;i++)
        {
            if(tab[i]>tab[i+1])
            {
                zamien(&tab[i], &tab[i+1]);
            }
            counter++;
        }
    }
    printf("Loop counter : %d\n",counter);
}

void bubble_sort_3(int *tab, int size)
{
    int i;
    int j = 0;
    int counter = 0;
    int changed = 1;
    while(changed)
    {
        changed = 0;
        for(i=0;i<size-1-j;i++)
        {
            if(tab[i]>tab[i+1])
            {
                zamien(&tab[i], &tab[i+1]);
                changed = 1;
            }
            counter++;
        }
        j++;
        if(changed==0)
        {
            printf("Loop counter : %d\n",counter);
            return;
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
    printf("Bubble_sort:\n");
    int tab1[] = {5,1,4,2,3};
    int tab2[] = {1,2,3,4,5};
    int tab3[] = {5,4,3,2,1};
    bubble_sort(tab1, sizeof(tab1)/sizeof(int));
    bubble_sort(tab2, sizeof(tab2)/sizeof(int));
    bubble_sort(tab3, sizeof(tab3)/sizeof(int));
    print_tab(tab1, sizeof(tab1)/sizeof(int));
    print_tab(tab2, sizeof(tab2)/sizeof(int));
    print_tab(tab3, sizeof(tab3)/sizeof(int));
    
    printf("Bubble_sort_2:\n");
    int tab4[] = {5,1,4,2,3};
    int tab5[] = {1,2,3,4,5};
    int tab6[] = {5,4,3,2,1};
    bubble_sort_2(tab4, sizeof(tab4)/sizeof(int));
    bubble_sort_2(tab5, sizeof(tab5)/sizeof(int));
    bubble_sort_2(tab6, sizeof(tab6)/sizeof(int));
    print_tab(tab4, sizeof(tab4)/sizeof(int));
    print_tab(tab5, sizeof(tab5)/sizeof(int));
    print_tab(tab6, sizeof(tab6)/sizeof(int));

    printf("Bubble_sort_3:\n");
    int tab7[] = {5,1,4,2,3};
    int tab8[] = {1,2,3,4,5};
    int tab9[] = {5,4,3,2,1};
    bubble_sort_3(tab7, sizeof(tab7)/sizeof(int));
    bubble_sort_3(tab8, sizeof(tab8)/sizeof(int));
    bubble_sort_3(tab9, sizeof(tab9)/sizeof(int));
    print_tab(tab7, sizeof(tab7)/sizeof(int));
    print_tab(tab8, sizeof(tab8)/sizeof(int));
    print_tab(tab9, sizeof(tab9)/sizeof(int));

}