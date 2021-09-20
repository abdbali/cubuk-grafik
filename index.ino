int potpin=A0;
int ledsayisi=9;
int ledpinleri[]={1,2,3,4,5,6,7,8,9};
void setup() 
{
for(int i=0;i<ledsayisi;i++)
pinMode(ledpinleri[i],OUTPUT);
}
void loop() {
 int deger=analogRead(potpin);
 int led_derece=map(deger,0,1023,0,ledsayisi);
 for(int i=0;i<ledsayisi;i++)
 {
 if(i<led_derece)
 {
 digitalWrite(ledpinleri[i],HIGH);
 }
 else {
 digitalWrite(ledpinleri[i],LOW);
 }
 }
}