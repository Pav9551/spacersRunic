#include "spacersRunic.h"  // Файл с картинкой
#include <SSD1306.h>
  #define D2 5
  #define D1 4 
void FillArray(int TheArray[], int n)
{
   for(int i = 0; i < n; i++){
       TheArray[i] = 10 * i;
   }
}

void Fill(SSD1306 display){ 
  display.clear();
  display.drawXbm(0, 0, 32, 32,  seven);
  display.drawXbm(32, 0, 32, 32,  zero);
  display.drawXbm(64, 0, 32, 32,  continue_on_next_line);
  display.drawXbm(96, 0, 32, 32,  empty);
  display.drawXbm(0, 32, 32, 32,  zero);
  display.drawXbm(32, 32, 32, 32,  mars);
  display.drawXbm(64, 32, 32, 32,  venus);
  display.drawXbm(96, 32, 32, 32,  continue_on_next_line);
  display.display();
  delay(4000); 
}

void str_4(SSD1306 display,int n, const char sl1[],const char sl2[],const char sl3[],const char sl4[]){ 
  display.clear();
  display.drawXbm(0, n, 32, 32,  sl1);
  display.drawXbm(32, n, 32, 32,  sl2);
  display.drawXbm(64, n, 32, 32,  sl3);
  display.drawXbm(96, n, 32, 32,  sl4);
  display.display(); 
}

void str_4_1(SSD1306 display, const char sl1[],const char sl2[],const char sl3[],const char sl4[]){ 
  display.clear();
  display.drawXbm(0, 0, 32, 32,  sl1);
  display.drawXbm(32, 0, 32, 32,  sl2);
  display.drawXbm(64, 0, 32, 32,  sl3);
  display.drawXbm(96, 0, 32, 32,  sl4);
}
void str_4_2(SSD1306 display, const char sl1[],const char sl2[],const char sl3[],const char sl4[]){ 
  display.drawXbm(0, 32, 32, 32,  sl1);
  display.drawXbm(32, 32, 32, 32,  sl2);
  display.drawXbm(64, 32, 32, 32,  sl3);
  display.drawXbm(96, 32, 32, 32,  sl4);
  display.display(); 
  delay(1000);
}
void setenta(SSD1306 display){
  str_4(display,18,empty,seven,zero,empty);
  delay(4000);
  display.clear();                             // Очищаем экран от предыдущих данных
  display.setTextAlignment(TEXT_ALIGN_CENTER); // Выравниваем текст по центру
  display.setFont(ArialMT_Plain_16);            // Стандартный шрифт из библиотеки
  display.drawString(64, 8, "spacersRunic");
  display.setFont(Chewy_24);                   // Подключаем созданный нами шрифт
  //display.drawString(50, 8, "spacersRunic");      // Первая строка в координаты 64 по оси X и 8 по оси Y
  display.drawString(64, 32, "Setenta");          // Вторая строка
  display.display();                           // Выводим все на экран
  delay(2000);
  
  str_4_1(display,seven,zero,continue_on_next_line,empty);
  str_4_2(display,empty,mars,venus,empty);
   

  str_4_1(display,empty,mars,venus,empty);
  str_4_2(display,one,pull,foward,empty);
   

  str_4_1(display,one,pull,foward,empty);
  str_4_2(display,three,near,rotate_clokwise,empty);
   

  str_4_1(display,three,near,rotate_clokwise,empty);
  str_4_2(display,four,rotate_rigtht,rotate_clokwise,empty);
   
  
  str_4_1(display,four,rotate_rigtht,rotate_clokwise,empty);
  str_4_2(display,one,surround,conjuction,empty);
   

  str_4_1(display,one,surround,conjuction,empty);
  str_4_2(display,five,conjuction,surround,empty);
   

  str_4_1(display,five,conjuction,surround,empty);
  str_4_2(display,one,tell,venus,no);
   

  str_4_1(display,one,tell,venus,no);
  str_4_2(display,continue_on_next_line,empty,empty,empty);
   

  display.clear();
}



