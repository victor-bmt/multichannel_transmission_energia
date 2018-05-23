#include "data.h"

byte row_counter = 0;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.write(data[row_counter++], COL_NUM);
  if ( row_counter == ROWS_NUM )
    row_counter = 0;
  
  delay(20);
}
