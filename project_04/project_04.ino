const int green_led_pin = 9;
const int blue_led_pin  = 10;
const int red_led_pin   = 11;

const int red_sensor_pin   = A0;
const int blue_sensor_pin = A1;
const int green_sensor_pin = A2;

int red_val   = 0;
int blue_val  = 0;
int green_val = 0;

int red_sensor_val   = 0;
int blue_sensor_val  = 0;
int green_sensor_val = 0;



void setup() 
{
  Serial.begin(9600);

  pinMode(green_led_pin, OUTPUT);
  pinMode(blue_led_pin, OUTPUT);
  pinMode(red_led_pin, OUTPUT);
}

void loop() 
{
  red_sensor_val = analogRead(red_sensor_pin);
  delay(5);
  blue_sensor_val = analogRead(blue_sensor_pin);
  delay(5);
  green_sensor_val = analogRead(green_sensor_pin);

  Serial.print("Raw Sensor Values \t red: ");
  Serial.print(red_sensor_val);
  Serial.print("\t blue: ");
  Serial.print(blue_sensor_val);
  Serial.print("\t green: ");
  Serial.println(green_sensor_val);

  red_val = red_sensor_val/4;
  blue_val = blue_sensor_val/4;
  green_val = green_sensor_val/4;

  Serial.print("Mapped Sensor Values \t red: ");
  Serial.print(red_val);
  Serial.print("\t blue: ");
  Serial.print(blue_val);
  Serial.print("\t green: ");
  Serial.println(green_val);

  analogWrite(red_led_pin, red_val);
  analogWrite(blue_led_pin, blue_val);
  analogWrite(green_led_pin, green_val);

  // analogWrite(red_led_pin, 1);
  // analogWrite(blue_led_pin, 1);
  // analogWrite(green_led_pin, 1);

  delay(250);
}
