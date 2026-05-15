#include<iostream>
#include "edb/types.hpp"
int main(){
    std::cout<<"Hello from run_backtest!"<<std::endl;   
    edb::SymbolId symbol{123};
    std::cout<<"Symbol ID: "<<symbol.id<<std::endl;
    edb::Timestamp now = std::chrono::system_clock::now();
    std::cout<<"Timestamp: "<< now.time_since_epoch().count() <<std::endl;
    return 0;

}