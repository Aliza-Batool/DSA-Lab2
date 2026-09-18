#include <iostream>
using namespace std;

void analyze_pointer(int *ptr){ 
    cout<<"memory location pointed to by the pointer: "<<ptr<<endl;
    cout<<"value of the integer which the pointer points to: "<<*ptr<<endl;
}
int main() {
int iValue=10;
analyze_pointer(&iValue);

int *Value=new int (1);
analyze_pointer(Value);

delete Value; // Free the dynamically allocated memory
return 0;
}
