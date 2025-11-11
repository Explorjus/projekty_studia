import random
import time

# Tworzy losową macierz o wymiarach rows x cols
def random_matrix(rows, cols):
    return [[random.randint(0, 9) for _ in range(cols)] for _ in range(rows)]

# Mnożenie macierzy A x B (złożoność O(n³))
def multiply_matrices(A, B):
    n = len(A)
    m = len(A[0])
    p = len(B[0])

    if len(B) != m:
        raise ValueError("Nie można pomnożyć: liczba kolumn A ≠ liczba wierszy B")

    C = [[0] * p for _ in range(n)]
    for i in range(n):
        for j in range(p):
            for k in range(m):
                C[i][j] += A[i][k] * B[k][j]
    return C

# Testujemy dla różnych rozmiarów
for n in [10, 50, 100, 200, 1000]:
    A = random_matrix(n, n)
    B = random_matrix(n, n)

    start = time.time()
    multiply_matrices(A, B)
    end = time.time()

    print(f"Rozmiar macierzy: {n}x{n} -> czas: {end - start:.4f} s")
    
    #C = multiply_matrices(A, B)
#for row in C:
    #print(row)