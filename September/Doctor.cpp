#include<iostream>
using namespace std;

class Hospital {
    public:
    string hospitalName;
    int hospitalID;
    string hospitalAddress;
    string hospitalChief;
    int hospitalTelephone;

    public :
    void setHospitalName(string name) {
        hospitalName = name;
    }

    void setHospitalID(int id) {
        hospitalID = id;
    }

    void setHospitalAddress(string add) {
        hospitalAddress = add;
    }

    void setHospitalChief(string hc) {
        hospitalChief = hc;
    }

    void setHospitalTelephone(int t) {
        hospitalTelephone = t;
    }

    string getHospitalName(void) {
        return hospitalName;
    }

    int getHospitalID(void) {
        return hospitalID;
    }

    string getHospitalAddress(void) {
        return hospitalAddress;
    }

    string getHospitalChief(void) {
        return hospitalChief;
    }

    int getHospitalTelephone(int t) {
        return hospitalTelephone;
    }

    Hospital() {

    }
};

//Extending the Hospital Class using Inheritance mechanism
class Doctor : public  Hospital{
    public:
        string docName;
        int docAge;
        int docSSN;
        string Hospital;
        double docIncome;

    public :
    Doctor(string hs, int hID, string hAdd, string hC, int hT, string dn, int dage, int dSSN, string h, double dI) {
        hospitalName = h;
        hospitalID = hID;
        hospitalAddress = hAdd;
        hospitalChief = hC;
        hospitalTelephone = hT;

        docName = dn;
        docAge = dage;
        docSSN = dSSN;
        Hospital = h;
        docIncome = dI;
    }

    
        void setDocName(string d) {
            docName = d;
        }

        void setDocAge(int age) {
            docAge = age;
        }

        void setDocSSN(int dSSN) {
            docSSN = dSSN;
        }

        void setHospital(string h) {
            Hospital = h;
        }

        void setDoctorIncome(double i) {
            docIncome = i;
        }


        string getDocName(void) {
            return docName;
        }

        int getDocAge(void) {
           return docAge;
        }

        int getDocSSN(void) {
            return docSSN;
        }

        string getHospital(void) {
            return Hospital;
        }

        double getDoctorIncome(void) {
            return docIncome;
        }

};

int main(void) {

    //Constructor Call
    /*
    Create any object using this template
    First all add all the members of the hospital objects, follwed by doctor objects
    */
    Doctor docObj("Continental", 123, "Silicon Valley", "William stallings", 987654321, "Bjourne", 45, 1803462, "Continental", 1234551.15);

    cout<<"Current Doctor Age : ";
    cout<<docObj.getDocAge()<<endl;

    cout<<"Setting Doctor Age to 49 "<<endl;
    docObj.setDocAge(49);
    cout<<docObj.getDocAge();

    //In this way you can access your methods

    return 1;
}
