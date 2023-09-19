            int temp = num % 10;        //unit's place of the digit is taken. eg = 145 , temp = 5
            sum += fact(temp);          //factorial of that digit is added to the sum. eg =  sum + = 120
            num = num/10;               //unit's place is removed from the number. eg = 145 => 14.