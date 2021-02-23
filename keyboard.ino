void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(2) == LOW) {
  } else {
    if (digitalRead(3) == LOW) {
    } else {
      if (digitalRead(4) == LOW) {
      } else {
        if (digitalRead(5) == LOW) {
        } else {
          if (digitalRead(6) == LOW) {
          } else {
            if (digitalRead(7) == LOW) {
            } else {
              if (digitalRead(8) == LOW) {
              } else {
                if (digitalRead(9) == LOW) {
                } else {
                }
              }
            }
          }
        }
      }
    }
  }
}