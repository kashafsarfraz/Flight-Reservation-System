#include <iostream>
#include <string>
#include <fstream> // Include for file handling

using namespace std;

void displayFlights() {
  ifstream infile("C:\\Users\\PMLS\\Desktop\\kashaf\\flights.txt");
    string line;

    if (!infile) {
        cout << "Error opening file!" << endl;
        return;
    }
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();
}
string time;// globle varible
void getSourceAndDestination() {
    int source, dest;
    string date, flightNumber,seat_num, userResponse;
    bool flightFound = false;  // To track if flight is found
    
    
     ofstream outFile("C:\\Users\\PMLS\\Desktop\\kashaf\\flight_booking_output.txt");

    // Getting a valid source
    cout << "Enter a source: \nChoose number: \n 1. Islamabad \n 2. Lahore \n 3. Multan \n 4. Karachi " << endl;
    cin >> source;
    while (source < 1 || source > 4) { 
        cout << "Invalid source. Please enter a number between 1 and 4: "; 
        cin >> source;
    }

    // Getting a valid destination
    cout << "Enter a destination: \nChoose number: \n 1. Qatar \n 2. London \n 3. Dubai \n 4. UK \n 5. Turkey " << endl;
    cin >> dest;
    while (dest < 1 || dest > 5) { 
        cout << "Invalid destination. Please enter a number between 1 and 5: "; 
        cin >> dest;
    }

    // Flight Booking Logic
        if (source == 1 && dest == 1) {
        date = "2024-01-07";
        flightNumber = "101";
        seat_num="12A";
        time="12:30";
        cout << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        outFile << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        flightFound = true;
    } else if (source == 1 && dest == 2) { 
        date = "2024-01-06";
        flightNumber = "103";
        seat_num="13A";
        time="02:30 pm";
        cout << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        outFile << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        flightFound = true;
    } else if (source == 2 && dest == 2) {
        date = "2024-05-13";
        flightNumber = "106";
        seat_num="14B";
         time="11:30 pm";
        cout << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        outFile << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        flightFound = true;
    } else if (source == 3 && dest == 1) {
        date = "2024-03-15";
        flightNumber = "107";
        seat_num="15C";
         time="04:00 am";
        cout << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        outFile << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        flightFound = true;
    } else if (source == 3 && dest == 3) {
        date = "2024-07-20";
        flightNumber = "109";
        seat_num="16D";
          time="05:00 am";
        cout << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        outFile << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        flightFound = true;
    } else if (source == 2 && dest == 1) { 
        date = "2024-02-10";
        flightNumber = "102";
        seat_num="12B";
        time="08:00 pm";
        cout << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        outFile << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        flightFound = true;
    } else if (source == 1 && dest == 3) { 
        date = "2024-04-25";
        flightNumber = "105";
        seat_num="13C";
          time="02:00 am";
        cout << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        outFile << "Your flight is booked on " << date << "\n" << " flight number: " << flightNumber << ".\n" << " seat number: " << seat_num << "\n";
        flightFound = true;
    } 
	else {
        cout << "Sorry, no flight available for this source and destination combination.\n";
    }

    // If a flight is found, ask the user if they are okay with the date and time
    if (flightFound) {
        cout << "Are you okay with this date? (yes/no): ";
        cin >> userResponse;

        if (userResponse == "yes" || userResponse == "Yes") {
            cout << "Congratulations! Your flight is booked.\n";
        } else if (userResponse == "no" || userResponse == "No") {
            // Provide alternative dates and times
            cout << "Alternative dates and times:\n";
            if (source == 1 && dest == 1) {
                cout << "Alternative: 2024-02-05  (Flight number 102)\n";
                outFile << "Alternative: 2024-02-05 (Flight number 102)\n";
            } else if (source == 1 && dest == 2) {
                cout << "Alternative: 2024-01-15 at (Flight number 104)\n";
                outFile << "Alternative: 2024-01-15 (Flight number 104)\n";
            } else if (source == 2 && dest == 2) {
                cout << "Alternative: 2024-06-01  (Flight number 107)\n";
                 outFile << "Alternative: 2024-06-01 (Flight number 107)\n";
            } else if (source == 3 && dest == 1) {
                cout << "Alternative: 2024-04-10 (Flight number 110)\n";
                outFile << "Alternative: 2024-04-10  (Flight number 110)\n";
            } else if (source == 3 && dest == 3) {
                cout << "Alternative: 2024-08-05 (Flight number 112)\n";
                 outFile << "Alternative: 2024-08-05  (Flight number 112)\n";
            } 
            cout << "Congratulations! Your flight is booked on the alternative date.\n";
        } else {
            cout << "Invalid response. Please enter 'yes' or 'no'.\n";
        }
    } else {
        // If no flight is found, ask if the user wants to see available flights
        cout << "Could you see the available flights details? (yes/no): ";
        cin >> userResponse;
        if (userResponse == "yes" || userResponse == "Yes") {
            // Display available flights
            displayFlights(); 

            // Ask if user wants to try booking again
            cout << "Would you like to book a flight again? (yes/no): ";
            cin >> userResponse;
            if (userResponse == "yes" || userResponse == "Yes") {
                getSourceAndDestination();  // Recursively call to try again
            } else {
                cout << "Thank you! Exiting the program.\n";
            }
        } else {
            cout << "No available flights for your selected source and destination.\n";
        }
    }
}


