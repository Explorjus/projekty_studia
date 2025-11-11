
zakonczenie = False

while not zakonczenie:
    print("\nFormatowanie dysku, wybierz opcje:\n1. Format")
    print("2. Szybki format\n3. Diagnostyka\n4. Koniec")
    klawisz = input(">")
    if klawisz == '1':
        print("\nWybrales foramtowanie")
    elif klawisz == '2':
        print("\nWybrales szybki format")
    elif klawisz == '3':
        print("\nWybrales diagnostyke")
    elif klawisz == '4':
        zakonczenie = True
        