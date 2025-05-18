def Display(no):
    for i in range(no):
        for j in range(no):
            print("*",end="\t")
        print()    

def main():

    print("Enter Number : ")
    value = int(input())

    Display(value)

  
if __name__ =="__main__":
    main()  