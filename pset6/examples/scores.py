from cs50 import get_int

scores = []
for i in range(3):
    score = get_int("Score: ")
    scores += [score]

# Print average
average = sum(scores) / len(scores)
print(f"Average: {average}")