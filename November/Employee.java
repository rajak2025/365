class Employee {
    
    
    String name;
    double salary;
    String designation;
    String insuranceScheme;
    
    

    public static String schemeSelection(double salary) {
        if(salary < 5000 ) {
            return "no scheme";
        }
        else if(salary > 5000 && salary < 20000){
            return "scheme-c";
        }
        else if(salary >= 20000 && salary < 40000 ) {
            return "scheme-b";
        }
        else{
            return "scheme-a";
        }

    }
    Employee() {
        //default constructor
    }

    Employee(String name, double salary) {
        this.name = name;
        this.salary = salary;
        this.insuranceScheme =  schemeSelection(salary);
    }

    Employee(String name, double salary, String designation) {
        this.name = name;
        this.salary = salary;
        this.designation = designation;
        this.insuranceScheme = schemeSelection(salary);        
    }

    Employee(double salary) {
        this.salary = salary;
        this.insuranceScheme = schemeSelection(salary);
    }

}