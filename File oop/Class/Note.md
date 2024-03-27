myclass = is a class name



* using namespace std = standard input output function

* Access Specifiers : 
public - members are accessible from outside the class .
private - members cannot be accessed (or viewed) from outside the class.
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

* Creating a multiple object of a class = myclass obj1,obj2;
* Class of Public variable data inserting from main main function =
            myclass{
                public:
                    int a;
                }
            main(){
               myclass obj;
               obj.a=10; // data insert  
            }

* Class Scop Resulation : jast put the defination method/function into the class.and access  outside.  
            
            myclass{
                public:
                   int sum();
                }

            function_datatype myclass::sum(){

                code;
            }

*