void sombrero_double(SSD1306 display){
  str_4(display,18,empty,saturn,saturn,empty);
  delay(4000);
  display.clear();                             // Очищаем экран от предыдущих данных
  display.setTextAlignment(TEXT_ALIGN_CENTER); // Выравниваем текст по центру
  //display.setFont(ArialMT_Plain_16);            // Стандартный шрифт из библиотеки
  //display.drawString(64, 8, "spacersRunic");
  display.setFont(Chewy_24);                   // Подключаем созданный нами шрифт
  //display.drawString(50, 8, "spacersRunic");      // Первая строка в координаты 64 по оси X и 8 по оси Y
  display.drawString(64, 0, "Sombrero");  // Первая строка
  display.drawString(64, 32, "double");// Вторая строка
  display.display();                           // Выводим все на экран
  delay(2000);
  ///1 part
  str_4_1(display,empty,saturn,saturn,empty);
  str_4_2(display,empty,mars,venus,empty);
   

  str_4_1(display,empty,mars,venus,empty);
  str_4_2(display,one,pull,foward,empty);
   
    
  str_4_1(display,one,pull,foward,empty);
  str_4_2(display,three,near,rotate_clokwise,empty);
   

  str_4_1(display,three,near,rotate_clokwise,empty);
  str_4_2(display,four,rotate_rigtht,rotate_clokwise,empty);
   
  
  str_4_1(display,four,rotate_rigtht,rotate_clokwise,empty);
  str_4_2(display,seven,saturn,continue_on_next_line,empty);
   

  str_4_1(display,seven,saturn,continue_on_next_line,empty);
  str_4_2(display,empty,tell,venus,no);
   

  str_4_1(display,empty,tell,venus,no);
  str_4_2(display,seven,carbon,oxygen,water);
   

  str_4_1(display,seven,carbon,oxygen,water);
  str_4_2(display,one,go,empty,empty);
   

  ///2 part
  str_4_1(display,one,pull,foward,empty);
  str_4_2(display,three,near,rotate_clokwise,empty);
   

  str_4_1(display,three,near,rotate_clokwise,empty);
  str_4_2(display,four,rotate_rigtht,rotate_clokwise,empty);
   
  
  str_4_1(display,four,rotate_rigtht,rotate_clokwise,empty);
  str_4_2(display,seven,saturn,continue_on_next_line,empty);
   

  str_4_1(display,seven,saturn,continue_on_next_line,empty);
  str_4_2(display,empty,tell,venus,no);
   

  str_4_1(display,tell,venus,no,continue_on_next_line);
  str_4_2(display,empty,empty,empty,empty);
   

  display.clear();
}

void el_dedo_complicato(SSD1306 display){
  str_4(display,18,empty,hand,over,empty);
  delay(4000);
  display.clear();                             // Очищаем экран от предыдущих данных
  display.setTextAlignment(TEXT_ALIGN_CENTER); // Выравниваем текст по центру
  //display.setFont(ArialMT_Plain_16);            // Стандартный шрифт из библиотеки
  //display.drawString(64, 8, "spacersRunic");
  display.setFont(Chewy_24);                   // Подключаем созданный нами шрифт
  //display.drawString(50, 8, "spacersRunic");      // Первая строка в координаты 64 по оси X и 8 по оси Y
  display.drawString(64, 0, "El dedo");  // Первая строка
  display.drawString(64, 32, "complicato");// Вторая строка
  display.display();                           // Выводим все на экран
  delay(2000);
  ///1 part
  str_4_1(display,empty,hand,over,empty);
  str_4_2(display,empty,mars,venus,empty);
   

  str_4_1(display,empty,mars,venus,empty);
  str_4_2(display,one,pull,foward,empty);
   
    
  str_4_1(display,one,pull,foward,empty);
  str_4_2(display,three,near,rotate_clokwise,empty);
   

  str_4_1(display,three,near,rotate_clokwise,empty);
  str_4_2(display,four,rotate_rigtht,rotate_clokwise,empty);
   
  
  str_4_1(display,four,rotate_rigtht,rotate_clokwise,empty);
  str_4_2(display,five,conjuction,rotate_clokwise,empty);//
   

  str_4_1(display,five,conjuction,rotate_clokwise,empty);//
  str_4_2(display,one,surround,conjuction,empty);
   

  str_4_1(display,one,surround,conjuction,empty);
  str_4_2(display,five,rotate_counter_clokwise,surround,high);
   

  str_4_1(display,five,rotate_counter_clokwise,surround,high);
  str_4_2(display,one,surround,conjuction,empty);
   

  
  str_4_1(display,one,surround,conjuction,empty);
  str_4_2(display,five,rotate_counter_clokwise,surround,middle);
   
  
  str_4_1(display,five,rotate_counter_clokwise,surround,middle);
  str_4_2(display,one,tell,venus,no);
   

  
  str_4_1(display,one,tell,venus,no);
  str_4_2(display,continue_on_next_line,empty,empty,empty);
  
   

  

  display.clear();
}

