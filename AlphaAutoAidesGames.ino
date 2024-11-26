#include <Mouse.h>
void setup() {
  Serial.begin(9600);
  Serial.println("Arduino已启动...");
  Mouse.begin(); //初始化鼠标
}

void loop() {
  if(Serial.available()>0){
    String command=Serial.readStringUntil('\n');
    if(command=="ON"){
      Serial.println("收到命令：开启");
    }else if(command=="OFF"){
      Serial.println("收到命令：关闭");
    }else{
      Serial.println("未知命令：" + command);
    }
  }
}
