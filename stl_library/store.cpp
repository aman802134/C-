#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product
{
     int productId;
     string productName;
     string productCategory;
};

struct Order
{
     int orderId;
     int productId;
     int quantity;
     string customerId;
     time_t orderDate;
};

int main()
{
     vector<Product> products = {
         {101, "Tea leaves", "Household"},
         {102, "Sugar", "Household"},
         {103, "Tea maker", "Kitchen"},
         {104, "Bulb", "Electricity"},
         {105, "Book", "Stationary"},
     };

     deque<string> recentCustomer = {
         {"C002", "C003", "C004"}};

     recentCustomer.push_back("C005");
     recentCustomer.push_front("C001");

     list<Order> orderHistory = {
         {1, 101, 20, "C003", time(0)},
         {2, 104, 40, "C004", time(0)},
     };
     orderHistory.push_back({3, 105, 2, "C002", time(0)});

     set<string> categories;
     for(const auto &product: products){
          categories.insert(product.productCategory);
     };

     map<int , int> productStock = {
          {101 , 40},
          {102 , 100},
          {103 , 200},
          {104 , 50},
          {105 , 250},
     };

     multimap<string , Order> customerOrder;
     for(const auto &order:orderHistory){
          customerOrder.insert({order.customerId , order});
     };

     unordered_map<string , string> customerData = {
          {"C001", "Aman"},
          {"C002", "Badal"},
     };
}
