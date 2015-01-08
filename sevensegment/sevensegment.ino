

#define A 38
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8

#define A2 9
#define B2 10
#define C2 11
#define D2 12
#define E2 13
#define F2 22
#define G2 23

#define A3 24
#define B3 25
#define C3 26
#define D3 27
#define E3 28
#define F3 29
#define G3 30

#define A4 31
#define B4 32
#define C4 33
#define D4 34
#define E4 35
#define F4 36
#define G4 37

int score1= 0;
int score2 = 0;


void clr(int index )
{
	if(index == 1){
	  //Clears the LED
	  digitalWrite(A, LOW);
	  digitalWrite(B, LOW);
	  digitalWrite(C, LOW);
	  digitalWrite(D, LOW);
	  digitalWrite(E, LOW);
	  digitalWrite(F, LOW);
	  digitalWrite(G, LOW);
		}

	if(index == 2){
	  digitalWrite(A2, LOW);
	  digitalWrite(B2, LOW);
	  digitalWrite(C2, LOW);
	  digitalWrite(D2, LOW);
	  digitalWrite(E2, LOW);
	  digitalWrite(F2, LOW);
	  digitalWrite(G2, LOW);
	}
	if(index == 3){
	  digitalWrite(A4, LOW);
	  digitalWrite(B4, LOW);
	  digitalWrite(C4, LOW);
	  digitalWrite(D4, LOW);
	  digitalWrite(E4, LOW);
	  digitalWrite(F4, LOW);
	  digitalWrite(G4, LOW);
	}
	if(index == 4){
	  digitalWrite(A4, LOW);
	  digitalWrite(B4, LOW);
	  digitalWrite(C4, LOW);
	  digitalWrite(D4, LOW);
	  digitalWrite(E4, LOW);
	  digitalWrite(F4, LOW);
	  digitalWrite(G4, LOW);
	}
}

void one(int index)
{
	if(index == 1){
	  //Displays 1
	  digitalWrite(D, LOW);
	  digitalWrite(E, LOW);
	  digitalWrite(F, LOW);
	  digitalWrite(G, LOW);
	  digitalWrite(A, LOW);
	  digitalWrite(B, HIGH);
	  digitalWrite(C, HIGH);
	}
	if(index == 2){
	  digitalWrite(D2, LOW);
	  digitalWrite(E2, LOW);
	  digitalWrite(F2, LOW);
	  digitalWrite(G2, LOW);
	  digitalWrite(A2, LOW);
	  digitalWrite(B2, HIGH);
	  digitalWrite(C2, HIGH);
	}
	if(index == 3){
	  digitalWrite(D3, LOW);
	  digitalWrite(E3, LOW);
	  digitalWrite(F3, LOW);
	  digitalWrite(G3, LOW);
	  digitalWrite(A3, LOW);
	  digitalWrite(B3, HIGH);
	  digitalWrite(C3, HIGH);
	}
	if(index == 4){
	  digitalWrite(D4, LOW);
	  digitalWrite(E4, LOW);
	  digitalWrite(F4, LOW);
	  digitalWrite(G4, LOW);
	  digitalWrite(A4, LOW);
	  digitalWrite(B4, HIGH);
	  digitalWrite(C4, HIGH);
	}
}

void two(int index)
{
	if(index == 1){
	  //Displays 2
	  digitalWrite(D, HIGH);
	  digitalWrite(E, HIGH);
	  digitalWrite(F, LOW);
	  digitalWrite(G, HIGH);
	  digitalWrite(A, HIGH);
	  digitalWrite(B, HIGH);
	  digitalWrite(C, LOW);
		}
	if(index == 2){
	  digitalWrite(D2, HIGH);
	  digitalWrite(E2, HIGH);
	  digitalWrite(F2, LOW);
	  digitalWrite(G2, HIGH);
	  digitalWrite(A2, HIGH);
	  digitalWrite(B2, HIGH);
	  digitalWrite(C2, LOW);
	}
	if(index == 3){
	  digitalWrite(D3, HIGH);
	  digitalWrite(E3, HIGH);
	  digitalWrite(F3, LOW);
	  digitalWrite(G3, HIGH);
	  digitalWrite(A3, HIGH);
	  digitalWrite(B3, HIGH);
	  digitalWrite(C3, LOW);
	}
	if(index == 4){
	  digitalWrite(D4, HIGH);
	  digitalWrite(E4, HIGH);
	  digitalWrite(F4, LOW);
	  digitalWrite(G4, HIGH);
	  digitalWrite(A4, HIGH);
	  digitalWrite(B4, HIGH);
	  digitalWrite(C4, LOW);
	}
}

