#include <iostream>
using namespace std;


string fruits[4]={"peach", "apple", "guava", "watermelon"};
int price[4]={60,70,40,30};
int priceCalc(string, int);

main()
{
    bool NextFruit = true;
    string inputFruit;
    int inputKG;
    int totalPrice = 0;
    int currentFruitPrice;
    
    while(NextFruit)
    {
        cout << "Enter name of fruit: ";
        cin >> inputFruit;
        cout << "Enter number of kgs that you want to buy: ";
        cin >> inputKG;
        currentFruitPrice = priceCalc(inputFruit,inputKG);
        if(currentFruitPrice==-1)
        {
            cout << "Enter a valid fruit" << endl;
            continue;
        }
        totalPrice+=currentFruitPrice;
        cout << "would you like to buy another fruit? ";
        cin >> NextFruit;
    }
    cout << totalPrice;
}

int priceCalc(string fruit, int unitPrice)
{
    int cost = -1;
    for(int i = 0; i <4;i++)
    {
        if(fruit==fruits[i])
        {
            cost = price[i]*unitPrice;
        }
    }
    return cost;
}