struct PassengerDetails {
    string firstname;
    string lastname;
    int age;
    string cnic;
    string passport;
};

// Function to save personal details to a file
void savePersonalDetailsToFile(const PassengerDetails &passenger) {
    ofstream outFile("C:\\Users\\PMLS\\Desktop\\kashaf\\PassengerDetails.txt", ios::out);  
    if (outFile.is_open()) {
        outFile << "Passenger Name: " << passenger.firstname << endl;
        outFile << "Passenger Name: " << passenger.lastname << endl;
        outFile << "Age: " << passenger.age << endl;
        outFile << "CNIC: " << passenger.cnic << endl;
        outFile << "Passport: " << passenger.passport << endl;
        outFile << "----------------------------------------\n";
        outFile.close();
        cout << "\nPersonal details saved successfully.\n";
    } else {
        cout << "\nError saving personal details to file.\n";
    }
}

// Function to save ticket details to a file
void saveTicketDetailsToFile(double ticketPrice, const PassengerDetails &passenger, double basePrice, double extraLuggageCharges, double seatCharge) {
    ofstream outFile("C:\\Users\\PMLS\\Desktop\\kashaf\\TicketDetails.txt", ios::out); 
    if (outFile.is_open()) {
        outFile << "Base Price: Rs." << basePrice << endl;
        outFile << "Extra Luggage Charges: Rs." << extraLuggageCharges << endl;
        outFile << "Seat Charge: Rs." << seatCharge << endl;
        outFile << "Total Ticket Price: Rs." << ticketPrice << endl;
        outFile << "----------------------------------------\n";
        outFile.close();
        cout << "\nTicket details saved successfully.\n";
    } else {
        cout << "\nError saving ticket details to file.\n";
    }
}

// Function for ticket calculation
void calculateTicketPrice(double &ticketPrice) {
    int travelClassOption, seatOption;
    double basePrice = 0;
    double luggageWeight, handCarryWeight;
    double extraLuggageCharges = 0;
    double classMultiplier = 1.0, seatCharge = 0;

    PassengerDetails passenger;

    // Get personal details
    cout << "Enter your first name: ";
    cin >> passenger.firstname;
    
      cout << "Enter your last name: ";
    cin >> passenger.lastname;

    cout << "Enter your age: ";
    cin >> passenger.age;

    cout << "Enter your CNIC: ";
    cin >> passenger.cnic;

    cout << "Enter your passport number: ";
    cin >> passenger.passport;

    // Save personal details to the file
    savePersonalDetailsToFile(passenger);

    cout << "\nSelect your class:\n";
    cout << "1. Economy\n";
    cout << "2. Business\n";
    cout << "3. First Class\n";
    cout << "Enter your choice (1-3): ";
    cin >> travelClassOption;

    if (travelClassOption == 1) {
        classMultiplier = 1.0;
    } else if (travelClassOption == 2) {
        classMultiplier = 1.5;
    } else if (travelClassOption == 3) {
        classMultiplier = 2.0;
    } else {
        cout << "Invalid travel class choice!\n";
        return;
    }
    basePrice = 20000;

    cout << "\nEnter your luggage weight (in kg): ";
    cin >> luggageWeight;
    cout << "Enter your hand carry weight (in kg): ";
    cin >> handCarryWeight;

    if (luggageWeight > 30) {
        extraLuggageCharges += (luggageWeight - 30) * 1000;
    }
    if (handCarryWeight > 10) {
        extraLuggageCharges += (handCarryWeight - 10) * 1000;
    }

    cout << "\nSelect your seat preference:\n";
    cout << "1. Window\n";
    cout << "2. Aisle\n";
    cout << "3. Middle\n";
    cout << "Enter your choice (1-3): ";
    cin >> seatOption;

    if (seatOption == 1) {
        seatCharge = 2000;
    } else if (seatOption == 2) {
        seatCharge = 1000;
    } else if (seatOption == 3) {
        seatCharge = 500;
    } else {
        cout << "Invalid seat choice!\n";
        return;
    }

    ticketPrice = (basePrice * classMultiplier) + seatCharge + extraLuggageCharges;

    // Save ticket details to the file
    saveTicketDetailsToFile(ticketPrice, passenger, basePrice, extraLuggageCharges, seatCharge);
}
int cancellation_status = 0;