void three(int index)
{
	if(index == 1){
	  //Displays 3
	  digitalWrite(D, HIGH);
	  digitalWrite(E, LOW);
	  digitalWrite(F, LOW);
	  digitalWrite(G, HIGH);
	  digitalWrite(A, HIGH);
	  digitalWrite(B, HIGH);
	  digitalWrite(C, HIGH);
	}
	if(index == 2){
	  digitalWrite(D2, HIGH);
	  digitalWrite(E2, LOW);
	  digitalWrite(F2, LOW);
	  digitalWrite(G2, HIGH);
	  digitalWrite(A2, HIGH);
	  digitalWrite(B2, HIGH);
	  digitalWrite(C2, HIGH);
	}if(index == 3){
	  digitalWrite(D3, HIGH);
	  digitalWrite(E3, LOW);
	  digitalWrite(F3, LOW);
	  digitalWrite(G3, HIGH);
	  digitalWrite(A3, HIGH);
	  digitalWrite(B3, HIGH);
	  digitalWrite(C3, HIGH);
	}if(index == 4){
	  digitalWrite(D4, HIGH);
	  digitalWrite(E4, LOW);
	  digitalWrite(F4, LOW);
	  digitalWrite(G4, HIGH);
	  digitalWrite(A4, HIGH);
	  digitalWrite(B4, HIGH);
	  digitalWrite(C4, HIGH);
	}
}

void four(int index)
{
	  
	if(index == 1){
		digitalWrite(D, LOW);
		digitalWrite(E, LOW);
		digitalWrite(F, HIGH);
		digitalWrite(G, HIGH);
		digitalWrite(A, LOW);
		digitalWrite(B, HIGH);
		digitalWrite(C, HIGH);
	}if(index == 2){
		digitalWrite(D2, LOW);
		digitalWrite(E2, LOW);
		digitalWrite(F2, HIGH);
		digitalWrite(G2, HIGH);
		digitalWrite(A2, LOW);
		digitalWrite(B2, HIGH);
		digitalWrite(C2, HIGH);
	}if(index == 3){
		digitalWrite(D3, LOW);
		digitalWrite(E3, LOW);
		digitalWrite(F3, HIGH);
		digitalWrite(G3, HIGH);
		digitalWrite(A3, LOW);
		digitalWrite(B3, HIGH);
		digitalWrite(C3, HIGH);
	}if(index == 4){
		digitalWrite(D4, LOW);
		digitalWrite(E4, LOW);
		digitalWrite(F4, HIGH);
		digitalWrite(G4, HIGH);
		digitalWrite(A4, LOW);
		digitalWrite(B4, HIGH);
		digitalWrite(C4, HIGH);
	}
}

void five(int index)
{
	if(index == 1){
	  //Displays 5
	  digitalWrite(D, HIGH);
	  digitalWrite(E, LOW);
	  digitalWrite(F, HIGH);
	  digitalWrite(G, HIGH);
	  digitalWrite(A, HIGH);
	  digitalWrite(B, LOW);
	  digitalWrite(C, HIGH);
		}if(index == 2){
	  digitalWrite(D2, HIGH);
	  digitalWrite(E2, LOW);
	  digitalWrite(F2, HIGH);
	  digitalWrite(G2, HIGH);
	  digitalWrite(A2, HIGH);
	  digitalWrite(B2, LOW);
	  digitalWrite(C2, HIGH);
	}if(index == 3){
	  digitalWrite(D3, HIGH);
	  digitalWrite(E3, LOW);
	  digitalWrite(F3, HIGH);
	  digitalWrite(G3, HIGH);
	  digitalWrite(A3, HIGH);
	  digitalWrite(B3, LOW);
	  digitalWrite(C3, HIGH);
	}if(index == 4){
	  digitalWrite(D4, HIGH);
	  digitalWrite(E4, LOW);
	  digitalWrite(F4, HIGH);
	  digitalWrite(G4, HIGH);
	  digitalWrite(A4, HIGH);
	  digitalWrite(B4, LOW);
	  digitalWrite(C4, HIGH);
	}
}

