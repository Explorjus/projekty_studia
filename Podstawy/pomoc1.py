# Funkcja rekurencyjna do zamiany par
def zamiana_miejsc_req(lista, index=0):
    if index >= len(lista) - 1:
        return
    
    lista[index], lista[index + 1] = lista[index + 1], lista[index]
    
    zamiana_miejsc_req(lista, index + 2)
    
lista = [2, 4, 34, 22, 45, 6]    
    
zamiana_miejsc_req(lista)

print(lista)