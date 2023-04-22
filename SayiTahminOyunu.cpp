#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	bool oyunaDevamEt = 1, tahmineDevamEt = 1;
	int rastgeleSayi,tahminSayaci,tahmin;
	char secenek;
	srand(time(NULL));
	while (oyunaDevamEt)
	{
		system("CLS"); // Yeni oyuna Başlamadan Önce Ekranı Temizle
		tahminSayaci = 0;
		rastgeleSayi = rand() % 9000 + 1000; // 1000 ile 9999 arasında rastgele sayı üret
		cout << "Oyun Basliyor!!! Senin Icin 1000 ile 9999 Arasinda Bir Sayi Tuttum\n";
		while (tahmineDevamEt)
		{
			cout << "Lutfen Tahminini Gir: ";
			cin >> tahmin;
			tahminSayaci++;
			while (tahmin < 1000 || tahmin > 9999)
			{
				cout << "DİKKAT! 1000 ile 9999 Arasinda Bir Tahmin Girmelisin: ";
				cin >> tahmin;
				tahminSayaci++;
			}
			if (tahmin == rastgeleSayi)
			{
				cout << "TEBRIKLER!!!" << tahminSayaci << ". Tahmininde Buldun\n";
				cout << "Oyuna Devam Etmek Icin E/e ya da H/h. = ";
				cin >> secenek;
				if (secenek == 'E' || secenek == 'e')
				{
					break;
				}
				else
				{
					oyunaDevamEt = 0;
					break;
				}
			}
			else if (tahmin < rastgeleSayi)
			{
				cout << "Kucuk Bir Sayi Tahminde Bulundun.\n";
			}
			else
			{
				cout << "Buyuk Bir Sayi Tahminde Bulundun.\n";
			}
		}
	}
	return 0;
}