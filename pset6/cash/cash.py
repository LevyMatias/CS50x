from cs50 import get_float

def cash(cents):
    remainder = cents % 25

    cents_25 = cents // 25
    cents_10 = remainder // 10
    cents_5 = (remainder % 10) // 5
    cents_1 = (remainder % 10) % 5
    print(f"Cents: {cents_25 + cents_10 + cents_5 + cents_1}")

def main():
    while True:
        n = get_float("Value in Dollar: ")
        if n >= 0:
            break
    cents = round(n * 100)
    cash(cents)

main()