#include<iostream>
#include<string>
#include<vector>
using namespace std;

int allot_rooms(int qrooms,int qburger, int qpizza ,int qpasta,int qnoodles, int qchickenroll ,int qtacos){
    int arooms;
    int prooms;
    cout <<endl;
    cout << "FINALY SOMEONE ARRIVED TO THIS FREAKY HOTEL "<<endl<<endl;
    char back;
    
    cout << "HOW MANY ROOMS THEY WANT : ";
    cin >> arooms;
    if (qrooms>arooms){
        qrooms -= arooms;
        cout << "HOE MUCH ARE YOU GOING TO CHARGE THEM :";
        cin >> prooms;
    }
    else{
        cout << "OUR HOTLE IS NOT A MANSION BRO WE ARE OUT OF ROOMS ONLY "<<qrooms <<"ARE LEFT "<<endl;
        while(arooms>qrooms){
            cin >> arooms;
        }
    }
    cout << "PRESS X TO RETURN TO THE HOME PAGE :";
    cin >> back;
    if (back!='x'){
        cout<<endl << "COME ON BRO IT WAS EASY,I ONLY ASKED YOU TO JUST PRESS X," <<endl << "ANYWAY I AM TAKING YOU BACK TO THE HOME SCREEN IF YOU WANT TO ALLOT MORE ROOM AGAIN PRESS 1 FROM HOME SCREEN (EVIL LAUGH)HAHAHA :=)"<<endl;
    }

    return 0;
}

int place_order(int& qburger, int& qpizza ,int& qpasta,int& qnoodles, int& qchickenroll ,int& qtacos,int& aburger, int& apizza ,int& apasta,int& anoodles, int& achickenroll ,int& atacos,int& rburger, int& rpizza ,int& rpasta,int& rnoodles, int& rchickenroll ,int& rtacos){
    cout << endl <<endl ;
    int prooms=0,pburger=0 ,ppizza=0, ppasta=0, pnoodles=0, pchickenroll=0, ptacos=0;
    int trooms=0,tburger=0 ,tpizza=0, tpasta=0, tnoodles=0, tchickenroll=0, ttacos=0;
    cout <<"------------------------------------------------------------------------------------------------"<<endl;
    cout << "FINALLY THE COOK IS GOING TO COOK SOMETHING AFTER SO LONG :"<<endl<<endl;
    cout << "ITEM \t\t\t QUANTITY"<<endl;
    cout << "1.>Burger \t\t\t"<<qburger<<endl;
    cout << "2.>Pizaa  \t\t\t" << qpizza<<endl;
    cout << "3.>Pasta  \t\t\t" << qpasta<<endl;
    cout << "4.>Noodles \t\t\t"<<qnoodles<<endl;
    cout << "5.>chicken-rolls  \t\t"<<qchickenroll<<endl;
    cout << "6.>Tacos  \t\t\t"<<qtacos<<endl<<endl;
    cout << "7.>Return to home page "<<endl<<endl;
    int order;
    order=0;
    while(order!=7){
        cout << "SO WHAT DO CUSTOMERS WANT CHOOSE BY THE NUMBER : ";
        cin >> order;
        if (order==1){
            cout << "How many burgers : ";
            cin >> tburger;
            if (tburger>qburger){
                cout << "We ain't got that many burger bro... Only "<<qburger<<"left";
            }
            else{
                cout << "Price per burger : ";
                cin >> pburger;
                qburger = qburger - tburger;
                rburger = rburger +pburger*tburger;
                aburger = aburger +tburger;
            }
        }
        else if (order==2){
            cout << "How many pizza : ";
            cin >> tpizza;
            if (tpizza>qpizza){
                cout << "We ain't got that many pizza bro... Only "<<qpizza<<"left";
            }
            else{
                cout << "Price per pizza : ";
                cin >> ppizza;
                qpizza = qpizza - tpizza;
                rpizza = rpizza +ppizza*tpizza;
                apizza =apizza+tpizza;      
            }
        }
        else if(order==3){
            cout <<"How many pasta : ";
            cin >> tburger;
            if (tpasta>qpasta){
                cout << "We ain't got that many pasta bro... Only "<<qpasta<<"left"<<endl;
            }
            else{
                cout << "Price per pasta : ";
                cin >> ppasta;
                qpasta = qpasta -tburger;
                rpasta = rpasta+ ppasta*tpasta;
                apasta=apasta +tpasta;
            }
        }
        else if(order==4){
            cout << "How much noodles : ";
            cin >>tnoodles;
            if (anoodles>tnoodles){
                cout << "What do you think , Your daddy owns a noodle factory, there are only "<< qnoodles<< "left in the inventory "<<endl;
            }
            else{
                cout << "price per noodles : ";
                cin >> pnoodles;
                qnoodles = qnoodles - tnoodles;
                rnoodles = rnoodles + pnoodles*tnoodles;
                anoodles += tnoodles;
            }
        }
        else if(order==5){
            cout << "How many chickenroll : ";
            cin>> tchickenroll;
            if (tchickenroll>qchickenroll){
                cout << "We don't own a poultry farm mate ,only "<<qchickenroll<< " left "<<endl; 
            }
            else{
                cout << "price per chickenroll :";
                cin >>pchickenroll;
                qchickenroll = qchickenroll-tchickenroll;
                rchickenroll = rchickenroll + pchickenroll*tchickenroll;
                achickenroll += tchickenroll;
            }
        }
        else if(order==6){
            cout << "How many tacos :";
            cin >> ttacos;
            if (ttacos>qtacos){
                cout << "we do not have enough tacos to feed them, we only got  "<<qtacos;
            }
            else{
                cout << "price per tacos : ";
                cin >> ptacos;
                qtacos = qtacos-ttacos;
                rtacos =rtacos + ptacos*ttacos;
                atacos += ttacos;
            }
        }
        else if(order==7){
            cout << "Returning to homepage :"<<endl<<endl;
        }
        else{
            cout << "invalid option :";
        }
    }
    return 0;
}
int inventory(int& qrooms,int& qburger, int& qpizza ,int& qpasta,int& qnoodles, int& qchickenroll ,int& qtacos,int arooms ,int& aburger, int& apizza ,int& apasta,int& anoodles, int& achickenroll ,int& atacos){
    cout << "------------------------------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t ( INVENTORY ) \t\t\t\t\t"<<endl<<endl;
    cout << "ITEM \t\t\t QUANTITY\t\t\tSALES"<<endl;
    cout << "Rooms  \t\t\t "<<qrooms<<"\t\t\t\t" <<arooms<<endl;
    cout << "Burger \t\t\t "<<qburger<<"\t\t\t\t"<<aburger <<endl;
    cout << "Pizaa  \t\t\t " << qpizza<<"\t\t\t\t"<<apizza <<endl;
    cout << "Pasta  \t\t\t " << qpasta<<"\t\t\t\t"<<apasta <<endl;
    cout << "Noodles \t\t "<<qnoodles<<"\t\t\t\t"<< anoodles <<endl;
    cout << "Chicken-rolls \t\t  "<<qchickenroll<< "\t\t\t\t"<<achickenroll<<endl;
    cout << "Tacos  \t\t\t "<<qtacos<< "\t\t\t\t"<< atacos <<endl<<endl;
    char anything;
    cout << "PRESS ANY KEY TO RETURN TO THE HOMEPAGE";
    cin >> anything;
    return 0;
}

