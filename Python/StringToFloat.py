input_num = input("Enter a number : ")                         # 12.4

num_list = input_num.split('.')
if(len(num_list) > 1):
    if((num_list[0].isdigit() and num_list[1].isdigit()) or (num_list[0] == "" or num_list[1] == "")):
        print(eval(input_num), type(eval(input_num)))
    else:
        print("Sorry, it's a string!")
else:
    if(num_list[0].isdigit() or num_list[0] == ""):
        print(eval(input_num), type(eval(input_num)))
    else:
        print("Sorry, it's a string!")
