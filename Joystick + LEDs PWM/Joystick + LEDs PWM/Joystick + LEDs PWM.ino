int X;
int Y;

int LEFT = 3;
int RIGHT = 5;
int DOWN = 6;
int UP = 9;

void setup() {
  pinMode(LEFT, OUTPUT);
  pinMode(RIGHT, OUTPUT);
  pinMode(DOWN, OUTPUT);
  pinMode(UP, OUTPUT);
}

void loop() {
  X = analogRead(A0);
  Y = analogRead(A1);			

  if (X >= 0 && X < 480) {
    analogWrite(LEFT, map(X, 0, 480, 255, 0));
  } else {
    analogWrite(LEFT, 0);
  }

  if (X > 520 && X <= 1023) {					
    analogWrite(RIGHT, map(X, 520, 1023, 0, 255));
  } else {
    analogWrite(RIGHT, 0);
  }

  if (Y >= 0 && Y < 480) {
    analogWrite(DOWN, map(Y, 0, 480, 255, 0));
  } else {
    analogWrite(DOWN, 0);
  }
  
  if (Y > 520 && Y <= 1023) {
    analogWrite(UP, map(Y, 520, 1023, 0, 255));
  } else {
     analogWrite(UP, 0); 
  }
}
