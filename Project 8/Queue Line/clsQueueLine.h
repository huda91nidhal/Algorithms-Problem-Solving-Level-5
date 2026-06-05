#pragma once
#include<iostream>
#include"Queue"
#include"clsDate.h"
#include"stack"
using namespace std;
class clsQueueLine
{
private:
	string _Prefix = "";
	int _AverageServeTime = 0;
	int _TotalTicket=0;
	
	class clsTickets
	{
	private:
		short _Number = 0;
		string _Prefix;
		string _TicketTime;
		short _WaitingClients = 0;
		short _AverageServeTime = 0;
		short _ExpectedServeTime = 0;
	public:
		clsTickets(string Prefix, short Number, short WaitingClients, short AverageServeTime)
		{
			_TicketTime = clsDate::GetSystemDateTimeString();
			_Prefix = Prefix;
			_WaitingClients = WaitingClients;
			_AverageServeTime = AverageServeTime;

		}
		
		string Prefix()
		{
			return _Prefix;

		}
		
		short Number()
		{
			return _Number;
		}

		string FullNumber()
		{
			return _Prefix + to_string(_Number);
		}

		string TicketTime()
		{
			return _TicketTime;
		}

		short WaitingClients()
		{
			return _WaitingClients;
		}

		short ExpectedServeTime()
		{
			return _AverageServeTime * _WaitingClients;
		}

		void Print()
		{
			cout << "\n\t\t\t  _______________________\n";
			cout << "\n\t\t\t\t    " << FullNumber();
			cout << "\n\n\t\t\t    " << _TicketTime;
			cout << "\n\t\t\t    Wating Clients = " << _WaitingClients;
			cout << "\n\t\t\t      Serve Time In";
			cout << "\n\t\t\t       " << ExpectedServeTime() << " Minutes.";
			cout << "\n\t\t\t  _______________________\n";


		}

	};

public:
	queue <clsTickets> QueueLine;

	clsQueueLine(string Prefix, short AverageServeTime)
	{
		_Prefix = Prefix;
		_AverageServeTime = AverageServeTime;
		_TotalTicket = 0;
	}

	void IssueTicket()
	{
		_TotalTicket++;
		clsTickets Tickets (_Prefix , _TotalTicket, WaitingClients(), _AverageServeTime);
		QueueLine.push(Tickets);

	}

	int WaitingClients()
	{
		return QueueLine.size();
	}

	string WhoIsNext()
	{
		if (QueueLine.empty())
			return "No Client Left.";
		else
			QueueLine.front().FullNumber();
	}

	bool ServeNextClient()
	{
		if (QueueLine.empty())
			return false;
		else
		    QueueLine.pop();
		return true;
	}

	short ServedClients()
	{
		return _TotalTicket - WaitingClients();
    }

	void PrintInfo()
	{
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t\tQueue Info";
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t    Prefix   = " << _Prefix;
		cout << "\n\t\t\t    Total Tickets   = " << _TotalTicket;
		cout << "\n\t\t\t    Served Clients  = " << ServedClients();
		cout << "\n\t\t\t    Wating Clients  = " << WaitingClients(); ;
		cout << "\n\t\t\t _________________________\n";
		cout << "\n";

	}

	void PrintTicketsLineRTL()
	{	

		if (QueueLine.empty())
			cout << "\n\t\tTickects : No Ticketss.";
		else
		    cout << "\nTickets:  ";
		queue<clsTickets> TempQueueLine = QueueLine;
		while (!TempQueueLine.empty())
		{
			clsTickets Ticket = TempQueueLine.front();
			cout << Ticket.FullNumber() << "  <--  ";
			TempQueueLine.pop();
		}
		cout << endl;
	}

	void PrintTicketsLineLTR()
	{
		if (QueueLine.empty())
			cout << "\n\t\tTickects : No Ticketss.";
		else
			cout << "\nTickets:  ";
		queue<clsTickets> TempQueueLine = QueueLine;
		stack <clsTickets> TempStackLine;
		while (!TempQueueLine.empty())
		{
			TempStackLine.push(TempQueueLine.front());
			TempQueueLine.pop();
		}
		while (!TempStackLine.empty())
		{
			clsTickets Ticket = TempStackLine.top();
			cout <<" "<< Ticket.FullNumber() << "  <--  ";
			TempStackLine.pop();
		}
		    cout << endl;
		
	}

	void PrintAllTickets()
	{
		cout << "\n\n\t\t\t      --- Tickets ---";
		if (QueueLine.empty())
			cout << "\n\n\t\t\t --- No Tickets ---\n";
		queue <clsTickets> TempQueueLine = QueueLine;
		while (!TempQueueLine.empty())
		{
			TempQueueLine.front().Print();
			TempQueueLine.pop();
		}
	}
};

