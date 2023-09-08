#include <iostream>
#include <vector>

using std::string;

class Resturant{
public:
string Resturant_Name;
// vector <Order>*orders;
};

class User{
public:
string User_Name;
double Money;
string Resturant_Name;
User(string user_name, double money){
    User_Name = this->User_Name;
    Money = this->Money;
}
void Set_money(){
std::cout<<"Enter the money you want to add ";
std::cin>>Money;
};
void Get_money(){
std::cout<<"\nthe Money you entered is ";
std::cout<<Money;

};
   
void Set_Name(){
std::cout<<"\nEnter your Name ";
std::cin>>User_Name;
};
void Get_Name(){
std::cout<<"\nyour Name is ";
std::cout<<User_Name;
};

};

class Order{
public:
string Order_Name;
double Order_price;
double Money;
Order(string order_name, double order_price, double money){
    Order_Name = this->Order_Name;
    Order_price = this->Order_price;
    Money = this->Money;
}
void Set_Order(){
    std::cout<<"\nPlease Enter the Order You Want";
    std::cin>>Order_Name;
    std::cout<<"\nPlease Enter the price of the Order";
    std::cin>>Order_price;

    if(Order_price > Money){
        std::cout<<"Your Order will prepared";
    }
    else{
        std::cout<<"The Money you paid is less than the order price";
    }
};

};

int main(){
User user("aya", 300);
user.Set_Name();
user.Set_money();
user.Get_Name();
user.Get_money();
Order order("pizza",200 , 300);
order.Set_Order();
}

