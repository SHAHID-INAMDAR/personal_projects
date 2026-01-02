#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
using namespace std;

float bmi_calculator(float weight ,float height){
    float bmi ;
    float heightm;
    heightm = pow((height/100),2);
    bmi = weight/heightm;
    return bmi;
}

int main(){
    float bmi,weight,height;
    string gender;
    string choice;

    while (true){
        cout << "ENTER GENDER : ";
        cin >> gender ;
        if (gender=="female"){
            cout << "NOT A GOOD THING TO ASK A WOMEN, PLEASE MAY I KNOW YOUR WEIGHT (kg): ";
            cin >> weight;
            cout << "HOW TALL ARE YOU MAM (cm): ";
            cin >> height;

            bmi = bmi_calculator(weight,height);
            cout << "THE GOOD BMI FOR WOMEN IS BETWEEN 18.5 AND 24.9 ";
            cout <<"your body mass index is "<< bmi<<endl; 
            if (bmi>17.5 && bmi<18.5){
                cout << "YOU ARE A LITTLE UNDER WEIGHT " <<endl;
            }
            else if (bmi<17.5){
                cout << "YOU NEED TO GAIN WEIGHT MAM "<<endl;
            }
            else if (bmi>18.5 && bmi<24.9){
                cout << "YOU ARE PERFECTLY HEALTHY , AWESOME : )"<<endl;
            }
            else if (bmi>24.9){
                cout << "YOU NEED TO CUT SOME WEIGHT "<<endl;
            }
        }

        else if (gender=="male"){
            cout << "HOW MUCH YOU WEIGHT DUDE (kg): ";
            cin >> weight;
            cout << "HOW TALL ARE YOU (cm): ";
            cin >> height;

            bmi = bmi_calculator(weight,height);
            cout << "THE GOOD BMI FOR MAN IS BETWEEN 18.5 AND 25.7 ";
            cout <<"AND YOUR BODY MASS INDEX IS :  "<< bmi<<endl; 
            if (bmi>17.5 && bmi<18.5){
                cout << "YOU NEED TO PUT IN SOME MUSCLE MAN : " <<endl;
            }
            else if (bmi<17.5){
                cout << "GAIN SOME WEIGHT "<<endl;
            }
            else if (bmi>18.5 && bmi<24.9){
                cout << "GOOD YOUR BMI IS IN HEALTHY RANGE : )"<<endl;
            }
            else if (bmi>24.9){
                cout << "YOU GOTTA HIT THE GYM EVERY SINGLE DAY MAN LOOSE SOME WEIGHT ,\nWHO'S GONNA CARRY THE LOGS AND THE BOATS , IT'S YOU , SO GET UP "<<endl;
            }
        }

        else{
            cout << "SORRY BUT THIS PROGRAME KNOWS ONLY TWO GENDERS MALE AND FEMALE TILL NOW  "<< endl;
        }

        cout << "YOU WANT TO CONTINUE (Y/N) : ";
        cin >> choice;
        if ( choice=="n" || choice=="N" ){
            cout << "THANK YOU FOR USING THIS PROGRAME : ) SEE YOU SOON BYE BYE...... ";
            break;
        }

    }
}