void six(int index)
{
	if(index == 1){
	  //Displays 6
	  digitalWrite(D, HIGH);
	  digitalWrite(E, HIGH);
	  digitalWrite(F, HIGH);
	  digitalWrite(G, HIGH);
	  digitalWrite(A, HIGH);
	  digitalWrite(B, LOW);
	  digitalWrite(C, HIGH);
	}if(index == 2){
	  digitalWrite(D2, HIGH);
	  digitalWrite(E2, HIGH);
	  digitalWrite(F2, HIGH);
	  digitalWrite(G2, HIGH);
	  digitalWrite(A2, HIGH);
	  digitalWrite(B2, LOW);
	  digitalWrite(C2, HIGH);
	}if(index == 3){
	  digitalWrite(D3, HIGH);
	  digitalWrite(E3, HIGH);
	  digitalWrite(F3, HIGH);
	  digitalWrite(G3, HIGH);
	  digitalWrite(A3, HIGH);
	  digitalWrite(B3, LOW);
	  digitalWrite(C3, HIGH);
	}if(index == 4){
	  digitalWrite(D4, HIGH);
	  digitalWrite(E4, HIGH);
	  digitalWrite(F4, HIGH);
	  digitalWrite(G4, HIGH);
	  digitalWrite(A4, HIGH);
	  digitalWrite(B4, LOW);
	  digitalWrite(C4, HIGH);
	}
}

void seven(int index)
{
	if(index == 1){
	  //Displays 7
	  digitalWrite(D, LOW);
	  digitalWrite(E, LOW);
	  digitalWrite(F, LOW);
	  digitalWrite(G, LOW);
	  digitalWrite(A, HIGH);
	  digitalWrite(B, HIGH);
	  digitalWrite(C, HIGH);
	}if(index == 2){
	  digitalWrite(D2, LOW);
	  digitalWrite(E2, LOW);
	  digitalWrite(F2, LOW);
	  digitalWrite(G2, LOW);
	  digitalWrite(A2, HIGH);
	  digitalWrite(B2, HIGH);
	  digitalWrite(C2, HIGH);
	}if(index == 3){
	  digitalWrite(D3, LOW);
	  digitalWrite(E3, LOW);
	  digitalWrite(F3, LOW);
	  digitalWrite(G3, LOW);
	  digitalWrite(A3, HIGH);
	  digitalWrite(B3, HIGH);
	  digitalWrite(C3, HIGH);
	}if(index == 4){
	  digitalWrite(D4, LOW);
	  digitalWrite(E4, LOW);
	  digitalWrite(F4, LOW);
	  digitalWrite(G4, LOW);
	  digitalWrite(A4, HIGH);
	  digitalWrite(B4, HIGH);
	  digitalWrite(C4, HIGH);
	}
}

void eight(int index)
{
	if(index == 1){
	  //Displays 8
	  digitalWrite(D, HIGH);
	  digitalWrite(E, HIGH);
	  digitalWrite(F, HIGH);
	  digitalWrite(G, HIGH);
	  digitalWrite(A, HIGH);
	  digitalWrite(B, HIGH);
	  digitalWrite(C, HIGH);
	}if(index == 2){
	  digitalWrite(D2, HIGH);
	  digitalWrite(E2, HIGH);
	  digitalWrite(F2, HIGH);
	  digitalWrite(G2, HIGH);
	  digitalWrite(A2, HIGH);
	  digitalWrite(B2, HIGH);
	  digitalWrite(C2, HIGH);
	}if(index == 3){
	  digitalWrite(D3, HIGH);
	  digitalWrite(E3, HIGH);
	  digitalWrite(F3, HIGH);
	  digitalWrite(G3, HIGH);
	  digitalWrite(A3, HIGH);
	  digitalWrite(B3, HIGH);
	  digitalWrite(C3, HIGH);
	}if(index == 4){
	  digitalWrite(D4, HIGH);
	  digitalWrite(E4, HIGH);
	  digitalWrite(F4, HIGH);
	  digitalWrite(G4, HIGH);
	  digitalWrite(A4, HIGH);
	  digitalWrite(B4, HIGH);
	  digitalWrite(C4, HIGH);
	}
}

