#include "Transaction.h"
#include<iostream> 

void loadTransactions(){

}

void saveTransaction(){

}


std::vector<Transaction> transactions; 

void addTransaction(){
    Transaction transaction; 
    std::cout << "Enter category :" << std::endl; 
    std::cin >> transaction.Category; 
    std::cout << "Enter amount :" << std::endl; 
    std::cin >> transaction.Amount; 
    if(transaction.Amount < 0){
        std::cout << "Amount can only be positive";
        return; 
    }
    std::cout << "Enter date :" << std::endl; 
    std::cin >> transaction.Date; 
    char ch = ' ';
    std::cout << "Is this income? Y|N" << std::endl; 
    std::cin >> ch; 
    if(ch == 'Y' || ch == 'y'){
        transaction.IsIncome = true; 
    }
    else if(ch == 'N' || ch == 'n'){
        transaction.IsIncome = false; 
    }
    else{
        std::cout << "Invalid input"; 
        return; 
    }

    transactions.push_back(transaction); 
    saveTransaction(); 
}

void viewTransactions(){
    if(transactions.size() == 0){
        std::cout << "No completed transactions exist";
        return; 
    }

    for(auto transaction : transactions){
        std::cout << "Category: " << transaction.Category << std::endl; 
        std::cout << "Amount: " << transaction.Amount << std::endl; 
        std::cout << "Date: " << transaction.Date << std::endl; 
        std::cout << "Is Income: " << (transaction.IsIncome ? "Income" : "Expense") << std::endl; 
    }
}   

void showFinancialSummary(){
    if(transactions.size() == 0){
        std::cout << "No completed transactions exist";
        return; 
    }
    double totalIncome = 0; 
    double totalExpense = 0; 
    for(auto transaction : transactions){
        if(transaction.IsIncome){
            totalIncome += transaction.Amount; 
        }
        else{
            totalExpense += transaction.Amount; 
        }
    }
    std::cout << "Total Income: " << totalIncome << std::endl;
    std::cout << "Total Expense: " << totalExpense << std::endl; 
    std::cout << "Balance: " << totalIncome - totalExpense << std::endl; 
}



int main(){
    std::cout << "Personal Financial Analyzer V0.1" << std::endl; 
    std::cout << "*********************************" << std::endl; 
    int choice = 100; 
 
while(choice!=0){
    std::cout << "Choose one of the options below: " << std::endl; 

    std::cout << "1. View Transactions" << std::endl; 
    std::cout << "2. Add Transaction" << std::endl; 
    std::cout << "3. View Financial Summary" << std::endl; 
    std::cout << "0. Exit" << std::endl;  
    std::cin >> choice;
    switch(choice){
        case 1: 
            viewTransactions(); 
            break; 
        case 2:
            addTransaction(); 
            break; 
        case 3: 
            showFinancialSummary(); 
            break; 
        case 0: 
            std::cout << "Exiting now....";
            exit(0); 
            break; 
        default: 
            std::cout << "Invalid option entered"; 
            break; 
    
    }
}
    return 0; 

    
}