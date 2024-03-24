*****************General Section******************
* when array input not only array also input do not use break and interput condition.

* 








*******************Array******************
* Array Condition based input get=
        for (int i=0; i<n; i++)
        {
            cin>>ar[i]; // input value
            if (ar[i]>=0 && ar[i]<=pow(10,9))
            {
            ar[i]=ar[i]; //satisfied value
            }
        }

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

* charcter to interger value convert: when charcter to intger convert. actully this convert is ASCI code 
    char x='5';
    int y=int(ch)-48;
    output: 5 that is integer

* 