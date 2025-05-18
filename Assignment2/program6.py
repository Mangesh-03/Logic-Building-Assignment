def Display(no):
    for i in range(1,no+1):
        for j in range(no,i-1,-1):
            print("*" ,end="\t")

        print()   


 
def main():

    print("Enter frequency : ")
    value = int(input())

    Display(value)

  
if __name__ =="__main__":
    main()             