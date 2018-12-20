  #include<graphics.h>
  #include<dos.h>
  #include<conio.h>
  #include<iostream.h>
  void main()
  {
  clrscr();
  int gd=DETECT,gm,a,i;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  for(i=0;i<600;i++)
  {
  line(50+i,405,100+i,405);
  line(75+i,375,125+i,375);
  line(50+i,405,75+i,375);
  line(100+i,405,125+i,375);
  line(150+i,405,100+i,345);
  line(75+i,375,75+i,370);
  line(70+i,370,80+i,370);
  line(80+i,345,100+i,345);
  circle(150+i,405,30);
  circle(50+i,405,30);
  rectangle(getmaxx()-i,436,650-i,431);
  line(0,436,getmaxx(),436);
  delay(5);
  cleardevice();
  }
  getch();
  }
