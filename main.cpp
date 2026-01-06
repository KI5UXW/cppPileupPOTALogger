#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "functions.h"

int main(){
    std::cout<<"UXW-CPPL"<<std::endl;
    std::cout<<"KI5UXW's C++ Pileup POTA Logger"<<std::endl;
    std::string workingFilename = initializeFilename();
    std::vector<std::string> activationData = getActivationData();
    return 0;
}

std::vector<std::string> getActivationData(){
    std::vector<std::string> activData;

    std::cout<<"What's your callsign? (Ex. KI5UXW)"<<std::endl;
    std::string inputData;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's your name? (Ex. James Ervin)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's your park name? (Ex. Choke Canyon State Park)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's your park number? (Ex. US-2997)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's your county? (Ex. TX, McMullen)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's your state? (Ex. TX)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's your country? (Ex. United States)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's your transmit power in watts? (Ex. 100)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's your frequency? (Ex. 28.333)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's your mode? (Ex. SSB)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<"What's the date in UTC? (Ex. 20260104)"<<std::endl;
    std::getline(std::cin, inputData);
    activData.push_back(inputData);

    std::cout<<activData.size()<<std::endl;

    for (long unsigned int n = 0; n < activData.size(); n++){
        std::cout<< activData.at(n)<<" ";
    }

    return activData;

}

std::vector<std::string> getContactData(){
    std::vector<std::string> contactData;

    std::cout<<"Callsign? "<<std::endl;
    std::string inputData;
    std::getline(std::cin, inputData);
    contactData.push_back(inputData);

    std::cout<<"UTC Time?"<<std::endl;
    std::getline(std::cin, inputData);
    contactData.push_back(inputData);

    std::cout<<"Signal Report Sent? "<<std::endl;
    std::getline(std::cin, inputData);
    contactData.push_back(inputData);

    std::cout<<"Signal Report Recieved?"<<std::endl;
    std::getline(std::cin, inputData);
    contactData.push_back(inputData);
    return contactData;
}

std::string initializeFilename(){
    std::string inputData;
    std::getline(std::cin, inputData);
    inputData.append(".adi");
    std::cout<<inputData<<std::endl;
    return inputData;
}