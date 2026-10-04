/*
    step 1:     understand the problem statement
    step 2:     write the algorithm
    step 3:     decide the programming laguage
    step 4:     write the program
    step 5:     test the program

*/

//////////////////////////////////////////////////////////////
//
//  step 1: understand the problem statement
//           user is going to enter ant 2 integers
//            and we have to perform the addition
//
//////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
// step 1: write the algorithm
/*
    start
        accept first number as no1
        accept second number as no2
        create the variable as ans to store the result
        perform the addition and store into the ans
        display the result from ans
    end
*/

///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
//
//  step 3: decide the programming laguage
//          we select the c programming laguage
//////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
//step 4: write the program
//
////////////////////////////////////////////////////////////


#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  fuction name : addtion
//  input        : integer, integer
//  output       : integer
//  description  : performs addition
//  date         : 04/10/2026      
//  author       : swaraj bharat khopade
//
//////////////////////////////////////////////////////////////

int addition(int ino1, int ino2)
{
    int ians = 0;
    ians = ino1 + ino2;         //business logic

    return ians;

}
//////////////////////////////////////////////////////////////
//
//      entry point of the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int ivalue1=0, ivalue2=0, iresult=0;

    printf("enter first number:\n");
    scanf("%d",&ivalue1);

    printf("enter second number:\n");
    scanf("%d",&ivalue2);

    iresult = addition(ivalue1,ivalue2);

    printf("addition is : %d\n",iresult);

    return 0;
}

//////////////////////////////////////////////////////////////
//      step 1 :  test the program
//      
//      tested test cases
//------------------------------------------------------------
//      input1     input2     output
//------------------------------------------------------------
//      10         11           21
//      11         0            11
//      0          11           11
//      20         20           11
//      -9         -9           11
//      -20        -11          -31
//////////////////////////////////////////////////////////////



























