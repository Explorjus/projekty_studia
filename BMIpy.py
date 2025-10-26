masa = float(input("Podaj mase ciala: "))
wzrost_cm = float(input("Podaj wzrost: "))

wzrost = wzrost_cm / 100

BMI = masa / (wzrost**2)

print(f"Twoje BMI wynosi {BMI:.2f}")
      
if BMI < 25 and BMI > 18:
    print("Masz prawidłową masę ciała.")
    
elif BMI < 18:
    print("Masz niedowagę")

else:
    print("Masz nadwagę")      
      
