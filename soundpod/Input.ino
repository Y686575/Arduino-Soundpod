void leftButtonISR()
{
 static unsigned long last_interrupt_time = 0;
 unsigned long interrupt_time = millis();
 // If interrupts come faster than 80ms, assume it's a bounce and ignore
 if (interrupt_time - last_interrupt_time > 80)
 {
  updateScreen = true;  
  if(inSideMenuSelection && sMenuSelection < 3)
  {
   sMenuSelection++;
  }
  else if(selection < 4)
  {
     selection++; 
  }
 }
 last_interrupt_time = interrupt_time;
}

void rightButtonISR()
{
 static unsigned long last_interrupt_time = 0;
 unsigned long interrupt_time = millis();
 // If interrupts come faster than 80ms, assume it's a bounce and ignore
 if (interrupt_time - last_interrupt_time > 80)
 {
  updateScreen = true;  
  if(inSideMenuSelection && sMenuSelection > 1)
  {
   sMenuSelection--;  
  }
  else if(selection > 1)
  {
    selection--;  
  }
 }
 last_interrupt_time = interrupt_time;
}