/*void sombrero_con_enredo(SSD1306 display){
  str_4(display,18,empty,over,hand,empty);
   
  display.clear();                             // Очищаем экран от предыдущих данных
  display.setTextAlignment(TEXT_ALIGN_CENTER); // Выравниваем текст по центру
  //display.setFont(ArialMT_Plain_16);            // Стандартный шрифт из библиотеки
  //display.drawString(64, 8, "spacersRunic");
  display.setFont(Chewy_24);                   // Подключаем созданный нами шрифт
  //display.drawString(50, 8, "spacersRunic");      // Первая строка в координаты 64 по оси X и 8 по оси Y
  display.drawString(64, 0, "Sombrero");  // Первая строка
  display.drawString(64, 32, "con enredo");// Вторая строка
  display.display();                           // Выводим все на экран
  delay(2000);
  ///1 part
  str_4_1(display,empty,saturn,negation,check);
  str_4_2(display,empty,mars,venus,empty);
  delay(4000);

  str_4_1(display,empty,mars,venus,empty);
  str_4_2(display,eigth,arm,arm,solar_cross);
  delay(4000);

  str_4_1(display,eigth,arm,arm,solar_cross);
  str_4_2(display,one,pull,foward,empty);
  delay(4000);
  
    
  str_4_1(display,one,pull,foward,empty);
  str_4_2(display,three,near,rotate_clokwise,empty);
  delay(4000);

  str_4_1(display,three,near,rotate_clokwise,empty);
  str_4_2(display,four,starboard,rotate_clokwise,empty);
  delay(4000);
  
  str_4_1(display,four,starboard,rotate_clokwise,empty);//**************/
  /*str_4_2(display,five,conjuction,rotate_clokwise,empty);//
  delay(4000);

  str_4_1(display,five,conjuction,rotate_clokwise,empty);//
  str_4_2(display,one,surround,conjuction,empty);
  delay(4000);

  str_4_1(display,one,surround,conjuction,empty);
  str_4_2(display,five,rotate_counter_clokwise,surround,high);
  delay(4000);

  str_4_1(display,five,rotate_counter_clokwise,surround,high);
  str_4_2(display,one,tell,venus,no);
  delay(4000);

  str_4_1(display,one,tell,venus,no);
  str_4_2(display,one,surround,conjuction,empty);
  delay(4000);

  
  str_4_1(display,one,surround,conjuction,empty);
  str_4_2(display,five,rotate_counter_clokwise,surround,middle);
  delay(4000);
  
  str_4_1(display,five,rotate_counter_clokwise,surround,middle);
  str_4_2(display,one,tell,venus,no);
  delay(4000);

  
  str_4_1(display,one,tell,venus,no);
  str_4_2(display,continue_on_next_line,empty,empty,empty);
  delay(4000);

  display.clear();
}*/