void nine(int index)
{
	if(index == 1){
	  //Displays 9
	  digitalWrite(D, HIGH);
	  digitalWrite(E, LOW);
	  digitalWrite(F, HIGH);
	  digitalWrite(G, HIGH);
	  digitalWrite(A, HIGH);
	  digitalWrite(B, HIGH);
	  digitalWrite(C, HIGH);
	}if(index == 2){
	  digitalWrite(D2, HIGH);
	  digitalWrite(E2, LOW);
	  digitalWrite(F2, HIGH);
	  digitalWrite(G2, HIGH);
	  digitalWrite(A2, HIGH);
	  digitalWrite(B2, HIGH);
	  digitalWrite(C2, HIGH);
	}if(index == 3){
	  digitalWrite(D3, HIGH);
	  digitalWrite(E3, LOW);
	  digitalWrite(F3, HIGH);
	  digitalWrite(G3, HIGH);
	  digitalWrite(A3, HIGH);
	  digitalWrite(B3, HIGH);
	  digitalWrite(C3, HIGH);
	}if(index == 4){
	  digitalWrite(D4, HIGH);
	  digitalWrite(E4, LOW);
	  digitalWrite(F4, HIGH);
	  digitalWrite(G4, HIGH);
	  digitalWrite(A4, HIGH);
	  digitalWrite(B4, HIGH);
	  digitalWrite(C4, HIGH);
	}
}

void zero(int index)
{
	if(index == 1){
	  //Displays 0
	  digitalWrite(D, HIGH);
	  digitalWrite(E, HIGH);
	  digitalWrite(F, HIGH);
	  digitalWrite(G, LOW);
	  digitalWrite(A, HIGH);
	  digitalWrite(B, HIGH);
	  digitalWrite(C, HIGH);
	}if(index == 2){
	  digitalWrite(D2, HIGH);
	  digitalWrite(E2, HIGH);
	  digitalWrite(F2, HIGH);
	  digitalWrite(G2, LOW);
	  digitalWrite(A2, HIGH);
	  digitalWrite(B2, HIGH);
	  digitalWrite(C2, HIGH);
	}if(index == 3){
	  digitalWrite(D3, HIGH);
	  digitalWrite(E3, HIGH);
	  digitalWrite(F3, HIGH);
	  digitalWrite(G3, LOW);
	  digitalWrite(A3, HIGH);
	  digitalWrite(B3, HIGH);
	  digitalWrite(C3, HIGH);
	}if(index == 4){
	  digitalWrite(D4, HIGH);
	  digitalWrite(E4, HIGH);
	  digitalWrite(F4, HIGH);
	  digitalWrite(G4, LOW);
	  digitalWrite(A4, HIGH);
	  digitalWrite(B4, HIGH);
	  digitalWrite(C4, HIGH);
	}
}

void LoopDisplay()
{
  //Loop through all Chars and Numbers
 
 printnumber(1,score1); 
 printnumber(2,score2);
 score1++;
 score2++;
 delay(1000);
 
 
 
}

