class ArrayDemoLoop {
    public static void main(String A[]){
        int Arr[]={10,20,30,40}; 
        // int i = 0;
        System.out.println("for loop:");
        for(int i=0;i<Arr.length;i++){

            System.out.println(Arr[i]);
        }
        System.out.println();
        System.out.println("whie loop");

        int i= 0;
        while(i<Arr.length){
            System.out.println(Arr[i]);
            i++;
        }
        i=0;
        System.out.println("Do-while");
        do{
            System.out.println(Arr[i]);
            i++;
        }while(i<Arr.length);
        
    }
}
