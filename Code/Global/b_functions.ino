/*
   functions
   This file contains all the functions needed to the program to work correctly.

   @author Filippo Finke
*/

int getRandom(int pins[], int size) {
  return pins[random(0, size + 1)];
}

/*
  |    0    |  22 |
  |    1    |  24 |
  |    2    |  26 |
  |    3    |  28 |
  |    4    |  30 |
  |    5    |  32 |
  |    6    |  34 |
  |    7    |  36 |
  |    8    |  38 |
  |    9    |  40 |
  |    #    |  42 |
  |    @    |  44 |
*/

int getLabel(int pin)
{
  return (pin - 22) / 2;
}

void resetLeds() {
  for (int i = 0; i < SIZE; i++)
  {
    digitalWrite(ledPins[i], LOW);
  }
}

bool isPressed(int pin)
{
  return !digitalRead(pin);
}

void pinSetup() {
  for (int i = 0; i < SIZE; i++)
  {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT);
  }
}