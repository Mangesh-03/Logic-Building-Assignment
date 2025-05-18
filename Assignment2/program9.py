def CountNumber(no):
 
    count = 0
    while(no != 0):
        count =count+ 1
        no = int(no/10)
    return count
  
def main():

    print("Enter Number : ")
    value = int(input())

    ret = CountNumber(value)
    print("Count of digits are : ",ret)
  
if __name__ =="__main__":
    main()                         