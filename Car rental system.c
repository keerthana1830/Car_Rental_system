#include<stdio.h>
#include<string.h>
#define CARS 10


//Function to create a login page

int validation(char username[], char password[]) {
    char validUsername[] = "user123";
    char validPassword[] = "pass123";
    if (strcmp(username, validUsername) == 0 && strcmp(password, validPassword) == 0) {
        return 1; // validation successful
    } else {
        return 0; // validation failed
    }
}


//Function to display the vehicle details

void displayvehicledetails (){
    printf("\n----VEHICLE INFORMATION----");
    printf("\n V1. Car1 : S-Presso = $100 per hour");
    printf("\n V2 .Car2: Swift = $150 per hour");
    printf("\n V3 .Car3: Dzire = $125 per hour");
    printf("\n V4 .Car4: Baleno = $120 per hour");
    printf("\n V5 .Car5: Ertiga = $175 per hour");
    printf("\n V6 .Car6: Brezza = $150 per hour");
    printf("\n V7 .Car7: Ignis = $200 per hour");
    printf("\n V8 .Car8: Wagon R = $100 per hour");
    printf("\n V9 .Car9: City = $200 per hour");
    printf("\n V10 .Car10: Celerio = $175 per hour \n ");
    printf("------------------------------------\n\n\n");
}


int main() {

    //Initiating login Event  
    char username[20];
    char password[20];
    printf("------Login-------\n");
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if (validation(username, password)) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Invalid username or password.\n");
    }
    printf("------------------\n\n\n");
    //Login completed
    

    //check availability of the car 
    displayvehicledetails();

    int Availability[CARS] = {1, 1, 0, 1, 0 ,1 ,0 ,1 ,1 ,1}; 

    printf("----Car Availability Status----\n");

    for (int i = 0; i < CARS; i++) 
    {
        printf("Car %d: %s\n", i + 1, Availability[i] ? "Available" : "Not Available");
    }
    printf("--------------------------------\n\n\n");
     //Availabilty checked 


     //Car selection
    printf("\n-----CAR SELECTION-----\n");
    int carNO;
    printf("Select the carNo to rent : \n");
    scanf("%d" , &carNO);
    if(carNO < 1 || carNO > CARS ) 
    {
        printf("Invalid Selection \n");
    }
    else 
    {
        printf("Car selected successfully . Enjoy Your Ride ! \n\n\n");
    }
    //Car selection completed
    


    //personal details
    struct person{
        char name[50];
        int age;
        char address[200];
        int mobile_number;
    }customer;

    printf("---Enter your Personal Details---\n \n");
  
    printf("Enter your name : \n");
    scanf(" %[^\n]s" ,customer.name);
    printf("Enter your age : \n");
    scanf("%d" ,&customer.age);
    printf("Enter your address : \n");
    scanf(" %[^\n]s" ,customer.address);
    printf("Enter your mobilenumber : \n");
    scanf("%d" ,&customer.mobile_number);
     
    printf("Personal Details received successfully \n");

    printf("---------------------------------------\n\n\n");

    //personal details


    //UPI Payment
    int *ptr1,*ptr2;
    int UPI;
     ptr1=&UPI;
    int amount;
     ptr2=&amount;
    printf("----Payment Details----\n");
    printf("Enter your UPI Mobile number : \n");
    scanf("%d" ,ptr1);
    printf("Enter your Payment amount : \n");
    scanf("%d" ,ptr2);
    printf("---Payment Successful---\n");
    printf("------------------------\n\n\n");

    //Payment completed


    //Canceling Booking

    int cancel;

    printf("Do you want to cancel the booking?\n");
    
    printf("Enter 0 to cancel the booking \n");
    scanf("%d",&cancel);
    if(cancel==0)
    {
        printf("Booking Canceled\n\n");
     //Refund

    printf("-----Refund Processing -----\n");
    printf(" Your UPI mobile number %d \n",*ptr1);
    printf(" Your Payment amount %d \n",*ptr2);
    printf("Refund successfull for the mobile number %d with a payment amount of %d \n ", *ptr1, *ptr2);
    printf("------------------------------\n\n\n");

    //Refund completed
    }
    else 
    {
        printf("Booking Confirmed\n\n");
    }

    //canceled

    printf("******Thanks for booking , Happy Journey ! ******\n");

    return 0;
}


