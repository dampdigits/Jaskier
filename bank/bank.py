def main():
    greet = input("Greeting: ").strip()
    if len(greet) >= 5:
        if "hello" == greet[:5].lower():
            print("$0")
            exit(0)

    if "h" == greet[0].lower():
        print("$20")
    else:
        print("$100")
    exit(0)


main()
