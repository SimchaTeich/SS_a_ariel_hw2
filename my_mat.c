#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

void floydWarshallAlgo(int** mat);

int** getNewMat()
{
    int** mat = (int**)malloc(SIZE * sizeof(int*));
    for(int i = 0; i < SIZE; i++)
    {
        mat[i] = (int*)malloc(SIZE * sizeof(int));
    }

    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    floydWarshallAlgo(mat);

    return mat;
}

void floydWarshallAlgo(int** mat)
{   
    for(int k = 0; k < SIZE; k++)
    {
        for(int i = 0; i < SIZE; i++)
        {
            for(int j = 0; j < SIZE; j++)
            {
                if(i == j){continue;}

                int mat_i_j = mat[i][j];
                int mat_i_k = mat[i][k];
                int mat_k_j = mat[k][j];
                
                if (mat_i_k != NO_PATH && mat_k_j != NO_PATH)
                {
                    if (mat_i_j == NO_PATH)
                    {
                        mat[i][j] = mat_i_k + mat_k_j;
                    }
                    else
                    {
                        if(mat_i_k + mat_k_j < mat_i_j)
                        {
                            mat[i][j] = mat_i_k + mat_k_j;
                        }
                    }
                }
                
            }
        }
    }

}

int pathExist(int** mat, int node1, int node2)
{
    return mat[node1][node2];
}

int shrterPath(int** mat, int node1, int node2)
{
    return mat[node1][node2] != NO_PATH ? mat[node1][node2] : -1;
}