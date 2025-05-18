def CountNumber(no):
    digit = 0
    Sum = 0
    while(no != 0):
        digit = no % 10
        Sum =Sum+ digit
        no = int(no/10)
    return Sum
  
def main():

    print("Enter Number : ")
    value = int(input())

    ret = CountNumber(value)
    print("Addition of digits are : ",ret)
  
if __name__ =="__main__":
    main()                         