int revenu(int arooms ,int& aburger, int& apizza ,int& apasta,int& anoodles, int& achickenroll ,int& atacos, int& rrooms ,int& rburger, int& rpizza ,int& rpasta,int& rnoodles, int& rchickenroll ,int& rtacos){
    cout << "------------------------------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t ( REVENU ) \t\t\t\t\t"<<endl<<endl;
    cout << "ITEM \t\t\t SALES\t\t\t\tTOTAL"<<endl;
    cout << "Rooms  \t\t\t "<<arooms<<"\t\t\t\t$" <<rrooms<<endl;
    cout << "Burger \t\t\t "<<aburger<<"\t\t\t\t$"<<rburger <<endl;
    cout << "Pizaa  \t\t\t " << apizza<<"\t\t\t\t$"<<rpizza <<endl;
    cout << "Pasta  \t\t\t " << apasta<<"\t\t\t\t$"<<rpasta <<endl;
    cout << "Noodles \t\t "<<anoodles<<"\t\t\t\t$"<< rnoodles <<endl;
    cout << "Chicken-rolls  \t\t "<<achickenroll<< "\t\t\t\t$"<<rchickenroll<<endl;
    cout << "Tacos  \t\t\t "<<atacos<< "\t\t\t\t$"<< rtacos <<endl<<endl;
    char anything;
    cout << "PRESS ANY KEY TO RETURN TO THE HOMEPAGE";
    cin >> anything;
    return 0;
}

int data(){
    cout << "-----------------------------------------------------------------------------------------------"<<endl;
    cout << "This section shows the history , but the devloper of this app has not yet figured out how to do that , so it is under progress :)"<<endl<<endl;
    return 0 ;
}

