 #include <stdio.h>

int main()

{

   int choice,pin,password,anotherTrans,acNumber,transAcNumber; //indicate our variable

   float balance,deposit,withdraw,transfer,totalBalance; //we take a addition variable 'totalBalance'to understand program easily

   balance=100000;

   totalBalance=balance;

   pin=2424;       //assign pin number

   acNumber=6000;  //assign account number for transfer

   printf("Please insert your card\n");

   printf("....Welcome To ATM Machine.....\n");

   printf("Please enter your password: ");

   scanf("%i",&password);

   if(password==pin) //condition

   {

       printf("....YOUR ACCOUNT NAME IS....\nUser Name : Shojib Parag\nAccount No: 6000\n");



       printf("<<<<Select your choice:>>>>\n");

       printf("1.BALANCE\n2.DEPOSITE\n3.WITHDRAW\n4.TRANSFER\n");

       scanf("%i",&choice);

       if (choice==1)  //condition

       {

        printf("Thank You For Selecting Balance\n");

        printf("*********MINI STATEMENT*********\nYour Balance is=%f\n",balance );//indicate miniStatement

        printf("Do You Want another Transaction?\n");

        printf("1.YES\n2.NO\n");

        scanf("%i",&anotherTrans);

            if (anotherTrans==1)

                {

                  printf("1.DEPOSITE\n2.WITHDRAW\n3.TRANSFER\n");

                  scanf("%i",&choice);

                 if (choice==1)

                     {

                       printf("Thank You For Selecting Deposit\n");

                       printf("How Much Do You Want To Deposit?\n");

                       scanf("%f",&deposit);

                       totalBalance=balance+deposit;

                       printf("***********MINI STATEMENT***********\nYour Total Balance Is=%f\n",totalBalance);

                     }

                  else if (choice==2)

                       {

                        printf ("Thank You For Selecting Withdraw\n");

                        printf("How Much Money Do You Want To Withdraw?\n");

                        scanf("%f",&withdraw);

                        totalBalance=totalBalance-withdraw;



                        printf("*********MINI STATEMENT*********\nYour Current Balance Is=%f\n",totalBalance);

                       }

                  else if (choice==3)

                       {

                         printf("Thank You For Selecting Transfer\n");

                         printf("Please enter Account Number:\n");



                         scanf("%i",&transAcNumber);

                        if (acNumber==transAcNumber)

                           {

                               printf("How Much Do You Want To Transfer?\n");

                               scanf("%f",&transfer);

                               printf("Successfully Transfered");

                               totalBalance=totalBalance-transfer;

                               printf("********MINI STATEMENT*******\nYour Current Balance Is =%f\n",totalBalance);

                             }

                        else

                         {

                            printf("INVALID NUMBER\n");

                         }



                      }

                }



                  else if(anotherTrans==2)

                        {

                         printf("THANK YOU\n");

                        }

                    else

                       {

                         printf("Invalid Number\n");

                       }

                      }

        else if (choice==2)

            {

            printf("Thank You For Selecting Deposit\n");

            printf("How Much Do You Want To Deposit?\n");

            scanf("%f",&deposit);

            totalBalance=balance+deposit;

            printf("***********MINI STATEMENT***********\nYour Total Balance Is=%f\n",totalBalance);

            printf("Do You Want another Transaction?\n");

            printf("1.YES\n2.NO\n");

            scanf("%i",&anotherTrans);

            if (anotherTrans==1)

                 {

                  printf("1.WITHDRAW\n2.TRANSFER\n");

                  scanf("%i",&choice);

                  if (choice==1)

                       {

                        printf ("Thank You For Selecting Withdraw\n");

                        printf("How Much Money Do You Want To Withdraw?\n");

                        scanf("%f",&withdraw);

                        totalBalance=totalBalance-withdraw;

                        printf("*********MINI STATEMENT*********\nYour Current Balance Is=%f\n",totalBalance);

                       }

                  else if (choice==2)

                       {

                         printf("Thank You For Selecting Transfer\n");

                         printf("Please enter Account Number:\n");



                         scanf("%i",&transAcNumber);

                        if (acNumber==transAcNumber)

                           {

                               printf("How Much Do You Want To Transfer?\n");

                               scanf("%f",&transfer);

                               printf("Successfully Transfered\n");

                               totalBalance=totalBalance-transfer;

                               printf("********MINI STATEMENT*******\nYour Current Balance Is =%f\n",totalBalance);

                             }

                        else

                         {

                            printf("INVALID NUMBER\n");

                         }



                      }

                }



                  else if(anotherTrans==2)

                        {

                         printf("THANK YOU\n");

                        }

                    else

                       {

                         printf("Invalid Number\n");

                       }

                      }

        else if (choice==3)

           {

            printf ("Thank You For Selecting Withdraw\n");

            printf("How Much Money Do You Want To Withdraw?\n");

            scanf("%f",&withdraw);

              totalBalance=totalBalance-withdraw;

            printf("*********MINI STATEMENT*********\nYour Current Balance Is=%f\n",totalBalance);

             printf("Do You Want another Transaction?\n");

               printf("1.YES\n2.NO\n");

            scanf("%i",&anotherTrans);

            if (anotherTrans==1)

                {

                  printf("1.DEPOSITE\n2.TRANSFER\n");

                  scanf("%i",&choice);

                 if (choice==1)

                     {

                       printf("Thank You For Selecting Deposit\n");

                       printf("How Much Do You Want To Deposit?\n");

                       scanf("%f",&deposit);

                       totalBalance=totalBalance+deposit;

                       printf("***********MINI STATEMENT***********\nYour Total Balance Is=%f\n",totalBalance);

                     }



                  else if (choice==2)

                       {

                         printf("Thank You For Selecting Transfer\n");

                         printf("Please enter Account Number:\n");



                         scanf("%i",&transAcNumber);

                        if (acNumber==transAcNumber)

                           {

                               printf("How Much Do You Want To Transfer?\n");

                               scanf("%f",&transfer);

                               printf("Successfully Transfered\n");

                              totalBalance=totalBalance-transfer;

                               printf("********MINI STATEMENT*******\nYour Current Balance Is =%f\n",totalBalance);

                             }

                        else

                         {

                            printf("INVALID NUMBER\n");

                         }



                      }

                     }



                  else if(anotherTrans==2)

                        {

                         printf("THANK YOU\n");

                        }

                    else

                       {

                         printf("Invalid Number\n");

                       }

                       }

        else if (choice==4)

           {

            printf("Thank You For Selecting Transfer\n");

            printf("Please enter Account Number:\n");

            scanf("%i",&transAcNumber);

            if (acNumber==transAcNumber)

            {

                printf("How Much Do You Want To Transfer?\n");

               scanf("%f",&transfer);

               totalBalance=totalBalance-transfer;

              printf("********MINI STATEMENT*******\nYour Current Balance Is =%f\n",totalBalance);

            }

            else

            {

              printf("INVALID NUMBER\n");

            }







              printf("Do You Want another Transaction?\n");

              printf("1.YES\n2.NO\n");

              scanf("%i",&anotherTrans);

            if (anotherTrans==1)

                {

                  printf("1.DEPOSITE\n2.WITHDRAW\n");

                  scanf("%i",&choice);

                 if (choice==1)

                     {

                       printf("Thank You For Selecting Deposit\n");

                       printf("How Much Do You Want To Deposit?\n");

                       scanf("%f",&deposit);

                      totalBalance=totalBalance+deposit;

                       printf("***********MINI STATEMENT***********\nYour Total Balance Is=%f\n",totalBalance);

                     }

                  else if (choice==2)

                       {

                        printf ("Thank You For Selecting Withdraw\n");

                        printf("How Much Money Do You Want To Withdraw?\n");

                        scanf("%f",&withdraw);

                       totalBalance=totalBalance-withdraw;

                        printf("*********MINI STATEMENT*********\nYour Current Balance Is=%f\n",totalBalance);

                       }
                       }
                        else if(anotherTrans==2)
                        {

                        printf("THANK YOU\n");

                        }

                    else

                       {

                         printf("Invalid Number\n");

                       }
                    }
                      else
                    {

            printf("Invalid Number\n");

            }
            }

    else if(password!=pin) //condition

      {

       printf("Your password is incorrect\n");

      }

}
