def SumFactor(no):
    Fact = 1
    i = 1
    while(i<=(no)):
        
        Fact *= i
        i +=  1  
    return Fact
def main():

    print("Enter Number : ")
    value = int(input())

    ret = SumFactor(value)
    print("Factorial is  : ",ret)
  
if __name__ =="__main__":
    main()   