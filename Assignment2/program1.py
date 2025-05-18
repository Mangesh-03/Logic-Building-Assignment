import Arithmetic

def main():
   
    print("Enter First number : ")
    ivalue1 = int(input())

    print("Enter Second number : ")
    ivalue2 = int(input())

    aRet = Arithmetic.Add(ivalue1,ivalue2)
    print("Addition is : ",aRet)
    sRet = Arithmetic.Sub(ivalue1,ivalue2)
    print("Subtraction is : ",sRet)
    mRet = Arithmetic.Multi(ivalue1,ivalue2)
    print("Multiplication is : ",mRet)

    dRet = Arithmetic.Div(ivalue1,ivalue2)
    if(dRet == -1):
        print("invalid Input ")
    else:
        print("Division is : ",dRet)

    

if __name__ =="__main__":
    main()    