void printnumber(int disp, int number){
	String numberstring = String(number);

	if( disp ==1){
	    if(numberstring.length()== 2){
	        switch (numberstring.charAt(0)) {
	            case'0' : 
	              	zero(4);
	              break;
	            case '1': 
	              	one(4);
	              break;
	              case'2' :
	              two(4);
	              break;
	              case '3':
	              three(4);
	              break;
	              case '4':
	              four(4);
	              break;
	              case '5':
	              five(4);
	              break;
	              case '6':
	              six(4);
	              break;
	              case '7':
	              seven(4);
	              break;
	              case '8':
	              eight(4);
	              break;
	               case '9':
	              nine(4);
	              break;
	            default:
	              zero(4);
	        }
	        switch (numberstring.charAt(1)) {
	            case  '0':
	              	zero(3);
	              break;
	            case  '1':
	              	one(3);
	              break;
	              case '2':
	              two(3);
	              break;
	              case '3':
	              three(3);
	              break;
	              case '4':
	              four(3);
	              break;
	              case '5':
	              five(3);
	              break;
	              case '6':
	              six(3);
	              break;
	              case '7':
	              seven(3);
	              break;
	              case '8':
	              eight(3);
	              break;
	               case '9':
	              nine(3);
	              break;
	            default:
	              zero(3);
	        }   
	    }
	    else if(numberstring.length()==1){
	    	switch (numberstring.charAt(0)) {
	            case  '0':
	              	zero(3);
	              break;
	            case  '1':
	              	one(3);
	              break;
	              case '2':
	              two(3);
	              break;
	              case '3':
	              three(3);
	              break;
	              case '4':
	              four(3);
	              break;
	              case '5':
	              five(3);
	              break;
	              case '6':
	              six(3);
	              break;
	              case '7':
	              seven(3);
	              break;
	              case '8':
	              eight(3);
	              break;
	               case '9':
	              nine(3);
	              break;
	            default:
	              zero(3);
	        } 
	    }
	}
	if(disp == 2){
		if(numberstring.length()== 2){
	        switch (numberstring.charAt(0)) {
	         case  '0':
	              	zero(2);
	              break;
	            case  '1':
	              	one(2);
	              break;
	              case '2':
	              two(2);
	              break;
	              case '3':
	              three(2);
	              break;
	              case '4':
	              four(2);
	              break;
	              case '5':
	              five(2);
	              break;
	              case '6':
	              six(2);
	              break;
	              case '7':
	              seven(2);
	              break;
	              case '8':
	              eight(2);
	              break;
	               case '9':
	              nine(2);
	              break;
	            default:
	              zero(2);
	        }
	        switch (numberstring.charAt(1)) {
	           case  '0':
	              	zero(1);
	              break;
	            case  '1':
	              	one(1);
	              break;
	              case '2':
	              two(1);
	              break;
	              case '3':
	              three(1);
	              break;
	              case '4':
	              four(1);
	              break;
	              case '5':
	              five(1);
	              break;
	              case '6':
	              six(1);
	              break;
	              case '7':
	              seven(1);
	              break;
	              case '8':
	              eight(1);
	              break;
	               case '9':
	              nine(1);
	              break;
	            default:
	              zero(1);
	        }   
	    }
	    else if(numberstring.length()==1){
	    	switch (numberstring.charAt(0)) {
	          case  '0':
	              	zero(1);
	              break;
	            case  '1':
	              	one(1);
	              break;
	              case '2':
	              two(1);
	              break;
	              case '3':
	              three(1);
	              break;
	              case '4':
	              four(1);
	              break;
	              case '5':
	              five(1);
	              break;
	              case '6':
	              six(1);
	              break;
	              case '7':
	              seven(1);
	              break;
	              case '8':
	              eight(1);
	              break;
	               case '9':
	              nine(1);
	              break;
	            default:
	              zero(1);
	        }
	    }
	}
}

void setup()
{
	score1 = 0;
	score2 = 0;
  //Setup our pins
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

  pinMode(A2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(C2, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(E2, OUTPUT);
  pinMode(F2, OUTPUT);
  pinMode(G2, OUTPUT);

  pinMode(A3, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(C3, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(E3, OUTPUT);
  pinMode(F3, OUTPUT);
  pinMode(G3, OUTPUT);

  pinMode(A4, OUTPUT);
  pinMode(B4, OUTPUT);
  pinMode(C4, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(E4, OUTPUT);
  pinMode(F4, OUTPUT);
  pinMode(G4, OUTPUT);
    //Begin serial communcation

}

void loop()
{
  
  LoopDisplay();

}




