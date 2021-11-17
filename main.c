#include <stdio.h>
#include "my_mat.h"

#define GET_NEW_MAT 'A'
#define PATH_EXIST 'B'
#define SHORTER_PATH 'C'
#define BYE_BYE 'D'

int main()
{

    char choice = ' ';
    int** mat = NULL;
    int node1, node2;

    do
    {
        scanf("%c", &choice);

        switch (choice)
        {
        case GET_NEW_MAT:
            mat = getNewMat();
            break;

        case PATH_EXIST:
            scanf("%d %d", &node1, &node2);
            if(pathExist(mat, node1, node2))
            {
                printf("True\n"); 
            }
            else
            {
                printf("False\n");
            }
            break;

        case SHORTER_PATH:
            scanf("%d %d", &node1, &node2);
            printf("%d\n", shrterPath(mat, node1, node2));
            break;

        case BYE_BYE:
            break;
        
        default:
            break;
        }

    } while (choice != BYE_BYE);
    
    return 0;
}