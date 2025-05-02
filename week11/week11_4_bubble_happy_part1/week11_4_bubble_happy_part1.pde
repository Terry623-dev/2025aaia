//week11_4_bubble_happy_party1 (要File-Save As week11_4_bubble_happy_part1)
//修自改 week10_1_bubble_happy_part2(可在 github 2025aaia 整個下載zip)
PImage happy1, happy2, happy3; // 第3張圖
PImage [] happy = new PImage[200];// Java的陣列宣告,有200格
int N = 0; 
int [] x = new int[200];//200個X座標
int [] y = new int[200];//200個Y座標
void setup(){
  size(600, 675); // 大小和圖片一樣哦!
  happy1 = loadImage("happy1.jpg");
  happy2 = loadImage("happy2.jpg");
}
void mousePressed(){//每次 mouse 按下去,就變出一張小圖
  happy[N] = happy2.get(mouseX-30, mouseY-30, 60, 60);
  x[N] = mouseX;//記下要放小圖的位置
  y[N] = mouseY;//記下要放小圖的位置
  N++;//現在正是多了一張小圖
}
void draw(){
  background(happy1);
  for(int i=0; i<N; i++){//把每一張小圖片, 用for迴圈畫出來
    image( happy[i], x[i]-30, y[i]-30 );//有幾行程是註解掉
  }
}
