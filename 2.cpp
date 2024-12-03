// count the animals cat dog and hens and take these as keys and store 5, 6, 7 respectively and output them both by manually and iterating through
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{

    unordered_map<string , int > animal ;  
    animal["cat"] = 5 ; 
    animal["dog"] = 6 ;
    animal["hen"] =  7 ;

    cout << "Animals:\n ";
    cout << "Cat: " << animal["cat"] << endl;   
    cout << "Dog: " << animal["dog"] << endl;   
    cout << "Hen: " << animal["hen"] << endl;

    cout <<"\n\n Now Iterating through  for each loop:\n";
    for(const auto i: animal){
        cout << i.first << ": " << i.second  << endl ;
    }   


    // cout << animal.at("cat") ; 
    return 0;
}