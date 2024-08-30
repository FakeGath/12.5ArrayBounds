//Library that allows basic commands in c++
#include <iostream>

int main(){

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};

    //Reads the data beyond bounds : it might read the garbage or crash the program.

    std::cout << "Numbers[12]: "<< numbers[12]<<std::endl;

    //Changes the data of numbers[12] and prints it.
    numbers[12]=1000;
    std::cout << "Numbers[12]: "<< numbers[12]<<std::endl;

    //Reads the data beyond bounds : it might read the garbage or crash the program.


    std::cout << "Numbers[-1]: "<< numbers[-1]<<std::endl;
    
    return 0;
    
}