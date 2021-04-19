name = input("Choose you name: " )

print("Welcome", name, "I was waiting for you... let's start!!!")
ans = None

questions = {"Everyone can open it, but no one can close it what's that?": [
    "egg",
    "Well done you find the first solution... Let's move to the next one...",
    ],
    "Is huge, massive and dark what's that?": [
    "universe",
    "Good Job, you will have another one and you're done with game"],
    "You said Hi only if is UP... What's that?": [
    "flag",
    "And that was the last one"]}

for q in questions:
    while True:
        ans = input(q)
        if ans == questions[q][0]:
            print(questions[q][1])
            break
        else:
            print("Close but not enough")
