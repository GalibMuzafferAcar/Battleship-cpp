#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}
using namespace std;
int main();
const int satir = 11;
const int sutun = 11;
int bot = 4;
int gemi = 3;
int buyukgemi = 2;
int amiral = 1;
int gameboard[satir][sutun];
int gameboard2[11][11];
int gameboard3[11][11];
void menu()
{
	system("cls");
	setcolor(10);
	cout << "   ###    ##     ## #### ########     ###    ##          ########     ###    ######## ######## #### " << endl;
	cout << "  ## ##   ###   ###  ##  ##     ##   ## ##   ##          ##     ##   ## ##      ##       ##     ##  " << endl;
	cout << " ##   ##  #### ####  ##  ##     ##  ##   ##  ##          ##     ##  ##   ##     ##       ##     ##  " << endl;
	cout << "##     ## ## ### ##  ##  ########  ##     ## ##          ########  ##     ##    ##       ##     ##  " << endl;
	cout << "######### ##     ##  ##  ##   ##   ######### ##          ##     ## #########    ##       ##     ##  " << endl;
	cout << "##     ## ##     ##  ##  ##    ##  ##     ## ##          ##     ## ##     ##    ##       ##     ##  " << endl;
	cout << "##     ## ##     ## #### ##     ## ##     ## ########    ########  ##     ##    ##       ##    #### " << endl;
	cout << " " << endl;
	cout << "1.Oyunu baslat" << endl << "2.Yardim" << endl << "3.Cikis" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	setcolor(8);
	cout << "                         $o                                                 " << endl;
	cout << "                          $                     .........                   " << endl;
	cout << "                        $$$      .oo..     'oooo'oooo'ooooooooo....         " << endl;
	cout << "                         $       $$$$$$$                                    " << endl;
	cout << "                     .ooooooo.   $$!!!!!                                    " << endl;
	cout << "                   .'.........'. $$!!!!!      o$$oo.   ...oo,oooo,oooo'ooo''" << endl;
	cout << "      $          .o'  oooooo   '.$$!!!!!      $$!!!!!       'oo''oooo''     " << endl;
	cout << "   ..o$ooo...    $                '!!''!.     $$!!!!!                       " << endl;
	cout << "   $    ..  '''oo$$$$$$$$$$$$$.    '    'oo.  $$!!!!!                       " << endl;
	cout << "   !.......      '''..$$ $$ $$$   ..        '.$$!!''!                       " << endl;
	cout << "   !!$$$!!!!!!!!oooo......   '''  $$ $$ :o           'oo.                   " << endl;
	cout << "   !!$$$!!!$$!$$!!!!!!!!!!oo.....     ' ''  o$$o .      ''oo..              " << endl;
	cout << "   !!!$$!!!!!!!!!!!!!!!!!!!!!!!!!!!!ooooo..      'o  oo..    $              " << endl;
	cout << "    '!!$$!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!oooooo..  ''   ,$              " << endl;
	cout << "     '!!$!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!oooo..$$              " << endl;
	cout << "      !!$!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!$'              " << endl;
	cout << "      '$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$!!!!!!!!!!!!!!!!!!,              " << endl;
	cout << "  .....$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$.....         " << endl;
	cout << " " << endl;

	setcolor(7);
}
void yardim()
{
	system("cls");
	cout << " Oyun 2 adet saha ve gemilerden olusmaktadir \n karsi tarafin gemilerini ilk batiran taraf kazanir  "<<endl; 
	system("pause");
	main();
}

void wut()
{ 
	for (int i = 0; i <11; i++)
	{
		gameboard[i][0] = i;

		for (int j = 0; j < 11; j++)
		{
			gameboard[0][j] = j;
		}
	}
	}
