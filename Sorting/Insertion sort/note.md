Insertion short apply is division rule:
left side  sorted element right side unsorted element.
আনসর্ট এলিমেন্ট এর একটা করে এলিমেন্ট বের করব এবং  temp ভেরিয়েবলের মধ্যে রাখবো then শর্টেড এলিমেন্ট এর সাথে কম্পেয়ার করব. 

* Solved Techniq :
1. let defult unsorted element=1 or partision is 1 no index
2. unsorted element runing 1 to n-1 till (++ increment)              //for(int unsorted=1; unsorted<n-1; unsorted++)
3. then first unsorted element store temp variable              //temp=a[unsorted]; and sorted=unsorted-1;
4. then sorted variable start unsorted index to till 0 (-- decr) //while (sorted>=0 && a[sorted]>temp) the 
5. then inside the sorted loop a[sorted+1]=a[sorted] and sorted--;
6. last a[sroted+1]=temp insert 

//more information see picture.

* * * *CODE hear:

    for (i=1; i<n; i++) //unsorted element
    {
        temp=a[i];
        j=i-1; //sorted value start
        while (j>=0 && a[j]>temp) 
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;  
    }

COMPLEXITY:



