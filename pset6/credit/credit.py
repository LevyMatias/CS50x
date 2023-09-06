from cs50 import get_string
import re

def checkCardType(cardNumber):
    # dicionário com chaves associadas as regex dos cartões
    regex_dict = {
        "regexMasterCard": "^5[1-5][0-9]{14}|^(222[1-9]|22[3-9]\\d|2[3-6]\\d{2}|27[0-1]\\d|2720)[0-9]{12}$",
        "regexVisa": "^4[0-9]{12}(?:[0-9]{3})?$",
        "regexAmericanExpress": "^3[47][0-9]{13}$"
    }

    # Iterar sobre o dicionário
    for key, regex_pattern in regex_dict.items():
        regex_match = re.search(regex_pattern, cardNumber)
        if regex_match:
            if len(cardNumber) == 16 and key == "regexMasterCard":
                return "MASTERCARD"
            elif len(cardNumber) == 15 and key == "regexAmericanExpress":
                return "AMEX"
            elif len(cardNumber) == 16 and key == "regexVisa":
                return "VISA"

    return "INVALID"

def main():
    card = get_string("Credit Card Number: ")
    print(checkCardType(card))

main()