void Temizle() //oyun tahtasýný temizler
{
	for (int i = 0; i < satir; i++)
	{
		for (int j = 0; j <sutun; j++)
		{
			gameboard[i][j] = 0;
		}
	}

}
void Goster()
{
	wut();
	for (int i = 0; i < 11; i++)
	{
		
		
		for (int j = 0; j < 11; j++)
		{
			
			if (gameboard2[i][j] == 3)
				setcolor(119);
			if (gameboard2[i][j] == 2)
				setcolor(203);
			if (gameboard[i][j] == 1)
				setcolor(229);
			if (gameboard[i][j] == 0)
				setcolor(181);
			cout << " " << gameboard[i][j] << " ";
			setcolor(7);


		}

		cout << endl;
	}
	
}
void RGoster()
{
	for (int i = 0; i < 11; i++)
	{
		gameboard3[i][0] = i;
		
		for (int j = 0; j < 11; j++)
		{
			gameboard3[0][j] = j;

			if (gameboard3[i][j] == 3)
				setcolor(203);
			if (gameboard3[i][j] == 2)
				setcolor(167);
			if (gameboard3[i][j] == 0)
				setcolor(181);
			cout << " " << gameboard3[i][j] << " ";
			setcolor(7);


		}

		cout << endl;
	}


}
void Gemidiz()
{
	int  s = 0;
	cout << "oncelikle 4 adet tek haneli botlarini yerlestir" << endl;
	while (s < bot)
	{
		int x, y;
	adim1:
		cout << "satir gir" << endl;
	bot1:
		cin >> x;
		if (x>10)
		{
			cout << "lutfen 1 ile 10 arasinda bir deger giriniz" << endl;
			goto bot1;
		}
		cout << "sutun gir" << endl;
	bot2:
		cin >> y;
		if (y>10)
		{
			cout << "lutfen 1 ile 10 arasinda bir deger giriniz" << endl;
			goto bot2;
		}
		cout << "sutun gir" << endl;
		if (gameboard[x][y] != 1 && gameboard[x + 1][y] != 1 && gameboard[x - 1][y] != 1 && gameboard[x][y + 1] != 1 && gameboard[x][y - 1] != 1 && gameboard[x + 1][y - 1] != 1 && gameboard[x + 1][y + 1] != 1 && gameboard[x - 1][y - 1] != 1 && gameboard[x - 1][y + 1] != 1)
		{
			s++;
			gameboard[x][y] = 1;
		}
		else
		{
			cout << "burada zaten bir gemi var yada yanýnda bir gemi var" << endl;
			goto adim1;
		}
		Goster();
	}
	s = 0;
	cout << "simdide 3 adet 2 hanelik gemilerini yerlestir oncelikle dikey mi yoksa yatay mi olacagini sec " << endl;
	while (s < gemi) 
	{
		int a, x, y, z;
		cout << "yatay icin *1* dikey icin *2* giriniz" << endl;
	adim2:
		cin >> a;
		if (a == 1)
		{
		adim3:
			cout << "sutun araligini giriniz(lutfen sayilar arasinda 1 fark olacak sekilde giriniz)" << endl;
			cin >> x;
			cin >> y;
			if (x > 10 || y > 10)
			{
				cout << "lutfen 1 ile 10 arasinda bir deger giriniz" << endl;;
				goto adim3;
			}
			if (x - y == 1)
			{
			gemi1:
				cout << "satir giriniz" << endl;
				cin >> z;
				if (z>10)
				{
					cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
					goto gemi1;
				}
				if (gameboard[x][z] != 1 && gameboard[x][z + 1] != 1 && gameboard[x][z - 1] != 1 && gameboard[y][z] != 1 && gameboard[y][z - 1] != 1 && gameboard[y][z + 1] != 1 && gameboard[y - 1][z] != 1 && gameboard[y - 1][z + 1] != 1 && gameboard[y - 1][z - 1] != 1 && gameboard[x + 1][z] != 1 && gameboard[x + 1][z - 1] != 1 && gameboard[x + 1][z + 1] != 1)
				{
					s++;
					gameboard[z][y] = 1;
					gameboard[z][x] = 1;
				}
				else
				{
					cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
					goto adim3;
				}
			}
			else if (x - y == -1)
			{
			gemi2:
				cout << "satýr giriniz" << endl;
				cin >> z;
				if (z>10)
				{
					cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
					goto gemi2;
				}
				if (gameboard[y][z] != 1 && gameboard[y][z + 1] != 1 && gameboard[y][z - 1] != 1 && gameboard[x][z] != 1 && gameboard[x][z - 1] != 1 && gameboard[x][z + 1] != 1 && gameboard[x - 1][z] != 1 && gameboard[x - 1][z + 1] != 1 && gameboard[x - 1][z - 1] != 1 && gameboard[y + 1][z] != 1 && gameboard[y + 1][z - 1] != 1 && gameboard[y + 1][z + 1] != 1)
				{
					s++;
					gameboard[z][y] = 1;
					gameboard[z][x] = 1;
				}
				else
				{
					cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
					goto adim3;
				}
			}
			else
			{
				cout << "lutfen dogru sekilde giriniz!" << endl;
				goto adim3;
			}
		}
		if (a == 2)
		{
		adim4:
			cout << "satir araligini giriniz(lutfen sayilar arasinda 1 fark olacak sekilde giriniz)" << endl;
			cin >> x;
			cin >> y;
			if (x > 10 || y > 10)
			{
				cout << "lutfen 1 ile 10 arasinda bir deger giriniz" << endl;;
				goto adim4;
			}
			if (x - y == 1)
			{
			gemi3:
				cout << "sutunu giriniz" << endl;
				cin >> z;
				if (z>10)
				{
					cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
					goto gemi3;
				}
				if (gameboard[x][z] != 1 && gameboard[x][z + 1] != 1 && gameboard[x][z - 1] != 1 && gameboard[y][z] != 1 && gameboard[y][z - 1] != 1 && gameboard[y][z + 1] != 1 && gameboard[y - 1][z] != 1 && gameboard[y - 1][z + 1] != 1 && gameboard[y - 1][z - 1] != 1 && gameboard[x + 1][z] != 1 && gameboard[x + 1][z - 1] != 1 && gameboard[x + 1][z + 1] != 1)
				{
					s++;
					gameboard[y][z] = 1;
					gameboard[x][z] = 1;
				}
				else
				{
					cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
					goto adim4;
				}
			}
			else if (x - y == -1)
			{
			gemi4:
				cout << "sutunu giriniz" << endl;
				cin >> z;
				if (z>10)
				{
					cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
					goto gemi4;
				}
				if (gameboard[x][z] != 1 && gameboard[x][z + 1] != 1 && gameboard[x][z - 1] != 1 && gameboard[y][z] != 1 && gameboard[y][z - 1] != 1 && gameboard[y][z + 1] != 1 && gameboard[y - 1][z] != 1 && gameboard[y - 1][z + 1] != 1 && gameboard[y - 1][z - 1] != 1 && gameboard[x + 1][z] != 1 && gameboard[x + 1][z - 1] != 1 && gameboard[x + 1][z + 1] != 1)
				{
					s++;
					gameboard[y][z] = 1;
					gameboard[x][z] = 1;
				}
				else
				{
					cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
					goto adim4;
				}
			}
			else
			{
				cout << "lutfen dogru sekilde giriniz!" << endl;
				goto adim4;
			}
		}
		if (a != 1 && a != 2)
		{
			cout << "lütfen 1 yada 2 giriniz!" << endl;
			goto adim2;
		}
		Goster();

	}
	s = 0;
	cout << "sira 2 adet 3 hanelik buyuk gemilerini yerlestirmeye geldi" << endl;
	while (s < buyukgemi)
	{
		int a, x, y, z;
		cout << "yatay icin *1* dikey icin *2* giriniz" << endl;
	bgemi2:
		cin >> a;
		if (a == 1)
		{
			{
			bgemi3:
				cout << "sutun araligini giriniz(lutfen sayilar arasinda 2 fark olacak sekilde giriniz)" << endl;
				cin >> x;
				cin >> y;
				if (x - y == 2)
				{
					cout << "satýr giriniz" << endl;
				bgemi9:
					cin >> z;
					if (z>10)
					{
						cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
						goto bgemi9;
					}
					if (gameboard[z][x] != 1 && gameboard[z][x + 1] != 1 && gameboard[z][y] != 1 && gameboard[z][y - 1] != 1 && gameboard[z][y + 1] != 1 && gameboard[z + 1][x] != 1 && gameboard[z + 1][x + 1] != 1 && gameboard[z + 1][y] != 1 && gameboard[z + 1][y - 1] != 1 && gameboard[z + 1][y + 1] != 1 && gameboard[z - 1][x] != 1 && gameboard[z - 1][x + 1] != 1 && gameboard[z - 1][y] != 1 && gameboard[z - 1][y - 1] != 1 && gameboard[z - 1][y + 1] != 1)
					{
						s++;
						gameboard[z][y] = 1;
						gameboard[z][x - 1] = 1;
						gameboard[z][x] = 1;
					}
					else
					{
						cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
						goto bgemi3;
					}
				}
				else if (x - y == -2)
				{
					cout << "satýr giriniz" << endl;
				bgemi10:
					cin >> z;
					if (z>10)
					{
						cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
						goto bgemi10;
					}
					if (gameboard[z][y] != 1 && gameboard[z][y + 1] != 1 && gameboard[z][x] != 1 && gameboard[z][x - 1] != 1 && gameboard[z][x + 1] != 1 && gameboard[z + 1][y] != 1 && gameboard[z + 1][y + 1] != 1 && gameboard[z + 1][x] != 1 && gameboard[z + 1][x - 1] != 1 && gameboard[z + 1][x + 1] != 1 && gameboard[z - 1][y] != 1 && gameboard[z - 1][y + 1] != 1 && gameboard[z - 1][x] != 1 && gameboard[z - 1][x - 1] != 1 && gameboard[z - 1][x + 1] != 1)
					{
						s++;
						gameboard[z][y] = 1;
						gameboard[z][x + 1] = 1;
						gameboard[z][x] = 1;
					}
					else
					{
						cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
						goto bgemi3;
					}
				}
				else
				{
					cout << "lutfen dogru sekilde giriniz!" << endl;
					goto bgemi3;
				}
			}
		}
		if (a == 2)
		{
		bgemi4:
			cout << "satir araligini giriniz(lutfen sayilar arasinda 2 fark olacak sekilde giriniz)" << endl;
			cin >> x;
			cin >> y;
			if (x > 10 || y > 10)
			{
				cout << "lutfen 1 ile 10 arasinda bir deger giriniz" << endl;;
				goto bgemi4;
			}
			if (x - y == 2)
			{
			bgemi5:
				cout << "sutunu giriniz" << endl;
				cin >> z;
				if (z>10)
				{
					cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
					goto bgemi5;
				}
				if (gameboard[x][z] != 1 && gameboard[x][z + 1] != 1 && gameboard[x + 1][z - 1] != 1 && gameboard[x + 1][z] != 1 && gameboard[x + 1][z + 1] != 1 && gameboard[x + 1][z - 1] != 1 && gameboard[y][z] != 1 && gameboard[y][z + 1] != 1 && gameboard[y][z - 1] != 1 && gameboard[y - 1][z] != 1 && gameboard[y - 1][z + 1] != 1 && gameboard[y - 1][z - 1] != 1 && gameboard[y + 1][z] != 1 && gameboard[y + 1][z + 1] != 1 && gameboard[y + 1][z - 1] != 1)
				{
					s++;
					gameboard[y][z] = 1;
					gameboard[x - 1][z] = 1;
					gameboard[x][z] = 1;
				}
				else
				{
					cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
					goto bgemi4;
				}
			}
			else if (x - y == -2)
			{
			bgemi6:
				cout << "sutunu giriniz" << endl;
				cin >> z;
				if (z>10)
				{
					cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
					goto bgemi6;
				}
				if (gameboard[x][z] != 1 && gameboard[x][z + 1] != 1 && gameboard[x + 1][z - 1] != 1 && gameboard[x + 1][z] != 1 && gameboard[x + 1][z + 1] != 1 && gameboard[x + 1][z - 1] != 1 && gameboard[y][z] != 1 && gameboard[y][z + 1] != 1 && gameboard[y][z - 1] != 1 && gameboard[x - 1][z] != 1 && gameboard[x - 1][z + 1] != 1 && gameboard[x - 1][z - 1] != 1 && gameboard[y + 1][z] != 1 && gameboard[y + 1][z + 1] != 1 && gameboard[y + 1][z - 1] != 1)
				{
					s++;
					gameboard[y][z] = 1;
					gameboard[x + 1][z] = 1;
					gameboard[x][z] = 1;
				}
				else
				{
					cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
					goto bgemi4;
				}
			}
			else
			{
				cout << "lutfen dogru sekilde giriniz!" << endl;
				goto bgemi4;
			}
		}
		if (a != 1 && a != 2)
		{
			cout << "lütfen 1 yada 2 giriniz!" << endl;
			goto bgemi2;
		}
		Goster();
	}
	s = 0;
	cout << "son olarak 1 adet 4 hanelik amiralini yerlestir!" << endl;
	while (s < amiral)
	{
		int a, x, y, z;
		cout << "yatay icin *1* dikey icin *2* giriniz" << endl;
	amiral2:
		cin >> a;
		if (a == 1)
		{
			{
			amiral3:
				cout << "sutun araligini giriniz(lutfen sayilar arasinda 3 fark olacak sekilde giriniz)" << endl;
				cin >> x;
				cin >> y;
				if (x - y == 3)
				{
				amiral9:
					cout << "satýr giriniz" << endl;
					cin >> z;
					if (z>10)
					{
						cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
						goto amiral9;
					}
					if (gameboard[z][x] != 1 && gameboard[z][x + 1] != 1 && gameboard[z][x - 1] != 1 && gameboard[z][y] != 1 && gameboard[z][y - 1] != 1 && gameboard[z][y + 1] != 1 && gameboard[z + 1][x] != 1 && gameboard[z + 1][x + 1] != 1 && gameboard[z + 1][x - 1] != 1 && gameboard[z + 1][y] != 1 && gameboard[z + 1][y - 1] != 1 && gameboard[z + 1][y + 1] != 1 && gameboard[z - 1][x] != 1 && gameboard[z - 1][x + 1] != 1 && gameboard[z - 1][x - 1] != 1 && gameboard[z - 1][y] != 1 && gameboard[z - 1][y - 1] != 1 && gameboard[z - 1][y + 1] != 1)
					{
						s++;
						gameboard[z][y] = 1;
						gameboard[z][x - 2] = 1;
						gameboard[z][x - 1] = 1;
						gameboard[z][x] = 1;
					}
					else
					{
						cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
						goto amiral3;
					}
				}
				else if (x - y == -3)
				{
				amiral10:
					cout << "satýr giriniz" << endl;
					cin >> z;
					if (z>10)
					{
						cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
						goto amiral10;
					}
					if (gameboard[z][x] != 1 && gameboard[z][x + 1] != 1 && gameboard[z][x - 1] != 1 && gameboard[z][y] != 1 && gameboard[z][y - 1] != 1 && gameboard[z][y + 1] != 1 && gameboard[z + 1][x] != 1 && gameboard[z + 1][x + 1] != 1 && gameboard[z + 1][x - 1] != 1 && gameboard[z + 1][y] != 1 && gameboard[z + 1][y - 1] != 1 && gameboard[z + 1][y + 1] != 1 && gameboard[z - 1][x] != 1 && gameboard[z - 1][x + 1] != 1 && gameboard[z - 1][x - 1] != 1 && gameboard[z - 1][y] != 1 && gameboard[z - 1][y - 1] != 1 && gameboard[z - 1][y + 1] != 1)
					{
						s++;
						gameboard[z][x] = 1;
						gameboard[z][y + 2] = 1;
						gameboard[z][y + 1] = 1;
						gameboard[z][y] = 1;
					}
					else
					{
						cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
						goto amiral3;
					}
				}
				else
				{
					cout << "lutfen dogru sekilde giriniz!" << endl;
					goto amiral3;
				}
			}
		}
		if (a == 2)
		{
		amiral4:
			cout << "satir araligini giriniz(lutfen sayilar arasinda 3 fark olacak sekilde giriniz)" << endl;
			cin >> x;
			cin >> y;
			if (x > 10 || y > 10)
			{
				cout << "lutfen 1 ile 10 arasinda bir deger giriniz" << endl;;
				goto amiral4;
			}
			if (x - y == 3)
			{
			amiral5:
				cout << "sutunu giriniz" << endl;
				cin >> z;
				if (z>10)
				{
					cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
					goto bgemi5;
				}
				if (gameboard[x][z] != 1 && gameboard[x][z - 1] != 1 && gameboard[x][z + 1] != 1 && gameboard[x + 1][z] != 1 && gameboard[x + 1][z - 1] != 1 && gameboard[x + 1][z + 1] != 1 && gameboard[x - 1][z] != 1 && gameboard[x - 1][z - 1] != 1 && gameboard[x - 1][z + 1] != 1 && gameboard[y][z] != 1 && gameboard[y][z - 1] != 1 && gameboard[y][z + 1] != 1 && gameboard[y - 1][z] != 1 && gameboard[y - 1][z - 1] != 1 && gameboard[y - 1][z + 1] != 1 && gameboard[y + 1][z] != 1 && gameboard[y + 1][z - 1] != 1 && gameboard[y + 1][z + 1] != 1)
				{
					s++;
					gameboard[y][z] = 1;
					gameboard[x - 2][z] = 1;
					gameboard[x - 1][z] = 1;
					gameboard[x][z] = 1;
				}
				else
				{
					cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
					goto amiral4;
				}
			}
			else if (x - y == -3)
			{
			amiral6:
				cout << "sutunu giriniz" << endl;
				cin >> z;
				if (z>10)
				{
					cout << "lutfen 1 ile 10 arasýnda bir deger giriniz " << endl;
					goto amiral6;
				}
				if (gameboard[x][z] != 1 && gameboard[x][z - 1] != 1 && gameboard[x][z + 1] != 1 && gameboard[x + 1][z] != 1 && gameboard[x + 1][z - 1] != 1 && gameboard[x + 1][z + 1] != 1 && gameboard[x - 1][z] != 1 && gameboard[x - 1][z - 1] != 1 && gameboard[x - 1][z + 1] != 1 && gameboard[y][z] != 1 && gameboard[y][z - 1] != 1 && gameboard[y][z + 1] != 1 && gameboard[y - 1][z] != 1 && gameboard[y - 1][z - 1] != 1 && gameboard[y - 1][z + 1] != 1 && gameboard[y + 1][z] != 1 && gameboard[y + 1][z - 1] != 1 && gameboard[y + 1][z + 1] != 1)
				{
					s++;
					gameboard[x][z] = 1;
					gameboard[y + 2][z] = 1;
					gameboard[y + 1][z] = 1;
					gameboard[y][z] = 1;
				}
				else
				{
					cout << "lutfen gemi olmayan yada baska bir gemiye degmeyen bir bir konum seciniz" << endl;
					goto amiral4;
				}
			}
			else
			{
				cout << "lutfen dogru sekilde giriniz!" << endl;
				goto amiral4;
			}
		}
		if (a != 1 && a != 2)
		{
			cout << "lütfen 1 yada 2 giriniz!" << endl;
			goto amiral2;
		}
		Goster();
	}
}
void RGemidiz()
{
	int  s = 0;

	while (s < bot)
	{
		int x, y;
	radim1:
	rbot1:
		x = rand() % 10 + 1;
		if (x>10)
		{

			goto rbot1;
		}

	rbot2:
		y = rand() % 10 + 1;
		if (y>10)
		{

			goto rbot2;
		}

		if (gameboard2[x][y] != 1 && gameboard2[x + 1][y] != 1 && gameboard2[x - 1][y] != 1 && gameboard2[x][y + 1] != 1 && gameboard2[x][y - 1] != 1 && gameboard2[x + 1][y - 1] != 1 && gameboard2[x + 1][y + 1] != 1 && gameboard2[x - 1][y - 1] != 1 && gameboard2[x - 1][y + 1] != 1)
		{
			s++;
			gameboard2[x][y] = 1;
		}
		else
		{

			goto radim1;
		}

	}
	s = 0;
	
	while (s < gemi)
	{
		int a, x, y, z;

	radim2:
		a = rand() % 2 + 1;
		if (a == 1)
		{
		radim3:

			x = rand() % 10 + 1;
			y = rand() % 10 + 1;
			if (x > 10 || y > 10)
			{

				goto radim3;
			}
			if (x - y == 1)
			{
			rgemi1:

				z = rand() % 10 + 1;
				if (z>10)
				{

					goto rgemi1;
				}
				if (gameboard2[x][z] != 1 && gameboard2[x][z+1] != 1 && gameboard2[x][z-1] != 1 && gameboard2[y][z] != 1 && gameboard2[y][z-1] != 1 && gameboard2[y][z+1] != 1 && gameboard2[y-1][z] != 1 && gameboard2[y-1][z+1] != 1 && gameboard2[y-1][z-1] != 1 && gameboard2[x+1][z] != 1 && gameboard2[x+1][z-1] != 1 && gameboard2[x+1][z+1] != 1)
				{
					s++;
					gameboard2[z][y] = 1;
					gameboard2[z][x] = 1;
				}
				else
				{

					goto radim2;
				}
			}
			else if (x - y == -1)
			{
			rgemi2:

				z = rand() % 10 + 1;
				if (z>10)
				{

					goto rgemi2;
				}
				if (gameboard2[y][z] != 1 && gameboard2[y][z + 1] != 1 && gameboard2[y][z - 1] != 1 && gameboard2[x][z] != 1 && gameboard2[x][z - 1] != 1 && gameboard2[x][z + 1] != 1 && gameboard2[x - 1][z] != 1 && gameboard2[x - 1][z + 1] != 1 && gameboard2[x - 1][z - 1] != 1 && gameboard2[y + 1][z] != 1 && gameboard2[y + 1][z - 1] != 1 && gameboard2[y + 1][z + 1] != 1)
				{
					s++;
					gameboard2[z][x] = 1;
					gameboard2[z][y] = 1;
				}
				else
				{

					goto radim2;
				}
			}
			else
			{

				goto radim2;
			}
		}
		if (a == 2)
		{
		radim4:

			x = rand() % 10 + 1;
			y = rand() % 10 + 1;
			if (x > 10 || y > 10)
			{

				goto radim4;
			}
			if (x - y == 1)
			{
			rgemi3:

				z = rand() % 10 + 1;
				if (z>10)
				{

					goto rgemi3;
				}
				if (gameboard2[x][z] != 1 && gameboard2[x][z + 1] != 1 && gameboard2[x][z - 1] != 1 && gameboard2[y][z] != 1 && gameboard2[y][z - 1] != 1 && gameboard2[y][z + 1] != 1 && gameboard2[y - 1][z] != 1 && gameboard2[y - 1][z + 1] != 1 && gameboard2[y - 1][z - 1] != 1 && gameboard2[x + 1][z] != 1 && gameboard2[x + 1][z - 1] != 1 && gameboard2[x + 1][z + 1] != 1)
				{
					s++;
					gameboard2[y][z] = 1;
					gameboard2[x][z] = 1;
				}
				else
				{

					goto radim2;
				}
			}
			else if (x - y == -1)
			{
			rgemi4:

				z = rand() % 10 + 1;
				if (z>10)
				{

					goto rgemi4;
				}
				if (gameboard2[x][z] != 1 && gameboard2[x][z + 1] != 1 && gameboard2[x][z - 1] != 1 && gameboard2[y][z] != 1 && gameboard2[y][z - 1] != 1 && gameboard2[y][z + 1] != 1 && gameboard2[y - 1][z] != 1 && gameboard2[y - 1][z + 1] != 1 && gameboard2[y - 1][z - 1] != 1 && gameboard2[x + 1][z] != 1 && gameboard2[x + 1][z - 1] != 1 && gameboard2[x + 1][z + 1] != 1)
				{
					s++;
					gameboard2[y][z] = 1;
					gameboard2[x][z] = 1;
				}
				else
				{

					goto radim2;
				}
			}
			else
			{

				goto radim2;
			}
		}
		if (a != 1 && a != 2)
		{

			goto radim2;
		}


	}
	
	s = 0;

	while (s < buyukgemi)
	{
		int a, x, y, z;

	rbgemi2:
		a = rand() % 2 + 1;
		if (a == 1)
		{
			{
			rbgemi3:

				x = rand() % 10 + 1;
				y = rand() % 10 + 1;
				if (x - y == 2)
				{

				rbgemi9:
					z = rand() % 10 + 1;
					if (z>10)
					{

						goto rbgemi9;
					}
					if (gameboard2[z][x] != 1 && gameboard2[z][x + 1] != 1 && gameboard2[z][y] != 1 && gameboard2[z][y - 1] != 1 && gameboard2[z][y + 1] != 1 && gameboard2[z + 1][x] != 1 && gameboard2[z + 1][x + 1] != 1 && gameboard2[z + 1][y] != 1 && gameboard2[z + 1][y - 1] != 1 && gameboard2[z + 1][y + 1] != 1 && gameboard2[z-1][x] != 1 && gameboard2[z - 1][x + 1] != 1 && gameboard2[z - 1][y] != 1 && gameboard2[z - 1][y - 1] != 1 && gameboard2[z - 1][y + 1] != 1)
					{
						s++;
						gameboard2[z][y] = 1;
						gameboard2[z][x - 1] = 1;
						gameboard2[z][x] = 1;
					}
					else
					{

						goto rbgemi2;
					}
				}
				else if (x - y == -2)
				{
				rbgemi10:
					z = rand() % 10 + 1;
					if (z>10)
					{

						goto rbgemi10;
					}
					if (gameboard2[z][y] != 1 && gameboard2[z][y + 1] != 1 && gameboard2[z][x] != 1 && gameboard2[z][x - 1] != 1 && gameboard2[z][x + 1] != 1 && gameboard2[z + 1][y] != 1 && gameboard2[z + 1][y + 1] != 1 && gameboard2[z + 1][x] != 1 && gameboard2[z + 1][x - 1] != 1 && gameboard2[z + 1][x + 1] != 1 && gameboard2[z-1][y] != 1 && gameboard2[z - 1][y + 1] != 1 && gameboard2[z - 1][x] != 1 && gameboard2[z - 1][x - 1] != 1 && gameboard2[z - 1][x + 1] != 1)
					{
						s++;
						gameboard2[z][y] = 1;
						gameboard2[z][x + 1] = 1;
						gameboard2[z][x] = 1;
					}
					else
					{

						goto rbgemi2;
					}
				}
				else
				{

					goto rbgemi2;
				}
			}
		}
		if (a == 2)
		{
		rbgemi4:

			x = rand() % 10 + 1;
			y = rand() % 10 + 1;
			if (x > 10 || y > 10)
			{

				goto rbgemi4;
			}
			if (x - y == 2)
			{
			rbgemi5:

				z = rand() % 10 + 1;
				if (z>10)
				{

					goto rbgemi5;
				}
				if (gameboard2[x][z] != 1 && gameboard2[x][z + 1] != 1 && gameboard2[x + 1][z - 1] != 1 && gameboard2[x + 1][z] != 1 && gameboard2[x + 1][z + 1] != 1 && gameboard2[x + 1][z - 1] != 1 && gameboard2[y][z] != 1 && gameboard2[y][z + 1] != 1 && gameboard2[y][z - 1] != 1 && gameboard2[y - 1][z] != 1 && gameboard2[y - 1][z + 1] != 1 && gameboard2[y - 1][z - 1] != 1 && gameboard2[y + 1][z] != 1 && gameboard2[y + 1][z + 1] != 1 && gameboard2[y + 1][z - 1] != 1)
				{
					s++;
					gameboard2[y][z] = 1;
					gameboard2[x - 1][z] = 1;
					gameboard2[x][z] = 1;
				}
				else
				{

					goto rbgemi2;
				}
			}
			else if (x - y == -2)
			{
			rbgemi6:

				z = rand() % 10 + 1;
				if (z>10)
				{

					goto rbgemi6;
				}
				if (gameboard2[x][z] != 1 && gameboard2[x][z + 1] != 1 && gameboard2[x + 1][z - 1] != 1 && gameboard2[x + 1][z] != 1 && gameboard2[x + 1][z + 1] != 1 && gameboard2[x + 1][z - 1] != 1 && gameboard2[y][z] != 1 && gameboard2[y][z + 1] != 1 && gameboard2[y][z - 1] != 1 && gameboard2[x - 1][z] != 1 && gameboard2[x - 1][z + 1] != 1 && gameboard2[x - 1][z - 1] != 1 && gameboard2[y + 1][z] != 1 && gameboard2[y + 1][z + 1] != 1 && gameboard2[y + 1][z - 1] != 1)
				{
					s++;
					gameboard2[y][z] = 1;
					gameboard2[x + 1][z] = 1;
					gameboard2[x][z] = 1;
				}
				else
				{

					goto rbgemi2;
				}
			}
			else
			{

				goto rbgemi2;
			}
		}
		if (a != 1 && a != 2)
		{

			goto rbgemi2;
		}

	}
	
	s = 0;

	while (s < amiral)
	{
		int a, x, y, z;

	ramiral2:
		a = rand() % 2 + 1;
		if (a == 1)
		{
			{
			ramiral3:

				x = rand() % 10 + 1;
				y = rand() % 10 + 1;
				if (x - y == 3)
				{
				ramiral9:
					z = rand() % 10 + 1;
					if (z>10)
					{

						goto ramiral9;
					}
					if (gameboard2[z][x] != 1 && gameboard2[z][x+1] != 1 && gameboard2[z][x-1] != 1 && gameboard2[z][y] != 1 && gameboard2[z][y-1] != 1 && gameboard2[z][y+1] != 1 && gameboard2[z+1][x] != 1 && gameboard2[z+1][x + 1] != 1 && gameboard2[z+1][x - 1] != 1 && gameboard2[z+1][y] != 1 && gameboard2[z+1][y - 1] != 1 && gameboard2[z+1][y + 1] != 1 && gameboard2[z-1][x] != 1 && gameboard2[z-1][x + 1] != 1 && gameboard2[z-1][x - 1] != 1 && gameboard2[z-1][y] != 1 && gameboard2[z-1][y - 1] != 1 && gameboard2[z-1][y + 1] != 1 )
					{
						s++;
						gameboard2[z][y] = 1;
						gameboard2[z][x - 2] = 1;
						gameboard2[z][x - 1] = 1;
						gameboard2[z][x] = 1;
					}
					else
					{

						goto ramiral2;
					}
				}
				else if (x - y == -3)
				{
				ramiral10:
					z = rand() % 10 + 1;
					if (z>10)
					{

						goto ramiral10;
					}
					if (gameboard2[z][x] != 1 && gameboard2[z][x + 1] != 1 && gameboard2[z][x - 1] != 1 && gameboard2[z][y] != 1 && gameboard2[z][y - 1] != 1 && gameboard2[z][y + 1] != 1 && gameboard2[z + 1][x] != 1 && gameboard2[z + 1][x + 1] != 1 && gameboard2[z + 1][x - 1] != 1 && gameboard2[z + 1][y] != 1 && gameboard2[z + 1][y - 1] != 1 && gameboard2[z + 1][y + 1] != 1 && gameboard2[z - 1][x] != 1 && gameboard2[z - 1][x + 1] != 1 && gameboard2[z - 1][x - 1] != 1 && gameboard2[z - 1][y] != 1 && gameboard2[z - 1][y - 1] != 1 && gameboard2[z - 1][y + 1] != 1)
					{
						s++;
						gameboard2[z][y] = 1;
						gameboard2[z][x + 2] = 1;
						gameboard2[z][x + 1] = 1;
						gameboard2[z][x] = 1;
					}
					else
					{

						goto ramiral2;
					}
				}
				else
				{

					goto ramiral2;
				}
			}
		}
		if (a == 2)
		{
		ramiral4:

			x = rand() % 10 + 1;
			y = rand() % 10 + 1;
			if (x > 10 || y > 10)
			{

				goto ramiral4;
			}
			if (x - y == 3)
			{
			ramiral5:

				z = rand() % 10 + 1;
				if (z>10)
				{

					goto ramiral5;
				}
				if (gameboard2[x][z] != 1 && gameboard2[x][z-1] != 1 && gameboard2[x][z+1] != 1 && gameboard2[x+1][z] != 1 && gameboard2[x+1][z - 1] != 1 && gameboard2[x+1][z + 1] != 1 && gameboard2[x-1][z] != 1 && gameboard2[x-1][z - 1] != 1 && gameboard2[x-1][z + 1] != 1 && gameboard2[y][z] != 1 && gameboard2[y][z - 1] != 1 && gameboard2[y][z + 1] != 1 && gameboard2[y-1][z] != 1 && gameboard2[y-1][z - 1] != 1 && gameboard2[y-1][z + 1] != 1 && gameboard2[y+1][z] != 1 && gameboard2[y+1][z - 1] != 1 && gameboard2[y+1][z + 1] != 1 )
				{
					s++;
					gameboard2[y][z] = 1;
					gameboard2[y + 1][z] = 1;
					gameboard2[x - 1][z] = 1;
					gameboard2[x][z] = 1;
				}
				else
				{

					goto ramiral2;
				}
			}
			else if (x - y == -3)
			{
			ramiral6:

				z = rand() % 10 + 1;
				if (z>10)
				{

					goto ramiral6;
				}
				if (gameboard2[x][z] != 1 && gameboard2[x][z - 1] != 1 && gameboard2[x][z + 1] != 1 && gameboard2[x + 1][z] != 1 && gameboard2[x + 1][z - 1] != 1 && gameboard2[x + 1][z + 1] != 1 && gameboard2[x - 1][z] != 1 && gameboard2[x - 1][z - 1] != 1 && gameboard2[x - 1][z + 1] != 1 && gameboard2[y][z] != 1 && gameboard2[y][z - 1] != 1 && gameboard2[y][z + 1] != 1 && gameboard2[y - 1][z] != 1 && gameboard2[y - 1][z - 1] != 1 && gameboard2[y - 1][z + 1] != 1 && gameboard2[y + 1][z] != 1 && gameboard2[y + 1][z - 1] != 1 && gameboard2[y + 1][z + 1] != 1)
				{
					s++;
					gameboard2[y][z] = 1;
					gameboard2[y -1][z] = 1;
					gameboard2[x + 1][z] = 1;
					gameboard2[x][z] = 1;
				}
				else
				{

					goto ramiral2;
				}
			}
			else
			{

				goto ramiral2;
			}
		}
		if (a != 1 && a != 2)
		{

			goto ramiral2;
		}

	}
}
int Saldýrý(int x, int y)
{
	if (gameboard2[x][y] == 1)
	{
		gameboard2[x][y] = 2;
		gameboard3[x][y] = 2;
		return 1;

	}
	
		gameboard2[x][y] = 3;
		gameboard3[x][y] = 3;
		return 2;
	
	}
