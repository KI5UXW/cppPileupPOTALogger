#include <iostream>
#include <string>
#include <vector>
#include "functions.h"

int main(){
    std::cout<<"UXW-CPPL"<<std::endl;
    std::cout<<"KI5UXW's C++ Pileup POTA Logger"<<std::endl;
    getActivationData();
    return 0;
}

std::vector<std::string> getActivationData(){
    std::vector<std::string> activData;

    std::cout<<"What's your callsign? (Ex. KI5UXW)"<<std::endl;
    std::string inputData;
    std::cin >> inputData;
    activData.push_back(inputData);

    std::cout<<"What's your name? (Ex. James Ervin)"<<std::endl;
    std::string inputData;
    std::cin >> inputData;
    activData.push_back(inputData);

    std::cout<<"What's your park name (Ex. Choke Canyon State Park)?"<<std::endl;
    std::string inputData;
    std::cin >> inputData;
    activData.push_back(inputData);

    std::cout<<"What's your park number (Ex. US-2997)?"<<std::endl;
    std::string inputData;
    std::cin >> inputData;
    activData.push_back(inputData);

    std::cout<<"What's your county (Ex. TX, McMullen)?"<<std::endl;
    std::string inputData;
    std::cin >> inputData;
    activData.push_back(inputData);

    std::cout<<"What's your transmit power in watts (Ex. 100)?"<<std::endl;
    std::string inputData;
    std::cin >> inputData;
    activData.push_back(inputData);

    std::cout<<"What's your frequency? (Ex. 28.333)"<<std::endl;
    std::string inputData;
    std::cin >> inputData;
    activData.push_back(inputData);

    std::cout<<"What's your mode? (Ex. SSB)"<<std::endl;
    std::string inputData;
    std::cin >> inputData;
    activData.push_back(inputData);

    for (long unsigned int n = 0; n < activData.size(); n++){
        std::cout<< activData[n]<<" ";
    }
    return activData;
}