//week14_5_sound
//Sketch0 - Library - Manage Libraries...
// 安裝 Sound 後, 開始寫
//選單 File - Example 選 Libraris核心函式庫 Sound-Soundfile-
//在自己寫
import processing.sound.*; // Java 使用Sound 外掛
SoundFile music; //宣告一個變數music
void setup(){
  size(640, 360);
  music = new SoundFile(this, "In Game Music.mp3");
  music.play(); //play()播放
}
void draw(){
  //裡面是空白
}
  
  
