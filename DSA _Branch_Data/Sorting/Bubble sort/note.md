code summerise:
* using 2 loop outer loop and inner loop
* outer loop for runing step/iteration
* inner loop for runing compair and swap

 ALGORITHM:
    1.step: step<elememt-1
    2.let swap and compair is i, that is run till unsorted element: i<element-1-step
    3.when left element is high and right element is low then swap,or no swap


LooK:
let element=5
    step-         compair-
    0              4
    1              3
    2              2
    3              1
    4              0
step<element=1     compair<element-1-step

Complexity:
    * bast case =O(n)
    * Average case and worst cse:
    comapir:
    =4 3 2 1 0 
    reverse process 
    =0 1 2 3 4 .............n-1
    = n(n-1)/2
    =O(n^2) according to big o notetion






