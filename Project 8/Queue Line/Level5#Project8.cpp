#include <iostream>
#include "clsQueueLine.h"
using namespace std;
int main()
{
    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubscribtionsQueue("B0", 5);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();


    cout << "\nPay Bills Queue Info :\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();

    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();
    cout << "\nPay Bills Queue After Serving One client\n";
    PayBillsQueue.PrintInfo();

    cout << "\nSubscriptions Queue Info:\n";

    SubscribtionsQueue.IssueTicket();
    SubscribtionsQueue.IssueTicket();
    SubscribtionsQueue.IssueTicket();


    SubscribtionsQueue.PrintInfo();

    SubscribtionsQueue.PrintTicketsLineRTL();
    SubscribtionsQueue.PrintTicketsLineLTR();

    SubscribtionsQueue.PrintAllTickets();

    SubscribtionsQueue.ServeNextClient();
    cout << "\nSubscriptions Queue After Serving One client\n";
    SubscribtionsQueue.PrintInfo();







    return 0;

}

