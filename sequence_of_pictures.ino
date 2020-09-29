#include <SSD1306.h>

#include "font.h"   // Файл с шрифтом
#include "image.h"  // Файл с картинкой
#include "spacersRunic.h"  // Файл с картинкой
#include "sequence.h"  // Файл с картинкой
// Инициализируем дисплей подключенный к пинам D2 и D1
#define D2 5
#define D1 4
SSD1306  display(0x3c, D2, D1);

void setup() {
  // Первоначальные настройки дисплея
  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
}

void loop() {
  // create more fonts at http://oleddisplay.squix.ch/
  //Fill(display);
  /*for(int i = 0; i < 32; i++){     
       str_4(display,i,seven,zero,continue_on_next_line,empty);
       delay(100);
   }*/ 
  setenta(display);
  sombrero_double(display);
  el_dedo_complicato(display);
  //sombrero_con_enredo(display);
  roulette(display);
  el_loco_complicato(display);
  
  display.drawXbm(0, 0, width, height,  ninja);  // Рисуем нашу картинку
  display.display();
  delay(1000);
  for (int i=0; i<2; i++)
  {
    display.invertDisplay();
    delay(500);
    display.normalDisplay();
    delay(500);
  }
  delay(2000);

  
}
