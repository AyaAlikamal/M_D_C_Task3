#include <iostream>
#include <vector>
using std::string;

class Resturant{
string Resturant_Name;
vectro <Order>*order;
User user();
Order order();
Resturant(string user_name ,double money,string order_name, double price, string resturant_name){
Resturant_Name= resturant_name;
user.User_Name = user_name;
user.Money = money;
order.Order_Name = order_name;
order.Price = price;
}
void Choose_Resturant(){
    std::cout<<"Please Enter The Resturant Name You Want to Order From ";
    std::cin>>Resturant_Name;
}

class Order{
public:
string Order_Name;
double Price;
Order(){}
void Checking_Money(double money){
if(money > Price){
    std::cout<<"The Order is prepared\n";
}
else{
    std::cout<<"Your Money is Less than tha order price\n";
}
}
};

class User{
public:
string User_Name;
double Money;
User(){}
double Add_Money(double money){
    std::cout<<"Please Enter The Money You Want to Insert ";
    std::cin>>money;
    Money = money;
    return Money;
}
};
};

