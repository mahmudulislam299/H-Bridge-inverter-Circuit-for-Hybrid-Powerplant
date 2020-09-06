/* Mahmudul Islam
 * EEE,Bangladesh University of Engineering and Technology (BUET)
 * Email: mahmudulislam299@gmail.com
 */
 
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  
}


void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW); 
  delay(9.5);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);              
  delay(.5);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);     
  delay(9.5);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW); 
  delay(.5);            

  
}
