// // 4
// #include<iostream>
// using namespace std;
// template <typename type>
// class Stack{
//   type *stack;
//   int top;
//   public:
//     Stack(){
//       stack=new type[10];
//       top=-1;
//     }
    
//     void push(type x){
//       if(top==9) cout<<"Stack Overflow"<<endl;
//       else stack[++top]=x;
//     }

//     void display(){
//       if(top==-1) cout<<"Stack is Empty"<<endl;
//       else
//       for(int i=top; i>=0; i--){
//         cout<<stack[i]<<endl;
//       }
//     }

//     inline type pop(){
//       if(top>=0){
//         type tmp=stack[top];
//         stack[top--]=0;
//         return tmp;
//       } else{
//         return -1;
//       }
//     }

//     ~Stack(){
//       delete[] stack;
//     }

// };
// int main(void){
//   Stack<int> x;
//   int ch;
//   do{
//     cout<<endl<<"Stack Implementation without STL"<<endl;
//     cout<<"--------------------------------"<<endl;
//     cout<<"1. Push"<<endl;
//     cout<<"2. Pop"<<endl;
//     cout<<"3. Display"<<endl;
//     cout<<"4. Exit"<<endl;
//     cout<<"Enter your choice: "; cin>>ch;
//     switch(ch){
//       case 1:
//         int tmp;
//         cout<<endl<<"Enter the element to be pushed: "; cin>>tmp;
//         x.push(tmp);
//         break;
//       case 2:
//         tmp=x.pop();
//         if(tmp==-1) cout<<endl<<"Stack Underflow"<<endl;
//         else cout<<endl<<"Popped element: "<<x.pop()<<endl;
//         break;
//       case 3:
//         cout<<endl<<"Stack: "<<endl;
//         x.display();
//       case 4:
//         break;
//       default:
//         cout<<endl<<"Invalid choice."<<endl;
//     }
//     if(ch==4) break;
//   } while(1);
// }

// // 5
// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main() {
//     srand(time(0));

//     vector<int> prizeAmounts = {100, 200, 300, 400, 500};

//     int input;
//     cout << "Enter an integer: ";
//     cin >> input;

//     int randomNum = rand() % 10 + 1;

//     int p = input * randomNum;

//     int prizeIndex = p % prizeAmounts.size();
//     int prizeAmount = prizeAmounts[prizeIndex];

//     cout << "Random Number: " << randomNum << endl;
//     cout << "Product (p): " << p << endl;
//     cout << "Prize Amount: $" << prizeAmount << endl;

//     return 0;
// }
