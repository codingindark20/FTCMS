#include<stdio.h>
#include<stdlib.h>


void main()
{
    char CustomerFName[30];
    char customerLName[30];
    int ServiceName;
    char ServiceType[8];
    char CarRegistrationNo[30];
    char Date[15];
    int TyreNoChanged;
    int PunctureNoRepaired;
    int HeadLightNoChanged;
    int TailLightNoChanged;
    int cost;
    int i;
    int EntryNo;
    int InvoiceNo;
    int strcmp();

    FILE* fp;
        fp = fopen("file.txt","w+");


        

    
    
    
    /*Display company name and service menu*/ 
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Fast Track Car Service Pvt. Ltd>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Service Menu>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("____________________________________________________________________________________________\n");
    printf("   No\tService Type\t\t         Time Consumed(Minutes)\tService Fee\n");
    printf("                                                  \t\tNormal\tUrgent\n________________________________________________________________________________\n");
    printf("  1     Repair punctured car tyre/piece  10\t\t\tRM5\tRM6\n  2     Car tyre change / piece          15\t\t\tRM150   RM160\n  3     Mineral Oil Change               20\t\t\tRM80    RM90\n  4     Synthetic Oil Change             20\t\t\tRM130   RM140\n  5     Battery Change                   5 \t\t\tRM200   RM210\n  6     Head light bulb change / piece   5 \t\t\tRM6     RM8\n  7     Tail Light bulb change / piece   5 \t\t\tRM6     RM8\n  8     Car wash                         10\t\t\tRM10    RM12\n");
    printf("________________________________________________________________________________\n\n");
    
    printf("Enter the number of entries to be made\n");
    scanf("%d",&EntryNo);
    
    /*Input from User*/
    printf("Enter today's date(dd/mm/yyyy)...\n");
    scanf("%s",Date);

    for(i=1; i<=EntryNo; i++)
    {
       printf("Enter customer's first name..\n");
        scanf("%s",CustomerFName);
        printf("Enter customer's last name...\n");
        scanf("%s",customerLName);
        printf("Enter Car Registration Number...\n");
        scanf("%s",CarRegistrationNo);
        printf("Choose the service(enter number)...\n");
        scanf("%d",&ServiceName);
        printf("Enter 'Normal' for normal service and 'Urgent' for urgent service...\n");
        scanf("%s",ServiceType);
    
      
            /*process if service is normal*/
        if(strcmp(ServiceType,"Normal")==0 || strcmp(ServiceType,"normal")==0)
        {   
            switch(ServiceName)
            {
                case 1:
                    printf("Enter the number of punctured to be repaird...\n");
                    scanf("%d",&PunctureNoRepaired);
                    printf("________________________Invoice_____________________\n");
                
                    printf("\tDate : %s\n",Date);
                    fprintf(fp,"\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Repair punctured car tyre\n");
                    fprintf(fp,"\tService Taken : Repair punctured car tyre\n");
                    printf("\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    cost = PunctureNoRepaired * 5;
                    printf("\tCost : RM%d\n\n",cost);
                    fprintf(fp,"\tCost : RM%d\n\n",cost);
                    fclose(fp);
                    break;
            
                case 2:
                    printf("Enter the number of tyre to be changed...\n");
                    scanf("%d",&TyreNoChanged);
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Car tyre change\n");
                    printf("\tService Type : %s\n",ServiceType);
                    cost = TyreNoChanged * 150;
                    printf("\tCost : RM%d\n\n",cost);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Car tyre change\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tCost : RM%d\n\n",cost);
                    fclose(fp);
                    break;
            
                    case 3:
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Mineral Oil change\n");
                    printf("\tService Type : %s\n",ServiceType);
                    printf("\tcost : RM80\n\n");
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Mineral Oil change\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tcost : RM80\n\n");
                    fclose(fp);
                    break;
            
                case 4:
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Synthetic Oil change\n");
                    printf("\tService Type : %s\n",ServiceType);
                    printf("\tcost : RM130\n\n");
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Synthetic Oil change\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tcost : RM130\n\n");
                    fclose(fp);
                    break;
            
                case 5:
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Battery Change\n");
                    printf("\tService Type : %s\n",ServiceType);
                    printf("\tcost : RM200\n\n");
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Battery Change\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tcost : RM200\n\n");
                    fclose(fp);
                    break;
            
                case 6:
                    printf("Enter the number of head light bulb to be changed...\n");
                    scanf("%d",&HeadLightNoChanged);
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Head Light bulb changed\n");
                    printf("\tService Type : %s\n",ServiceType);
                    cost = HeadLightNoChanged * 6;
                    printf("\tCost : RM%d\n\n",cost);
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Head Light bulb changed\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    cost = HeadLightNoChanged * 6;
                    fprintf(fp,"\tCost : RM%d\n\n",cost);
                    fclose(fp);
                    break;
            
                case 7:
                    printf("Enter the number of tail light bulb to be changed...\n");
                    scanf("%d",&TailLightNoChanged);
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Tail Light bulb changed\n");
                    printf("\tService Type : %s\n",ServiceType);
                    cost = TailLightNoChanged * 6;
                    printf("\tCost : RM%d\n\n",cost);
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Tail Light bulb changed\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tCost : RM%d\n\n",cost);
                    fclose(fp);
                    break;
            
                case 8:
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Car Wash\n");
                    printf("\tService Type : %s\n",ServiceType);
                    printf("\tcost : RM10\n\n");
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Car Wash\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tcost : RM10\n\n");
                    fclose(fp);
                    break;
            
                default:
                    printf("Error! The input is incorrect! Please try again.");
            }
        }
    
    
    
        /*Process if Service is urgent*/
        else if(strcmp(ServiceType,"Urgent")==0 || strcmp(ServiceType,"urgent")==0)
        {
            switch(ServiceName)
            {
                case 1:
                    printf("Enter the number of punctured to be repaird...\n");
                    scanf("%d",&PunctureNoRepaired);
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    fprintf(fp,"\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Repair punctured car tyre\n");
                    fprintf(fp,"\tService Taken : Repair punctured car tyre\n");
                    printf("\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    cost = PunctureNoRepaired * 6;
                    printf("\tCost : RM%d\n\n",cost);
                    fprintf(fp,"\tCost : RM%d\n\n",cost);
                    fclose(fp);
                    break;
            
                case 2:
                    printf("Enter the number of tyre to be changed...\n");
                    scanf("%d",&TyreNoChanged);
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Car tyre change\n");
                    printf("\tService Type : %s\n",ServiceType);
                    cost = TyreNoChanged * 160;
                    printf("\tCost : RM%d\n\n",cost);
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Car tyre change\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tCost : RM%d\n\n",cost);
                    fclose(fp);
                    break;
            
                case 3:
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Mineral Oil change\n");
                    printf("\tService Type : %s\n",ServiceType);
                    printf("\tcost : RM90\n\n");
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Mineral Oil change\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tcost : RM90\n\n");
                    fclose(fp);
                    break;
            
                case 4:
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Synthetic Oil change\n");
                    printf("\tService Type : %s\n",ServiceType);
                    printf("\tcost : RM140\n\n");
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Synthetic Oil change\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tcost : RM140\n\n");
                    fclose(fp);
                    break;
            
                case 5:
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Battery Change\n");
                    printf("\tService Type : %s\n",ServiceType);
                    printf("\tcost : RM210\n\n");
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Battery Change\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tcost : RM210\n\n");
                    fclose(fp);
                    break;
            
                case 6:
                    printf("Enter the number of head light bulb to be changed...\n");
                    scanf("%d",&HeadLightNoChanged);
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Head Light bulb changed\n");
                    printf("\tService Type : %s\n",ServiceType);
                    cost = HeadLightNoChanged * 8;
                    printf("\tCost : RM%d\n\n",cost);
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Head Light bulb changed\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tCost : RM%d\n\n",cost);
                    fclose(fp);
                    break;
            
                case 7:
                    printf("Enter the number of tail light bulb to be changed...\n");
                    scanf("%d",&TailLightNoChanged);
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Tail Light bulb changed\n");
                    printf("\tService Type : %s\n",ServiceType);
                    cost = TailLightNoChanged * 8;
                    printf("\tCost : RM%d\n\n",cost);
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Tail Light bulb changed\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tCost : RM%d\n\n",cost);
                    fclose(fp);
                    break;
            
                case 8:
                    printf("________________________Invoice_____________________\n");
                    printf("\tInvoice No : %d\n",InvoiceNo);
                    printf("\tDate : %s\n",Date);
                    printf("\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    printf("\tCar Registration Number : %s\n",CarRegistrationNo);
                    printf("\tService Taken : Car Wash\n");
                    printf("\tService Type : %s\n",ServiceType);
                    printf("\tcost : RM12\n\n");
                    fprintf(fp,"\tInvoice No : %d\n",InvoiceNo);
                    fprintf(fp,"\tDate : %s\n",Date);
                    fprintf(fp,"\tCustomer Name : %s\t%s\n",CustomerFName,customerLName);
                    fprintf(fp,"\tCar Registration Number : %s\n",CarRegistrationNo);
                    fprintf(fp,"\tService Taken : Car Wash\n");
                    fprintf(fp,"\tService Type : %s\n",ServiceType);
                    fprintf(fp,"\tcost : RM12\n\n");
                    fclose(fp);
                    break;
            
                default:
                    printf("Error! The input is wrong! Please try again.");
            
            }    
         }
    
        /*execption handles*/

    
        else
        {
            printf("Error! The input is wrong! Please try again."); 
        }
     
    }
    
}
