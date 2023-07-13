//  These data pins link to 4 Relay board pins IN1, IN2, IN3, IN4

#define RELAY1  2                        
#define RELAY2  3                       
#define RELAY3  8                        
#define RELAY4  9
 
void setup()
{    
  Serial.println("in setup");
// Initialise the Arduino data pins for OUTPUT
  pinMode(RELAY1, OUTPUT);       
 // pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
 // pinMode(RELAY4, OUTPUT);
}
 
 void loop()
{
     Serial.println("in loop");

    //Open Pins 2 and 4
   

   delay(2000);                        // 2 sec delay before turn on 


  Serial.println("setup");
// Retract Actuator        
   digitalWrite(RELAY2,HIGH);          // Turns Relay On
  // digitalWrite(RELAY4,HIGH);          // Turns Relay On
   delay(25000);                       // Wait 25 seconds to retract + 2 + & - 2 -
   digitalWrite(RELAY2,LOW);           // Turns OFF Relays 2 
 //  digitalWrite(RELAY4,LOW);           // Turns OFF Relays 4
  
     
   delay(2000);                        // 2 sec delay     
  

// Extend Actuator
   digitalWrite(RELAY1,HIGH);          // Turns Relay On
 //  digitalWrite(RELAY3,HIGH);          // Turns Relay On  
   delay(25000);                       // Wait 25 seconds to extend + 2 - & = 2 +
   digitalWrite(RELAY1,LOW);           // Turns Off Relays 1
 //  digitalWrite(RELAY3,LOW);           // Turns Off Relays 3


         
 }
