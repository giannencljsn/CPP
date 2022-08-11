#include <iostream> 

using namespace std; 

void print_array(const int arr[],size_t size);
void set_array(int arr[], size_t size, int value); 


void print_array(const int arr[], size_t size){
    //const
    for(size_t i{0}; i < size; ++i)
        cout << arr[i] << ",";
    cout << endl;
    

    
    }
    
//set each array element to value
void set_array(int arr[], size_t size, int value){
    
    for(size_t i{0}; i < size; ++i)
        arr[i] = value; 
        
    }

int main() {
    
    
    int my_scores[]{100,98,90,86,84};
    
    print_array(my_scores,5); //prints all the elements in my_scores array
    set_array(my_scores,5,100); //prints 100 5x
    print_array(my_scores,5);
    print_array(my_scores,5);
    
    
    
    cout << endl;
    
    return 0;
    
    }