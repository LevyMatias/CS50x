import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    for column in reader:
        title = column["title"].strip().upper()
        if title not in titles:
            titles[title] = 0
        titles[title] += 1

for title in sorted(titles, key=lambda title: titles[title], reverse=True):
    print(title, titles[title])