int RSaldýrý(int x, int y)
{
	if (gameboard[x][y] == 1)
	{
		gameboard[x][y] = 2;
		return 1;

	}
	gameboard[x][y] = 3;
		return 2;
	
}
int Gemisay()
{
	int c = 0;

	for (int i = 1; i < satir; i++)
	{
		for (int j = 1; j < sutun; j++)

			if (gameboard2[i][j] == 1)
				c++;
	}
	return c;
}
int RGemisay()
{
	int c = 0;

	for (int i = 1; i < satir; i++)
	{
		for (int j = 1; j < sutun; j++)

			if (gameboard[i][j] == 1)
				c++;
	}
	return c;
}
void Kazan()
{
	int x;
	RGoster();
	cout << "TEBRÝKLER KAZANDIN" << endl;
	cout << "tekrar oynamak icin 1 cikmak icin 2 yi tusla" << endl;
	cin >> x;
	if (x == 1)
		main();
	if (x == 2)
		exit(0);
}
void Kayýp()
{
	int x;
	Goster();
	cout << "KAYBETTÝN" << endl;
	cout << "tekrar oynamak icin 1 cikmak icin 2 yi tusla" << endl;
	cin >> x;
	if (x == 1)
		main();
	if (x == 2)
		exit(0);
}
void oyun()
{
	int s = 0;;
	system("cls");
	cout << "Merhaba oyuna hosgeldin hadi oncelikle gemilerimizi yerlestirelim!" << endl;
	Gemidiz();
	RGemidiz();
	system("cls");
	Goster();
	cout << "simdi oyuna baslayabiliriz" << endl;
	while (s < 1000)
	{
		
		s++;
		int kon1, kon2, kon3, kon4;
		cout << "simdi saldirmak istedigin konumu gir!" << endl;
		cin >> kon1 >> kon2;
		if (Saldýrý(kon1, kon2) == 1)
			cout << "basarili!" << endl;
		else
			cout << "kacirdin ! pes etme !" << endl;

		if (Gemisay() == 0)
			Kazan();


		kon3 = rand() % 10 + 1;
		kon4 = rand() % 10 + 1;
		if (RSaldýrý(kon3, kon4) == 1)
			cout << "AH ! VURULDUN !" << endl;
		else
			cout << "Rakip kacirdi" << endl;
		if (RGemisay() == 0)
			Kayýp();

		cout << "SENIN SAHAN" << endl;
		Goster();
		cout << "RAKIP SAHASI" << endl;
		RGoster();
	}

	
}
int main()
{
	srand(time(NULL));
	int x;
	menu();
	cin >> x;
	if (x == 1)
		oyun();
	if (x == 2)
		yardim();
	if (x == 3)
		exit(0);
	
		system("pause");
}
