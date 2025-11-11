class Parametry:
    OPCJA_1 = '1'
    OPCJA_2 = '2'
    OPCJA_3 = '3'
    KONIEC = '4'
    TEKST_MENU = "Formatowanie dysku, wybierz opcje:"
    TEKST_OPCJA1 = "Format"
    TEKST_OPCJA2 = "Szybki format"
    TEKST_OPCJA3 = "Diagnostyka"
    TEKST_KONIEC = "Koniec"
    TEKST_NA_CZEKANIE = ">> "
    TEKST_ZLA_OPCJA = "Nieprawidlowy wybor"

zakonczenie = False

while not zakonczenie:
    print(Parametry.TEKST_MENU)
    print(f"{Parametry.OPCJA_1}. {Parametry.TEKST_OPCJA1}")
    print(f"{Parametry.OPCJA_2}. {Parametry.TEKST_OPCJA2}")
    print(f"{Parametry.OPCJA_3}. {Parametry.TEKST_OPCJA3}")
    print(f"{Parametry.KONIEC}. {Parametry.TEKST_KONIEC}")
    match input(Parametry.TEKST_NA_CZEKANIE).upper():
        case Parametry.OPCJA_1:
            print("\nWybrales formatowanie")
        case Parametry.OPCJA_2:
            print("\nWybrales szybki format")
        case Parametry.OPCJA_3:
            print("\nWybrales diagnostyke")
        case Parametry.KONIEC:
            zakonczenie = True
        case _:
            print(Parametry.TEKST_ZLA_OPCJA)