bool handle_cancellation() {
    int flight_day, flight_month, flight_year;
    int cancel_day, cancel_month, cancel_year;

    cout << "Enter the flight date (DD MM YYYY): ";
    cin >> flight_day >> flight_month >> flight_year;

    cout << "Enter the cancellation date (DD MM YYYY): ";
    cin >> cancel_day >> cancel_month >> cancel_year;

    int total_flight_days = flight_year * 365 + flight_month * 30 + flight_day;
    int total_cancel_days = cancel_year * 365 + cancel_month * 30 + cancel_day;

    int days_difference = total_flight_days - total_cancel_days;

    if (days_difference <= 3) {
        cout << "Cancellation unsuccessful: No refund within 3 days of the flight." << endl;
        cancellation_status = 0;  // Set global variable to 0 if unsuccessful
        return false;
    } else {
        cout << "Booking cancelled successfully. A refund will be processed." << endl;
        cancellation_status = 1;  // Set global variable to 1 if successful
        return true;
    }
}
string newtime ="0"; // globle varible
bool manageLateFlight(string &updatedTime, string &reason) {
    int secretCode;
    cout << "Enter the secret code: ";
    cin >> secretCode;

    if (secretCode >= 1001 && secretCode <= 1009) {
        cout << "Secret code is valid.\n";

        // Reason for delay selection
        string reasons[] = {
            "Bad Weather",
            "Technical Issues",
            "Air Traffic Congestion"
        };

        cout << "Select the reason for the delay:\n";
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ". " << reasons[i] << endl;
        }

        int choice;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            reason = reasons[choice - 1];
            cout << "Reason for delay: " << reason << endl;
        } else {
            reason = "Unknown Reason";
            cout << "Reason for delay: " << reason << endl;
        }

        // Get updated flight time
        cout << "Enter the updated flight time (HH:MM ): ";
        cin >>  newtime;
        cout << "Updated flight time: " <<  newtime << endl;

        cout << "Flight delay information has been updated successfully.\n";
        return true;
    } else {
        cout << "Invalid secret code! Please try again.\n";
        return false;
    }
}

// Function to display all details
void displayDetails(){

    
    if (cancellation_status) {
        cout << "Booking is canceled ." << endl;
    } else {
    
        ifstream infile("C:\\Users\\user\\Documents\\PassengerDetails.txt"); // Open file for reading
    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) { // Read line by line
            cout << line << endl;
        }
        infile.close(); // Close the file after reading
    } else {
        cout << "Error opening file for reading.\n";
    }
    //display ticket detail
     ifstream ticketFile("C:\\Users\\user\\Documents\\TicketDetails.txt");
        if (ticketFile.is_open()) {
            string line;
            cout << "\nTicket Details:\n";
            while (getline(ticketFile, line)) {
                cout << line << endl;
            }
            ticketFile.close();
        } else {
            cout << "Error opening TicketDetails.txt for reading.\n";
            
        }
         ifstream outputFile("C:\\Users\\user\\Documents\\flight_booking_output.txt");
        if (outputFile.is_open()) {
            string line;
            cout << "\nFlight Booking Output:\n";
            while (getline(outputFile, line)) {
                cout << line << endl;
            }
            outputFile.close();
        } else {
            cout << "Error opening flight_booking_output.txt for reading.\n";
        }
       if(newtime=="0"){
        	cout<<"time:  "<<time<<endl;
		}
        else{
        cout<<"updatedTime :"<<newtime <<endl;	
		} 
    }
}		
	
