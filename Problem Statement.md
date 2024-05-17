# Problem 1
**Modified Clockwise Spiral**
### Problem Statement:
You are given a natural number $n$ $(1 \leq n \leq 100)$. You are required to construct a $2n \times 2n$ matrix named secy filling numbers starting from 1 in always clockwise spiral sense. You need to alternately start from first empty cell from the left in top-most row ( $i$ such that $secy[0][i]=0$ and either i=0 or $secy[0][i-1]!=0$) and first empty cell from right in bottom-most row( $i$ such that $secy[2n-1][i]=0$ and either $i=2n-1$ or $secy[2n-1][i+1]!=0$). Initially value in all cells are zero. Ignore filling if a cell is already filled.
<br>You are supposed to use zero indexing for this problem.
### For example:
For $n$=2:
$$
secy=
\begin{bmatrix}
1 & 3 & 9 & 15\\
5 & 4 & 10 & 14 \\
12 & 11 & 7 & 8\\
16 & 13 & 6 & 2
\end{bmatrix}
$$

![Alt text](tsk2.png)

### INPUT:
The first line contains an integer $n$ $(1 \leq n \leq 100)$.
The second line contains $i$ and $j$ such that $(0 \leq i,j \leq 2n-1)$.
### OUTPUT:
Print $secy[i][j]$.

