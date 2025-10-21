try:
    odleglosckm = float(input("Wpisz kilometry: "))
    if odleglosckm <= 0:
        print("Błędne dane")

    else:
        wynik = odleglosckm * 1.6

        print(f"Odległość w milach |{wynik:5.2f}|")

except ValueError:
    print("Błędna wartość")

except OverflowError:
    print("za duza wartosc")
    
except ZeroDivisionError:
    print('nie dzielimy przez 0')