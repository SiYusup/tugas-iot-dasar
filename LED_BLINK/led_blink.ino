const int led_1 = 2;
const int delay_led = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_1, HIGH);
  delay(delay_led);
  digitalWrite(led_1, LOW);
  delay(delay_led);
}
