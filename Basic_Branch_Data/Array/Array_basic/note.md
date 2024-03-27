
*******************Array_BASIC****************
* Array Condition based input get=
        for (int i=0; i<n; i++)
        {
            cin>>ar[i]; // input value
            if (ar[i]>=0 && ar[i]<=pow(10,9))
            {
            ar[i]=ar[i]; //satisfied value
            }
        } // this Process is worng


* Array specefic inedex value take out:
    //must be first declear int index=0; 
    then apply this line otherwise store garbase value; 
    example: 

        int index=0;
        for (int i=0; i<n; i++)
        {
           if(a[i]<min){
            min=a[i];
            index=i;
           }
        }
         cout<<min<<" "<<index+1; 
         hear specific index take out.    

* * Matrix:
    * Upper Tringle: row<col
    * Lower Tringle: row>col
    * Diagonal Mertix Priciple: row==col
    * Diagoal Metrix second: 1. row ==(numberOfRows – column -1).
                             Or another Process
                             2. (row+col)==(n-1)







* charcter to interger value convert: when charcter to intger convert. actully this convert is ASCI   code 
    char x='5';
    int y=int(ch)-48;
    output: 5 that is integer





*******************Array_CP***************
* Permutation in Array: 
    So, for a set of “n” distinct elements, you can generate “n!” (n factorial) permutations. The number of permutations grows rapidly as “n” increases. For example, if you have 3 elements, there are 3! = 6 permutations, but if you have 4 elements, there are 4! = 24 permutations, and so on.

    Input: nums = [1,2,3]
    Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

    Algorithm use Bback track:
    -To generate all the permutations of an array from index l to r, fix an element at index l and recur for the index l+1 to r.
    -Backtrack and fix another element at index l and recur for index l+1 to r.
    -Repeat the above steps to generate all the permutations.

    Onother Process do not use Back track:

    Start with the original array.
    Use indices to keep track of the elements to permute.
    Repeat the following until there are no more permutations:
    Swap elements to generate the next permutation.
    Update the indices.
    Continue until all permutations are generated
