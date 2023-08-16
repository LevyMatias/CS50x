words = set()

def load(dict):
    file = open(dict, "r")
    for line in file:
        words.add(line.rstrip())
    file.close()
    return True

def check(word):
    if word.lower() in words:
        return True
    else:
        return False

def size():
    return len(words)

def unload():
    return True