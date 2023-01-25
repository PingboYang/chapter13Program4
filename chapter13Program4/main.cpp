#include <iostream>
using namespace std;
//mutator和accessor是起什么作用？
//为什么我在main function里面没有用上mutator function。
//我的out put 是否符合题意？
class Patient {
    private:
        string firstName;
        string middleName;
        string lastName;
        string address;
        string city;
        int zipCode;
        int phoneNumber;
        string emergencyContactName;
        int emergencyContacNumber;
    public:
        Patient(string a, string b, string c, string d, string e,int f, int g,string h, int i ){
            firstName=a;
            middleName=b;
            lastName=c;
            address=d;
            city=e;
            zipCode=f;
            phoneNumber=g;
            emergencyContactName=h;
            emergencyContacNumber=i;
        }
        void setFirstName(string a){
            firstName=a;
        }
        void setMiddleName(string b){
            middleName=b;
        }
        void setLastName(string c){
            lastName=c;
        }
        void setAddress(string d){
            address=d;
        }
        void setCity(string e){
            city=e;
        }
        void setZipCode(int f){
            zipCode=f;
        }
        void setPhoneNumber(int g){
            phoneNumber=g;
        }
        void setEmergencyContactName(string h){
            emergencyContactName=h;
        }
        void setEmergencyContactNumber(int i){
            emergencyContacNumber=i;
        }
        string accessFirstName(){
            return firstName;
        }
        string accessMiddleName(){
            return middleName;
        }
        string accessLastName(){
            return lastName;
        }
        string accessAddress(){
            return address;
        }
        string accessCity(){
            return city;
        }
        int accessZipCode(){
            return zipCode;
        }
        int accessPhoneNumber(){
            return phoneNumber;
        }
        string accessEmergencyContactName(){
            return emergencyContactName;
        }
        int accessEmergencyPhoneNumber(){
            return emergencyContacNumber;
        }




};

class Procedure{
    private:
        string procedureName;
        string procedureDate;
        string procedurePractitioner;
        int procedureCharge;
    public:
        Procedure(string n, string p, string x, int y){
            procedureName=n;
            procedureDate=p;
            procedurePractitioner=x;
            procedureCharge=y;
        }
        string accessProcedureName(){
            return procedureName;
        }
        string accessProcedureDate(){
            return procedureDate;
        }
        string accessProcedurePractitioner(){
            return procedurePractitioner;
        }
        int accessProcedureCharge(){
            return procedureCharge;
        }
        void setProcedureName(string n){
            procedureName=n;
        }
        void setProcedureDate(string p){
            procedureDate=p;
        }
        void setProcedurePractitioner(string x){
            procedurePractitioner=x;
        }
        void setProcedureCharge(int y){
            procedureCharge=y;
        }

};

int main() {
    Patient patient1("Lili", "zoe", "Chen", "456 East", "New York", 11111, 555666777, "Ting Chen", 456789 );
    Procedure procedure1("Physical Exam", "01/21/2022", "Dr. Irvine", 2500);
    Procedure procedure2("X-ray", "01/21/2022", "Dr.Jamison", 200);
    Procedure procedure3("Blood test", "01/21/2022", "Dr.Smith", 200);
    patient1.setFirstName("Zoe");
    cout<<patient1.accessFirstName();


    cout <<"Patient's name: "<< patient1.accessFirstName() <<" "<< patient1.accessMiddleName() <<" "<< patient1. accessLastName()<< endl;
    cout <<"Patient's address: " <<patient1.accessAddress()<<" "<<patient1.accessCity()<<" "<< patient1.accessZipCode()<<endl;
    cout <<"Patient's phone number: "<< patient1.accessPhoneNumber()<<endl;
    cout <<"Patient's emergency contact person: "<<patient1.accessEmergencyContactName()<<" Phone number: "<<patient1.accessEmergencyPhoneNumber()<<endl;
    cout <<"Procedure name: "<<procedure1.accessProcedureName()<<" Date: "
         <<procedure1.accessProcedureDate()<<" Practitioner: "<<procedure1.accessProcedurePractitioner()<<" Charge: "<<procedure1.accessProcedureCharge()<<endl;
    cout <<"Procedure name: "<<procedure2.accessProcedureName()<<" Date: "
         <<procedure2.accessProcedureDate()<<" Practitioner: "<<procedure2.accessProcedurePractitioner()<<" Charge: "<<procedure2.accessProcedureCharge()<<endl;
    cout <<"Procedure name: "<<procedure3.accessProcedureName()<<" Date: "
         <<procedure3.accessProcedureDate()<<" Practitioner: "<<procedure3.accessProcedurePractitioner()<<" Charge: "<<procedure3.accessProcedureCharge()<<endl;
    cout <<"Total charge: "<<procedure1.accessProcedureCharge()+procedure2.accessProcedureCharge()+procedure3.accessProcedureCharge()<<endl;



    return 0;
}


