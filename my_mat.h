#ifndef _MY_MAT_H_
#define _MY_MAT_H_

#define SIZE 10
#define TRUE 1
#define FALSE 0
#define NO_PATH 0

/* get a new matrix[10][10] from user and return it. */
int** getNewMat();

/* return 1 if there hava a path between two nodes. else 0 */
int pathExist(int** mat, int node1, int node2);

/* return the width of the shrter path between two nodes. else -1 */
int shrterPath(int** mat, int node1, int node2);

#endif