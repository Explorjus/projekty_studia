stala_cale = 39.3701
stala_stopa = 3.28084
stala_jard = 1.09361
stala_mila = 0.000621371




while True:
    metry = float(input("Podaj odległość w metrach: "))
    
    cal = metry * stala_cale
    stopa = metry * stala_stopa
    jard = metry * stala_jard
    mila = metry * stala_mila
    
    print(f"\nOdległość w calach: {cal:.4f} cali")
    print(f"Odległość w stpach: {stopa:.4f} stóp")
    print(f"Odległość w jardach: {jard:.4f} jardów")
    print(f"Odległość w milach: {mila:.4f} mil\n")
    