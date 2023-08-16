words = set()

def load(dict):
    file = open(dict, "r")
    for line in file:
        words.add(line.rstrip())
    file.close()
    return True
