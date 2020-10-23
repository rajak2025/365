$year = read-Host -Prompt 'Enter the year'
if($year % 4 -eq 0) {
        if ($year % 100 -eq 0) {
            if($year % 400 -eq 0) {
                write-host("This is Leap Year")
            }    
            else{
                write-host("Not a leap year")
            }
        }
        else {
            write-host("This is a leap year")
        }
    }    
else {
    write-host("Not a leap Year")
}