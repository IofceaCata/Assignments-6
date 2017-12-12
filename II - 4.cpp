#include <stdio.h>
#include <stdlib.h>
int i, num;
float *data;

main()
{
    printf("Enter total number of elements: ");
    scanf("%d", &num);

    data = (float*) calloc(num, sizeof(float));

    if(data == NULL)
    {
        printf("Error!!! memory not allocated.");
    }

    printf("\n");

    for(i = 0; i < num; i++)
    {
       printf("Enter Number %d: ", i + 1);
       scanf("%f", data + i);
    }

    for(i = 1; i < num; i++)
    {
       if(*data < *(data + i))
           *data = *(data + i);
    }

    printf("Largest element = %.2f", *data);

    return 0;
}
