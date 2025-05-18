def SumFactor(no):
    Sum = 0
    i = 1
    while(i<=(no/2)):
        if((no % i)==0):
            Sum += i
        i +=  1  
    return Sum 
def main():

    print("Enter Number : ")
    value = int(input())

    ret = SumFactor(value)
    print("Summation of factor : ",ret)
  
if __name__ =="__main__":
    main()   