def CheckPrime(no):
    flag = True
    i = 1
    while(i<=(no/2)):
        if((no % i)==0):
            flag = False
            break
        i +=  1  
    return flag 
def main():

    print("Enter Number : ")
    value = int(input())

    ret = CheckPrime(value)
    if(ret == True):
        print(value," is a prime number ")
    else:
        print(value," is not prime")
if __name__ =="__main__":
    main()   