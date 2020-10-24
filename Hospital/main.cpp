/*
 * main.cpp
 * Author: Nicholas Kawwas
 * Completed: March, 2020
 * Purpose: Implements Hospital Management System
*/

#include <iostream>
#include "Hospital.h"

using namespace std;

int main() {
	int Button;
	
	DateTime* admission = new DateTime(25, 2, 2019, 4, 5, 6);
	DateTime* discharge = new DateTime(30, 2, 2019, 7, 8, 9);

	Hospital* Healthcare = new Hospital();

	Doctor* Alpha = new Doctor("Peter", "A1", "Neurologist"); //ID 1
	Doctor* Bravo = new Doctor("Nicholas", "A2", "Cardiologue"); //ID 2

	Outpatient *Charlie = new Outpatient("George", *admission, *Alpha); //ID 3
	Alpha->add_list(*Charlie);
	Inpatient* Delta = new Inpatient("John", *admission, *discharge, *Bravo); //ID 4
	Bravo->add_list(*Delta);
	Inpatient* Exodus = new Inpatient("Robert", *admission, *discharge, *Alpha); //ID 5
	Alpha->add_list(*Exodus);
	Inpatient* Omega = new Inpatient("Natalie", *admission, *discharge, *Bravo); //ID 6
	Bravo->add_list(*Omega);

   //Print admission Date & Time
    admission->print();
    
    //Print discharge Date & Time
    discharge->print();
    
    //Print Doctor Alpha
    Alpha->print();
    
    //Print Doctor Bravo
    Bravo->print();
    
    //Print Outpatient Charlie
    Charlie->print();
    
    //Print Inpatient Delta
    Delta->print();
    
    //Print Inpatient Exodus
    Exodus->print();
    
    //Print Inpatient Omega
    Omega->print();
    
    //Add Alpha to Health care
    Healthcare->addDoctor(*Alpha);
    
    //Add Bravo to Health care
    Healthcare->addDoctor(*Bravo);
    
    //Add Delta to Health care
    Healthcare->addpatients(*Delta);
    
    //Add Exodus to Health care
     Healthcare->addpatients(*Exodus);
    
    //Add Omega to Health care
    Healthcare->addpatients(*Omega);
    
    //Print All Doctors from HealthCare
    Healthcare->printDoc();
    
    //Print All Patients from HealthCare
    Healthcare->printpatients();

    //Delete Doctor Alpha from HealthCare
     Healthcare->delDoctor(*Alpha);
    
    //Delete Doctor Bravo from HealthCare
    Healthcare->delDoctor(*Bravo);
    
    //Delete Inpatient Delta from HealthCare
    Healthcare->Delpatients(*Delta);
    
    //Delete Inpatient Exodus from HealthCare
    Healthcare->Delpatients(*Exodus);
    
    //Delete Inpatient Omega from HealthCare
    Healthcare->Delpatients(*Omega);
    
    //Print Patients of Alpha
    Alpha->print_list();

    //Print Patients of Bravo
    Bravo->print_list();

    //Search certain patient with ID
    int ID;
    cout << "Please enter ID (be aware the patient has to be added to health care) : " << endl;
    cin >> ID;
    Healthcare->search_print(ID);

    //End of Program
    cout << "Thank you!" << endl;
    cout << "Hope to see you soon!" << endl;
    
    return 0;

    do {
        cout << "Enter number from 1 to 24:" << endl<<endl;

        cout << "1.Print admission Date & Time" << endl;
        cout << "2.Print discharge Date & Time" << endl;
        cout << "3.Print Doctor Alpha" << endl;
        cout << "4.Print Doctor Bravo" << endl;
        cout << "5.Print Outpatient Charlie" << endl;
        cout << "6.Print Inpatient Delta" << endl;
        cout << "7.Print Inpatient Exodus" << endl;
        cout << "8.Print Inpatient Omega" << endl;
        cout << "9.Print all!!!" << endl;
        cout << "10.Add Alpha to Health care" << endl;
        cout << "11.Add Bravo to Health care" << endl;
        cout << "12.Add Delta to Health care" << endl;
        cout << "13.Add Exodus to Health care" << endl;
        cout << "14.Add Omega to Health care" << endl;
        cout << "15.Print Doctors from Health care" << endl;
        cout << "16.Print all Inpatient registered to Health care" << endl;
        cout << "17.Delete Doctor Alpha from health care" << endl;
        cout << "18.Delete Doctor Bravo from health care" << endl;
        cout << "19.Delete Inpatient Delta from health care" << endl;
        cout << "20.Delete Inpatient Exodus from health care" << endl;
        cout << "21.Delete Inpatient Omega from health care" << endl;
        cout << "22.Print patients of Alpha" << endl;
        cout << "23.Print patient of Bravo" << endl;
        cout << "24.Search certain patient with ID" << endl;
        cout << "25.End Program" << endl;
        cin >> Button;
        
		switch (Button) {
		case 1:
			admission->print();
			break;

		case 2:
			discharge->print();
			break;

		case 3:
			Alpha->print();
			break;

		case 4:
			Bravo->print();
			break;
                
		case 5:
			Charlie->print();
			break;

		case 6:
			Delta->print();
			break;

		case 7:
			Exodus->print();
			break;

		case 8:
			Omega->print();
			break;

		case 9:
			admission->print();
			cout << endl << endl << endl << endl;
			discharge->print();
			cout << endl << endl << endl << endl;
			Alpha->print();
			cout << endl << endl << endl << endl;
			Bravo->print();
			cout << endl << endl << endl << endl;
			Charlie->print();
			cout << endl << endl << endl << endl;
			Delta->print();
			cout << endl << endl << endl << endl;
			Exodus->print();
			cout << endl << endl << endl << endl;
			Omega->print();
			cout << endl << endl;
			break;

		case 10:
			Healthcare->addDoctor(*Alpha);
			break;

		case 11:
			Healthcare->addDoctor(*Bravo);
			break;

		case 12:
			Healthcare->addpatients(*Delta);
			break;

		case 13:
			Healthcare->addpatients(*Exodus);
			break;

		case 14:
			Healthcare->addpatients(*Omega);
			break;

		case 15:
			Healthcare->printDoc();
			break;
                
		case 16:
			Healthcare->printpatients();
			break;


		case 17:
			Healthcare->delDoctor(*Alpha);
			break;

		case 18:
			Healthcare->delDoctor(*Bravo);
			break;
			
		case 19:
			Healthcare->Delpatients(*Delta);
			break;
                
		case 20:
			Healthcare->Delpatients(*Exodus);
			break;

		case 21:
			Healthcare->Delpatients(*Omega);
			break;

		case 22:
			Alpha->print_list();
			break;

		case 23:
			Bravo->print_list();
			break;

		case 24:
			int ID;
			cout << "Please enter ID (be aware the patient has to be added to health care) : " << endl;
			cin >> ID;
			Healthcare->search_print(ID);
			break;
                
		case 25:
			cout << "Thank you!" << endl;
			cout << "Hope to see you soon!" << endl;
			return 0;
		}
        
    } while (Button>0 && Button<26);

}
