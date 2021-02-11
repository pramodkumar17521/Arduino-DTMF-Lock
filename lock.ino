int m11=7;
int m12=9;
int D0=0;
int D1=0;
int D2=0;
int D3=0;
int m[4];
int n[4];
int p[4];

// Already setted Correct Password for unlock

int password[4][4]={{0,0,0,1},
             {0,0,1,0},
              {0,0,1,1},
              {0,1,0,0}};   
 /////////////
 
//// Array for Receiving entered passwords by user
 int input[4][4];
 
//////////////
 int c[4];
 int u[4]={1,0,0,1};
   bool led = false;        
void setup() {
  // put your setup code here, to run once:
  
pinMode(3,INPUT);//dtmf pin
pinMode(4,INPUT);//dtmf pin
pinMode(5,INPUT); //dtmf pin
pinMode(6,INPUT); //dtmf pin
pinMode(7,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13, OUTPUT);//bluetooth*/
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
   
  label :   // catches the thrown of code
int count=0;
  int i=0,j=0,k=0;
   D0=digitalRead(3);
   D1=digitalRead(4);
    D2=digitalRead(5);
     D3=digitalRead(6);

Serial.print(D3);
Serial.print("\t");
Serial.print(D2);
Serial.print("\t");
Serial.print(D1);
Serial.print("\t");
Serial.print(D0);
Serial.print("\n");
if(D3==1 && D2==0 && D1==1 && D0==1)
{
  while(1)
   {   Serial.println("******in while loop******");
     //  delay(10000);
   // Reading inputs of key pressed through DTMF pins
   D0=digitalRead(3);
   D1=digitalRead(4);
    D2=digitalRead(5);
     D3=digitalRead(6);
     
      
      if(D3==1 && D2==0 && D1==1 && D0==1)  ///****
       { 
          }
          else{
          
         if(D3==1 && D2==1 && D1==0 && D0==0)  //#####
         {   // comparision;
            if(k<4)
            {
            for(k=0; k<4; k++)
             { Serial.println("******locked******");
            
          if(password[k][0]==input[k][3] && password[k][1]==input[k][2] && password[k][2]==input[k][1] && password[k][3]==input[k][0])
            {count++;}   /////// Comparing entered and already setted password
            
              }  // comparision for ends
            
              Serial.println("count==== ");
              Serial.println(count);
              if(count==4)
               { led= !led;
                if(led==true)
                {
                digitalWrite(7,HIGH);
                digitalWrite(9,LOW);
                Serial.println("locked");
                 delay(550);
                  
                digitalWrite(7,LOW);
                digitalWrite(9,LOW);
                 goto label; }
                 else if(led==false) 
                 {goto label;}
                 } // count if ends
            }  // k<4 if ends
               else if(u[0]==c[3] && u[1]==c[2] && u[2]==c[1] && u[3]==c[0])
               {  
                 led= !led;
                digitalWrite(7,LOW);
                digitalWrite(9,HIGH);
                Serial.println("locked");
                 delay(550);
                 
                digitalWrite(7,LOW);
                digitalWrite(9,LOW);
                goto label; }
                  
               else
               {goto label;
                }
            
            
          } // ### if  condition  ends
         else{
           m[0]=D0;
           m[1]=D1;
           m[2]=D2;
           m[3]=D3;
           
       //   delay(5000);  }
          if(i<1)
           {
            p[0]=D0;
             p[1]=D1;
             p[2]=D2;
             p[3]=D3;
              c[0]=D0;
             c[1]=D1;
             c[2]=D2;
             c[3]=D3;
             
             //// Setting entered password
              input[j][0]=p[0];
              input[j][1]=p[1];
              input[j][2]=p[2];
              input[j][3]=p[3];
           //////////////////////////////////////   
           
              j++;
            i++;
           }  // if i<1 condition ends
           
             if(m[3]==p[3] && m[2]==p[2] && m[1]==p[1] && m[0]==p[0])
              {   }
              else
              {i=0;}  // upgrading of i ends
        
         
         }  // ### else ends
      }  /// *** else ends
    } // while loop
  }  // if ****
} // void loop
