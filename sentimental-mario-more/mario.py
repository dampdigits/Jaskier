# Program prints a double half-pyramid of a specified height

# Prompt to input height until a number between 0 - 9 is entered
while True:
    try:
        height = int(input("Height: "))
        if 0 < height < 9:
            break
    except ValueError:
        continue

space = height - 1
hash = 1

# Display half-pyramids
for row in range(height):
    print(" " * space + "#" * hash + "  " + "#" * hash)
    space -= 1
    hash += 1
