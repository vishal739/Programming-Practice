#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    int Tone_twoPM_slots=0 , Tthree_four_PM_slots=0 , Tfive_six_PM_slots=0, Tseven_eight_pm_slots=0;
    int Aone_twoPM_slots=0 , Athree_four_PM_slots=0, Afive_six_PM_slots=0, Aseven_eight_pm_slots=0;
    int Ione_twoPM_slots=0 , Ithree_four_PM_slots=0, Ifive_six_PM_slots=0, Iseven_eight_pm_slots=0;

    cout << "Manage available slots" << endl;
    cout << "\nNumber of slots for 1-2 PM : " << endl;
    cin >> Tone_twoPM_slots;
    cout << "\nNumber of slots for 3-4 PM : " << endl;
    cin >> Tthree_four_PM_slots;
    cout << "\nNumber of slots for 5-6 PM : " << endl;
    cin >> Tfive_six_PM_slots;
    cout << "\nNumber of slots for 7-8 PM : " << endl;
    cin >> Tseven_eight_pm_slots;

    x:
    cout << "Welcome to FYD Paid Scrims" << endl;
    cout << "Please choose Timing for Paid slot" << endl;
    cout << "1) 1-2 PM" << endl;
    cout << "2) 3-4 PM" << endl;
    cout << "3) 5-6 PM" << endl;
    cout << "4) 7-9 PM" << endl;
    cout << "5)Information on Available slots" << endl;
    cout << "6)exit" << endl;

    cout << "Type your Choice" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "No. of Slots you want to book" << endl;
        cin >> quant;
        if (Tone_twoPM_slots - Aone_twoPM_slots >= quant)
        {
            Aone_twoPM_slots = Aone_twoPM_slots + quant;
            Ione_twoPM_slots = Ione_twoPM_slots + (quant * 50);
            cout << "Order of " << quant << " slots recived for 1-2 PM Paid Scrims "<<endl<<endl;
        }
        else{
            cout << "Sorry only " << Tone_twoPM_slots - Aone_twoPM_slots << "No. of slots are Available in this Timing" << endl;
        }
        break;
    
   
    case 2:
        cout << "No. of Slots you want to book" << endl;
        cin >> quant;
        if (Tthree_four_PM_slots - Athree_four_PM_slots >= quant)
        {
            Athree_four_PM_slots = Athree_four_PM_slots + quant;
            Ithree_four_PM_slots = Ithree_four_PM_slots + (quant * 50);
            cout << "Order of " << quant << " slots recived for 3-4 PM Paid Scrims "<<endl<<endl;
        }
        else
            {cout << "Sorry only " << Tthree_four_PM_slots - Athree_four_PM_slots << "No. of slots are Available in this Timing" << endl
                 << endl;}
        break;
    
   
    case 3:
        cout << "No. of Slots you want to book" << endl;
        cin >> quant;
        if (Tfive_six_PM_slots - Afive_six_PM_slots >= quant)
        {
            Afive_six_PM_slots = Afive_six_PM_slots + quant;
            Ifive_six_PM_slots = Ifive_six_PM_slots + (quant * 50);
            cout << "Order of " << quant << " slots recived for 5-6 PM Paid Scrims "<<endl<<endl;
        }
        else
            {cout << "Sorry only " << Tfive_six_PM_slots - Afive_six_PM_slots << " No. of slots are Available in this Timing" << endl;}
        break;
    

   
    case 4:
        cout << "No. of Slots you want to book" << endl;
        cin >> quant;
        if (Tseven_eight_pm_slots - Aseven_eight_pm_slots >= quant)
        {
            Aseven_eight_pm_slots = Aseven_eight_pm_slots + quant;
            Iseven_eight_pm_slots = Iseven_eight_pm_slots + (quant * 50);
            cout << "Order of " << quant << " slots recived for 7-8 PM Paid Scrims "<<endl<<endl;
        }
        else
            {cout << "Sorry only " << Tseven_eight_pm_slots - Aseven_eight_pm_slots << " No. of slots are Available in this Timing" << endl;}
        break;

    case 5:
    cout<<"Details of Slots and Sales"<<endl<<endl;

    cout<<"Total Number of Slot we had in 1-2 PM is "<<Tone_twoPM_slots<<endl;
    cout<<"Total Number of Slot Available in 1-2 PM is "<<Tone_twoPM_slots-Aone_twoPM_slots<<endl;
    cout<<"Total Amount of sales of slot in 1-2 PM is "<<Ione_twoPM_slots<<endl<<endl;

    cout<<"Total Number of Slot we had in 3-4 PM is "<<Tthree_four_PM_slots<<endl;
    cout<<"Total Number of Slot Available in 3-4 PM is "<<Tthree_four_PM_slots-Athree_four_PM_slots<<endl;
    cout<<"Total Amount of sales of slot in 3-4 PM is "<<Ithree_four_PM_slots<<endl<<endl;

    cout<<"Total Number of Slot we had in 5-6 PM is "<<Tfive_six_PM_slots<<endl;
    cout<<"Total Number of Slot Available in 5-6 PM "<<Tfive_six_PM_slots-Afive_six_PM_slots<<endl;
    cout<<"Total Amount of sales of slot in 5-6 PM is "<<Ifive_six_PM_slots<<endl<<endl;

    cout<<"Total Number of Slot we had in 7-8 PM is "<<Tseven_eight_pm_slots<<endl;
    cout<<"Total Number of Slot Available in 7-8 PM is "<<Tseven_eight_pm_slots-Aseven_eight_pm_slots<<endl;
    cout<<"Total Amount of sales of slot in 7-8 PM is "<<Iseven_eight_pm_slots<<endl<<endl;
    break;

    case 8:
    exit(0);

        cout << "Please choose Timing for Paid slot" << endl;
    }

goto x;


    return 0;
}