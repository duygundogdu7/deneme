#include "SimpleDraw.h"

/* 
   Texti player olarak düşünün
   gamedenemeye eklediğim SimpleDraw'ın yeni versiyonuyla compile edip deneyin, çalışır
 
   En basit şekilde texti yukarı aşağı sağa sola hareket ettiriyo
*/



int main()
{
  // burda gerekli ne varsa initialize edilmesi lazım
  //Player player;
  //CircleEnemy circle1;
  //CircleEnemy circle2;
  // gibi gibi

	setWindowSize(1000, 700);
  
  //Bu tabi player ın koordinatları olucak
  //Burda text in koordinatları
	int x = 50, y = 600;
  
  
	while (true)
	{
   
   // Ekranı temizler (kocaman bi beyaz kare çizerek)
		useBrush(1, RGB(255, 255, 255));
		drawRectangle(0, 0, 1000, 700);
    
    //clear() fonksiyonu gibi bişey olabilir
    //çizdiğimiz her şeyi tekrar silmek yerine
    //bütün ekranı siler
		
    
    
    /*  Burdaki işi player.move fonksiyonu halledicek
    move fonksiyonunda yanlış bi yere gittiğini saptarsa
    koordinatları arttırmaz
    yanlış bi yere çizilmemesini sağlar*/
    
    // Bastığı tuşlara göre koordinatlarını artırır
    if (getKey('W'))
			y -= 5;
		if (getKey('D'))
			x += 5;
		if (getKey('A'))
			x -= 5;
		if (getKey('S'))
			y += 5;
      
    
    
    //Koordinat arttırma bittikten sonra en son halini çizer
    //Buraya kadar gelen koordinatlar bütün kontrolleri geçtikten sonra gelir
    
    //tabi ben kontrol etmedim ekran dışınada kaçıyo manyak
		drawText(x, y, "I'm a square");
    
    //draw circleEnemy
    //draw bullets
    
    //herşeyi çiz
    
    //Saniyede 55 kare çiziyo
		Sleep(18);
	}
}
