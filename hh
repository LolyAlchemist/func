
#super uzņēmums
#super dibinātaj(s)
#Pārvaldīt, grāmatvedība, marketings, klientu apkalpošana . . .
import json

phonebook = []

def add_contact():
    name = input("Uzraksti vārdu: ")
    number = input("Uzraksti numuru: ")
    person = {
        "name": name,
        "number": number
    }
    phonebook.append(person)

def princt_contact():
    for person in phonebook:
        print(f"{person['name']}: {person['number']}")   

def find_contact():
    name = input("Kuru kontaktu gribi atrast? ")
    found = False
    for person in phonebook:
        if person['name'] == name:
            print(f"Found {person['name']}: {person['number']}")
            found = True
            break
    if not found:
        print(f"Kontaktu {name} nevaru atrast!")

def delete_contact():
    pass
def exit_contact():
    print("Bye, thanks for using our phonebook!")
    exit()

def togetger_contact():
    len(phonebook)
    print(f"jums ir tik kontakti {len(phonebook)}")

def save_contacts():
    with open("phonebook.json", "w") as file:
        json.dump(phonebook, file)

def main():
    while True:
        choice = input("1-pievienot, 2-izvadīt, 3-atrast, 4-izdzēst, 5-iziet 6-kopa: ")

        if choice == "1":
            add_contact()

        elif choice == "2":
            princt_contact() 

        elif choice == "3":
            find_contact()

        elif choice == "4":
            delete_contact()

        elif choice == "5":
            exit_contact() and save_contacts()

        elif choice == "6":
            togetger_contact()

        else:
            print("Nebija pareiza izvēle")

main()
# UZDEVUMI
# 1. Kā saglabāt mūsu lietotnes datus atmiņā
# 2. Kā ielādēt datus no atmiņas


