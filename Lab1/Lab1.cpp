// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//O problema de tip POO, ierarhii de clase, de inclus tipuri de polimorfism, interfete, clase abstracte
//Constructori, destructori, cat mai multe obiecte, ierarhie mare, 
//Emag, magazin online


#include <iostream>
#include "Basket.h"
#include "Customer.h"
#include "Electronics.h"
#include "Gardening.h"
#include "Groceries.h"
#include "InStoreCustomer.h"
#include "OnlineCustomer.h"

using namespace std;

int main() {
   
    Electronics laptop("Laptop", 3000, "Portabil", 220);
    Gardening lopata("Lopata", 50, "Gradinarit", 2);
    Groceries paine("Paine", 5, "Alimente", 1);

    Electronics telefon("iPhone", 6000, "Portabil", 220);
    Gardening foarfece("Foarfece", 20, "Gradinarit", 2);
    Groceries lapte("Lapte", 6, "Alimente", 1);

   
    Basket cos;
    cos.add(laptop);
    cos.add(lopata);
    cos.add(paine);
    cos.add(telefon);
    cos.add(foarfece);
    cos.add(lapte);

   
    cout << "Produsele din Magazin:" << endl;
    cos.printProducts();
    cout << "Cost total: " << cos.computeTotalCost() << " RON" << endl;
    cout << "----------------------" << endl;

    vector<Customer*> cumparatori;
    InStoreCustomer* clientMagazin = new InStoreCustomer({ laptop, paine }, "Ion", "Popescu");
    OnlineCustomer* clientOnline = new OnlineCustomer({ lopata, paine, telefon, lapte }, 25, "Maria", "Ionescu");
    InStoreCustomer* clientMagazin2 = new InStoreCustomer({ telefon, lapte }, "George", "Vasilescu");

    cumparatori.push_back(clientMagazin);
    cumparatori.push_back(clientOnline);
    cumparatori.push_back(clientMagazin2);
  
    for (const auto& client : cumparatori) {
        cout << "Client: " << client->getName() << " " << client->getSurname() << " - Tip: " << client->getCustomerType() << endl;
        cout << "Produse Cumparate: \n";
        static_cast<InStoreCustomer*>(client)->printCos();
        cout << "Costul produselor cumparate: " << static_cast<InStoreCustomer*>(client)->getTotalCost() << " RON" << endl;
        cout << "----------------------" << endl;
    }

    for (auto client : cumparatori) {
        delete client;
    }


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