int exit(){
    cout <<endl<<"-----------------------------------------------------------------------------------------------"<<endl;
    cout << "THANK YOU FOR USING THIS STUPID SO CALLED HOTEL MANAGMENT APP, THE DEVLOPER WAS KIND A HIGH WHILE MAKING THIS,"<<endl<<"SO SORRY FOR THE HUMOR NOT SO GREAT I KNOW :)"<<endl<<endl;
    cout << "SO TODAYS TOTAL REVENU  AND SALES WERE AS FOLLOWS :"<<endl <<endl;
    data();
    cout << "THANK YOU FOR USING THIS GOOFY AHH APP"<<endl<<"see you soon ";
    return 0;
}
int homepage(int& qrooms,int &qburger, int& qpizza ,int& qpasta,int& qnoodles, int& qchickenroll ,int& qtacos){
    cout << "-----------------------------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\tHOME PAGE\t\t\t\t"<<endl <<endl ;
    cout << "1.> Allot Rooms"<<endl;
    cout << "2.> Place Order"<<endl;
    cout << "3.> Inventory "<<endl;
    cout << "4.> Revenu"<<endl;
    cout << "5.> data"<<endl;
    cout << "6.> exit"<<endl <<endl ;
    cout << "CHOOSE THE NUMBER CORRESPONDING TO THE TASK YOU WANT TO PERFORM : ";
    return 0;
}

int startpoint(int qrooms,int qburger, int qpizza ,int qpasta,int qnoodles, int qchickenroll ,int qtacos){
    cout << endl <<endl ;
    cout << "--------------------------------------------------------"<<endl;
    cout << "\t\t\tSO FOR TODAT HE HAVE\t\t\t"<<endl<<endl;
    cout << "ITEM \t\t\t QUANTITY"<<endl;
    cout << "Rooms  \t\t\t"<<qrooms<<endl;
    cout << "Burger \t\t\t"<<qburger<<endl;
    cout << "Pizaa  \t\t\t" << qpizza<<endl;
    cout << "Pasta  \t\t\t" << qpasta<<endl;
    cout << "Noodles \t\t"<<qnoodles<<endl;
    cout << "chicken-rolls  \t\t"<<qchickenroll<<endl;
    cout << "Tacos  \t\t\t"<<qtacos<<endl;
}


int main(){
    int qrooms=0,qburger=0 ,qpizza=0, qpasta=0, qnoodles=0, qchickenroll=0, qtacos=0;//to store the initial quantity of the items.
    int arooms=0,aburger=0 ,apizza=0, apasta=0, anoodles=0, achickenroll=0, atacos=0;//to store the amount of items sold.
    int rrooms=0,rburger=0 ,rpizza=0, rpasta=0, rnoodles=0, rchickenroll=0, rtacos=0;//to store the revenu generated by the items.

    cout << "-----------------------------------------------------------"<<endl ;
    cout << "ENTER THE QUANTITY OF THE FOLOWING ITEMS AVAILABLE FOR TADOAY "<<endl <<endl;
    cout << "ROOMS AVAILABLE \t\t : ";
    cin >> qrooms;
    cout << "BURGER AVALABLE \t\t : ";
    cin >> qburger;
    cout << "PIZZA AVAILABLE \t\t : ";
    cin >> qpizza;
    cout << "PASTA AVALABLE \t\t\t : ";
    cin >> qpasta ;
    cout << "NOODLES AVAILABLE  \t\t : ";
    cin >> qnoodles;
    cout << "CHICKEN-ROLLS \t\t\t : ";
    cin >> qchickenroll;
    cout << "TACOS AVAILABLE \t\t : ";
    cin >> qtacos;
    cout << endl<<endl ;
    
    startpoint(qrooms ,qburger ,qpizza, qpasta, qnoodles, qchickenroll, qtacos);
    int option=0 ;

    while(option!=6){
        homepage(qrooms ,qburger ,qpizza, qpasta, qnoodles, qchickenroll, qtacos);
        cin >>option;
        if (option==1){
        allot_rooms(qrooms ,qburger ,qpizza, qpasta, qnoodles, qchickenroll, qtacos);
        }
        else if(option==2){
            place_order(qburger ,qpizza, qpasta, qnoodles, qchickenroll, qtacos ,aburger ,apizza, apasta, anoodles, achickenroll, atacos,rburger ,rpizza, rpasta, rnoodles, rchickenroll, rtacos);
        }
        else if(option==3){
            inventory(qrooms ,qburger ,qpizza, qpasta, qnoodles, qchickenroll, qtacos,arooms ,aburger ,apizza, apasta, anoodles, achickenroll, atacos);
        }
        else if(option==4){
            revenu(arooms ,aburger ,apizza, apasta, anoodles, achickenroll, atacos, rrooms,rburger ,rpizza, rpasta, rnoodles, rchickenroll, rtacos);
        }
        else if(option==5){
            data();
        }
        else if(option==6){
            exit();
        }
        else{
            cout <<endl;
            cout << "invalid option look carefully stupid, what you got eyes or potato in your skull...? :"<<endl;
        }
    }
    cout << "Bye";
    return 0;
}