void submitFeedback() {
    string* firstname = new string;
    string* lastname = new string;
    string* feedback = new string;
    int* rating = new int;

    // Input feedback
    cout << "Enter your first name: ";
    cin >> *firstname;

    cout << "Enter your lastname: ";
    cin >> *lastname;

    cout << "Enter your feedback about the flight and services: ";
    cin.ignore(); 
    getline(cin, *feedback);

    // Input and validate rating
    do {
        cout << "Rate your experience (1 to 5): ";
        cin >> *rating;
        if (*rating < 1 || *rating > 5) {
            cout << "Invalid rating. Please enter a number between 1 and 5." << endl;
        }
    } while (*rating < 1 || *rating > 5);

    // Save feedback to file
    ofstream feedbackFile("feedback.txt", ios::out); 
    if (feedbackFile.is_open()) {
        feedbackFile << "Name: " << *firstname << " " << *lastname << endl;
        feedbackFile << "Rating: " << *rating << "/5" << endl;
        feedbackFile << "Feedback: " << *feedback << endl;
        feedbackFile << "---------------------------" << endl;
        feedbackFile.close();
        cout << "Thank you for your feedback!" << endl;
    } else {
        cout << "Error: Unable to open feedback file." << endl;
    }

    // Clean up dynamic memory
    delete firstname;
    delete lastname;
    delete feedback;
    delete rating;
     firstname=NULL;
     lastname =NULL;
     feedback =NULL;
     rating   =NULL;
    
     
}

// Function to display all feedback
void displayFeedback() {
    ifstream feedbackFile("feedback.txt");
    if (feedbackFile.is_open()) {
        string line;
        cout << "\n=== Feedback Collection ===\n";
        while (getline(feedbackFile, line)) {
            cout << line << endl;
        }
        feedbackFile.close();
    } else {
        cout << "Error: Unable to open feedback file." << endl;
    }
}

// Function to calculate and display the average rating
void calculateAverageRating() {
    ifstream feedbackFile("feedback.txt");
    if (feedbackFile.is_open()) {
        int totalRating = 0;
        int ratingCount = 0;
        string word;

        while (feedbackFile >> word) {
            if (word == "Rating:") {
                int rating;
                feedbackFile >> rating;
                totalRating += rating;
                ratingCount++;
            }
        }
        feedbackFile.close();

        if (ratingCount > 0) {
            double averageRating = (totalRating * 1.0) / ratingCount;
            cout << "\nAverage Rating: " << averageRating << "/5" << endl;
        } else {
            cout << "\nNo ratings found." << endl;
        }
    } else {
        cout << "Error: Unable to open feedback file." << endl;
    }
}

// Feedback module function
void collectFeedback() {
    int choice;

    do {
        cout << "\n--- Feedback Module ---\n";
        cout << "1. Submit Feedback\n";
        cout << "2. View Feedback\n";
        cout << "3. View Average Rating\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                submitFeedback();
                break;
            case 2:
                displayFeedback();
                break;
            case 3:
                calculateAverageRating();
                break;
            case 4:
                cout << "Exiting feedback module. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
}

int main() {
	 cout << "\n...........WELCOME to Flight Reservation System........." << endl;
    char choice;
    int source, dest;
    string date, flightNumber;
    string seatNo;
    string updatedTime, reason;
    bool isCancelled;
    double ticketPrice;

    do {
       
        cout << "1. Flight reservation" << endl;
        cout << "2. Ticket calculation" << endl;
        cout << "3. Late flight management(--For management only--)" << endl;
        cout << "4. Booking cancellation" << endl;
        cout << "5. Display user details" << endl;
        cout << "6. Feedback" << endl;
        cout << "7. Exit" << endl;
        cout<<"-----------------"<<endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case '1': {
                 getSourceAndDestination();
                 cout<<"-----------------"<<endl;
                break;
            }
            case '2': {
                calculateTicketPrice(ticketPrice);
                 cout<<"-----------------"<<endl;
                break;
            }
            case '3': {
                  manageLateFlight(updatedTime,reason);
                   cout<<"-----------------"<<endl;
                break;
            }
            case '4': {
                isCancelled = handle_cancellation();
                 cout<<"-----------------"<<endl;
                break;
            }
            case '5': {
               displayDetails();
                cout<<"-----------------"<<endl;
                break;
            }
            case '6': {
			  
			  collectFeedback();
			   cout<<"-----------------"<<endl;
			   break; 
	       	}
			  
            case '7': {
                cout << "Exiting the program. Goodbye!\n";
                break;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '7');

    return 0;
}


