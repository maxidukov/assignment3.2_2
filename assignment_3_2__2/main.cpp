#include <iostream>

struct account{
  int acc_num;
  std::string owner_name;
  double balance;
};
void mod_balance(double, account*);
void show_acc_details(const account*);

int main() {
  account your_account;
  std::cout << "Введите номер счёта: ";
  std::cin >> your_account.acc_num;
  std::cout << "Введите имя владельца: ";
  std::cin >> your_account.owner_name;
  std::cout << "Введите баланс: ";
  std::cin >> your_account.balance;
  double new_balance;
  std::cout << "Введите новый баланс: ";
  std::cin >> new_balance;
  mod_balance(new_balance,&your_account);
  show_acc_details(&your_account);
}

void mod_balance(double new_balance, account* acc){
  acc->balance = new_balance;
}
void show_acc_details(const account* acc){
   std::cout<<"Ваш счет: "<<acc->owner_name<<", "<<acc->acc_num<<", "<<acc->balance<<"\n";
}
