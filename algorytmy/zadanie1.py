# Wczytanie n (liczba całkowita)
n = int(input("Wprowadz n: "))

# Inicjalizacja licznika
r = 0

# i iteruje od 0 do n-2 (range(n-1) daje wartości 0,1,...,n-2)
for i in range(n-1):
    # dla danego i, j iteruje od i do n-1 (range(i, n) daje j = i, i+1, ..., n-1)
    for j in range(i, n):
        # dla danego j, k iteruje od 0 do j-1 (range(j) daje j wartości: 0..j-1)
        for k in range(j):
            # każda iteracja najgłębszej pętli zwiększa licznik o 1
            r = r + 1

# Wynik: liczba wszystkich wykonanych iteracji trzeciej pętli
print(r)
        