void roulette(SSD1306 display){
  str_4(display,18,empty,orbit,empty,empty);
  delay(4000);
  display.clear();                             // Очищаем экран от предыдущих данных
  display.setTextAlignment(TEXT_ALIGN_CENTER); // Выравниваем текст по центру
  display.setFont(ArialMT_Plain_16);            // Стандартный шрифт из библиотеки
  display.drawString(64, 8, "spacersRunic");
  display.setFont(Chewy_24);                   // Подключаем созданный нами шрифт
  //display.drawString(50, 8, "spacersRunic");      // Первая строка в координаты 64 по оси X и 8 по оси Y
  display.drawString(64, 32, "Roulette");
  display.display();                           // Выводим все на экран
  delay(2000);
  ///1 part
  str_4_1(display,empty,orbit,empty,empty);
  str_4_2(display,empty,mars,venus,empty);
   

  str_4_1(display,empty,mars,venus,empty);
  str_4_2(display,eigth,hand,near,empty);
   
    
  str_4_1(display,eigth,hand,near,empty);
  str_4_2(display,one,hand,conjuction,empty);
   

  str_4_1(display,one,hand,conjuction,empty);
  str_4_2(display,five,near,rotate_counter_clokwise,hold);

  str_4_1(display,five,near,rotate_counter_clokwise,hold);
  str_4_2(display,one,tell,venus,no);
   

  str_4_1(display,one,tell,venus,no);
  str_4_2(display,continue_on_next_line,empty,empty,hold);
   

  str_4_1(display,continue_on_next_line,empty,empty,hold);
  str_4_2(display,seven,carbon,oxygen,water);
   

  str_4_1(display,seven,carbon,oxygen,water);
  str_4_2(display,continue_on_next_line,empty,empty,hold);
   

  str_4_1(display,continue_on_next_line,empty,empty,hold);
  str_4_2(display,one,go,bow,hold);
   

  str_4_1(display,one,go,bow,hold);
  str_4_2(display,one,bow,rotate_counter_clokwise,hold);
   

  str_4_1(display,one,bow,rotate_counter_clokwise,hold);
  str_4_2(display,five,rotate_rigtht,rotate_counter_clokwise,empty);
   

  str_4_1(display,five,rotate_rigtht,rotate_counter_clokwise,empty);
  str_4_2(display,seven,arm,empty,empty);
   

  str_4_1(display,seven,arm,empty,empty);
  str_4_2(display,one,tell,venus,no);
   

  str_4_1(display,one,tell,venus,no);
  str_4_2(display,continue_on_next_line,empty,empty,empty);
   

  str_4_1(display,continue_on_next_line,empty,empty,empty);
  str_4_2(display,empty,empty,empty,empty);
   
 
  /*str_4_1(display,four,rotate_rigtht,rotate_clokwise,empty);
  str_4_2(display,five,conjuction,rotate_clokwise,empty);//
   

  str_4_1(display,five,conjuction,rotate_clokwise,empty);//
  str_4_2(display,one,surround,conjuction,empty);
   

  str_4_1(display,one,surround,conjuction,empty);
  str_4_2(display,five,rotate_counter_clokwise,surround,high);
   

  str_4_1(display,five,rotate_counter_clokwise,surround,high);
  str_4_2(display,one,tell,venus,no);
   

  str_4_1(display,one,tell,venus,no);
  str_4_2(display,one,surround,conjuction,empty);
   

  
  str_4_1(display,one,surround,conjuction,empty);
  str_4_2(display,five,rotate_counter_clokwise,surround,middle);
   
  
  str_4_1(display,five,rotate_counter_clokwise,surround,middle);
  str_4_2(display,one,tell,venus,no);
   

  
  str_4_1(display,one,tell,venus,no);
  str_4_2(display,continue_on_next_line,empty,empty,empty);
   */

  display.clear();
}

void el_loco_complicato(SSD1306 display){
  str_4(display,18,empty,negation,head,over);
  delay(4000);
  display.clear();                             // Очищаем экран от предыдущих данных
  display.setTextAlignment(TEXT_ALIGN_CENTER); // Выравниваем текст по центру
  //display.setFont(ArialMT_Plain_16);            // Стандартный шрифт из библиотеки
  //display.drawString(64, 8, "spacersRunic");
  display.setFont(Chewy_24);                   // Подключаем созданный нами шрифт
  //display.drawString(50, 8, "spacersRunic");      // Первая строка в координаты 64 по оси X и 8 по оси Y
  display.drawString(64, 0, "El loko");  // Первая строка
  display.drawString(64, 32, "complicato");// Вторая строка
  display.display();                           // Выводим все на экран
  delay(2000);
  str_4_1(display,zero,hand,over,empty);
  str_4_2(display,one,tell,venus,no);
   

  str_4_1(display,one,tell,venus,no);
  str_4_2(display,empty,arm,empty,bow);
   

  str_4_1(display,empty,arm,empty,bow);
  str_4_2(display,three,rotate_rigtht,rotate_clokwise,stop_);
   

  str_4_1(display,three,rotate_rigtht,rotate_clokwise,stop_);
  str_4_2(display,seven,carbon,oxygen,water);
   

  str_4_1(display,seven,carbon,oxygen,water);
  str_4_2(display,one,tell,venus,no);
   

  str_4_1(display,one,tell,venus,no);
  str_4_2(display,five,go,stern,empty);
   

  str_4_1(display,five,go,stern,empty);
  str_4_2(display,one,tell,venus,no);
   

  str_4_1(display,one,tell,venus,no);
  str_4_2(display,five,surround,conjuction,empty);
   

  str_4_1(display,five,surround,conjuction,empty);
  str_4_2(display,one,rotate_rigtht,rotate_clokwise,solar_cross);
   

  str_4_1(display,one,rotate_rigtht,rotate_clokwise,solar_cross);
  str_4_2(display,five,saturn,empty,empty);
   

  str_4_1(display,five,saturn,empty,empty);
  str_4_2(display,one,tell,venus,no);
   

  str_4_1(display,one,tell,venus,no);
  str_4_2(display,empty,empty,empty,empty);

  display.clear(); 
  }
  
