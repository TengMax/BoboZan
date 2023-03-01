#include <windows.h>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;//变量不要定义在这上面

string XRC[1000] = {"愤怒的", "厉害的", "聪明的", "勤奋的", "狡猾的", "保守的",  "招摇的", "弱小的", "诡异的", "搞笑的", "保守的", "懒惰的", "着急的", "弱小的", "愤怒的", "得意的", "保守的"};
string MC[1000] = {"玉米", "香蕉", "西瓜", "苹果", "梨", "哈密瓜", "火龙果", "铁锤", "菠萝", "菠萝", "苹果", "柚子"};
string XTS[1000] = {
	"小贴士：敌人的属性是随机的哦！",
	"小贴士：打架之前要明确自己的属性哦！",
	"小贴士：存在稀有小贴士哦！",
	"小贴士：商店也许会有你想要的东西……",
	"小贴士：敌人的属性是随机的哦！",
	"稀有小贴士：如果你“波波攒”很强的话，这个也会身手不俗。",
	"小贴士：打架之前要明确自己的属性哦！",
	"小贴士：敌人的属性是随机的哦！",
	"小贴士：敌人的属性是随机的哦！",
	"稀有小贴士：如果你“波波攒”很强的话，这个也会身手不俗。",
	"小贴士：存在稀有小贴士哦！",
	"小贴士：商店也许会有你想要的东西……",
	"小贴士：打架之前要明确自己的属性哦！",
	"小贴士：打架之前要明确自己的属性哦！",
	"小贴士：商店也许会有你想要的东西……",
	"小贴士：敌人的属性是随机的哦！",
	"小贴士：打架之前要明确自己的属性哦！",
	"小贴士：敌人的属性是随机的哦！",
	"小贴士：商店也许会有你想要的东西……",
	"稀有小贴士：如果你“波波攒”很强的话，这个也会身手不俗。",
	"小贴士：打架之前要明确自己的属性哦！",
	"小贴士：存在稀有小贴士哦！",
	"小贴士：打架之前要明确自己的属性哦！",
	"小贴士：商店也许会有你想要的东西……",
	"小贴士：敌人的属性是随机的哦！",
	"小贴士：打架之前要明确自己的属性哦！",
	"小贴士：敌人的属性是随机的哦！",
	"小贴士：商店也许会有你想要的东西……",
	"小贴士：存在稀有小贴士哦！"
};

int MaxBlood = 5;
int /* Mag -> 自创单词 */MaxMag = 1;
int ChangShu = 0;
int gold = 0;

void seet(int a);
void init();
void RJDZ();
bool FirstHandle();
string TakeName();
void XLS();
void SC();

void seet(int a) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

void Name() {
	cout << "|------ 作品来自 ------|\n";
	Sleep(500);
	seet(1);
	cout << "TTTTTTTTTTTTTTTTTTTTTTTT\n";//我就是他，他就是我
	seet(2);
	Sleep(250);
	cout << "eeeeeeeeeeeeeeeeeeeeeeee\n";
	seet(3);
	Sleep(250);
	cout << "nnnnnnnnnnnnnnnnnnnnnnnn\n";
	seet(5);
	Sleep(250);
	cout << "gggggggggggggggggggggggg\n";
	seet(6);
	Sleep(250);
	cout << "MMMMMMMMMMMMMMMMMMMMMMMM\n";
	seet(7);
	Sleep(250);
	cout << "aaaaaaaaaaaaaaaaaaaaaaaa\n";
	seet(8);
	Sleep(250);
	cout << "xxxxxxxxxxxxxxxxxxxxxxxx\n";
	Sleep(3500);
	seet(7);
	system("pause");
	system("cls");
	return ;
}

void init() {
	MessageBox(0, "这本来是一个桌游，被我复刻成了手游，自己摸索吧！", "Caption", MB_OK);
	seet(6);
	cout << "原型自————";
	seet(3);
	cout << "“波波攒”";
	seet(7);
	cout << "。\n\n";
	Sleep(3000);
	system("cls");
	Sleep(500);
	
	seet(4);
	cout << "               ------炮------\n";
	Sleep(500);
	seet(5);
	cout << "               <<<<<<也>>>>>>\n";
	Sleep(500);
	seet(6);
	cout << "               \\\\\\\\\\\\会//////\n";
	seet(1);
	Sleep(500);
	cout << "               ------失------\n";
	Sleep(500);
	seet(2);
	cout << "               <<<<<<效>>>>>>\n";
	Sleep(500);
	seet(8);
	cout << "             \\\\\\\\\\版本2 .0/////\n";
	Sleep(3000);
	seet(7);
	system("pause");
	system("cls");
	Sleep(750);
	Name();
	return ;
}

string TakeName()  {
	return XRC[rand() % 14] + MC[rand() % 17];
}

void XLS() {
	system("cls");
	seet(6);
	cout << XTS[rand() % 29] << endl;
	Sleep(3000);
	system("cls");
	seet(9);
	cout << "1.机 VS 机\n";
	Sleep(250);
	seet(3);
	cout << "2.人 VS 人\n";
	Sleep(250);
	seet(7);
	cout << "3.人 VS 机\n\n";
	Sleep(250);
	seet(6);
	cout << "请选择(ESC退出):\n";
	while (true) {
		int a = _getwch();
		if (a == 27)
			break;
		if (a == '1') {
			seet(rand() % 7 + 1);
			cout << "敬请期待\n";
			seet(7);
			continue;
		} else if (a == '2') {
			seet(rand() % 7 + 1);
			cout << "敬请期待\n";
			seet(7);
			continue;
		} else if (a == '3') {
			RJDZ();
			break;
		} else if (a == 'g') {
			seet(7);
			gold += 100;
			break;
		} else {
			seet(rand() % 7 + 1);
			cout << "ERROR:请输入正确的数字!\n";
			seet(7);
			continue ;
		}
	}
	return ;
}

void RJDZ() {
	system("cls");
	seet(9);
	cout << XTS[rand() % 29] << endl;
	Sleep(3000);
	system("cls");
	seet(6);
	cout << "正在匹配敌人...";
	for (int i = 0; i < 10; i ++) {
		cout << "\b\b\b";
		cout << ".";
		Sleep(100);
		cout << ".";
		Sleep(100);
		cout << ".";
		Sleep(100);
	}
	cout << "\n";
	system("cls");
	seet(7);
	cout << "请看敌人名片：\n";
	int RobotMaxBlood = rand() % MaxBlood + MaxBlood - 3, RobotNowBlood = RobotMaxBlood;
	int MyNowBlood = MaxBlood;
	int RobotMag = rand() % (MaxMag + 1) + 1;
	int MyMag = MaxMag;
	seet(1);
	string NowName = TakeName();
	Sleep(3000);
	cout << "姓名：" << NowName << endl;
	Sleep(100);
	seet(2);
	cout << "初始血量：" << RobotMaxBlood << endl;
	Sleep(100);
	seet(3);
	cout << "初始蓄力：" << RobotMag << endl << endl;
	Sleep(1500);
	cout << "准备好开始游戏了吗？(ESC退出)\n";
	seet(6);
	cout << "请做出你的回答...\n";
	seet(7);
	if (_getwch() == 27) return ;
	system("cls");
	int HuiHe = 1;
	while (true) {
		seet(6);
		cout << "第" << HuiHe << "回合，开始！\n";
		seet(7);
		cout << "你的血量：" ;
		seet(4);
		for (int i = 0; i < MyNowBlood; i ++) {
			cout << "@";
		}
		cout << endl;
		seet(7);
		cout << "你的蓄力：" ;
		seet(2);
		for (int i = 0; i < MyMag; i ++) {
			cout << "*";
		}
		cout << endl << endl;
		seet(7);
		cout << NowName << "的血量：" ;
		seet(4);
		for (int i = 0; i < RobotNowBlood; i ++) {
			cout << "@";
		}
		cout << endl;
		seet(7);
		cout << NowName << "的蓄力：" ;
		seet(2);
		for (int i = 0; i < RobotMag; i ++) {
			cout << "*";
		}
		cout << endl << endl;
		seet(rand() % 7 + 1);
		cout << NowName << "出招中...";
		for (int i = 0; i < 10; i++) {
			cout << "\b\b\b";
			Sleep(250);
			cout << "...";
		}
		int ZhaoShi;
		while (true) {
			ZhaoShi = rand() % 4 + 1;
			if (ZhaoShi == 1) {
				RobotMag ++;
				break;
			} else if (ZhaoShi == 2) {
				if (RobotMag <= 0) {
					continue;
				}
				RobotMag --;
				break;
			} else if (ZhaoShi == 3) {
				if (RobotMag <= 1) {
					continue;
				}
				RobotMag -= 2;
				break;
			} else if (ZhaoShi == 4) {
				break;
			}
		}
		cout << "\n" << NowName << "出招完毕，请出招：\n";
		seet(7);
		cout << "1.攒(攒积力量攻击)\n";
		Sleep(100);
		cout << "2.枪(普通攻击，需消耗1点力量，伤害×1，枪与枪可以抵消)\n";
		Sleep(100);
		cout << "3.炮(大招攻击，需消耗2点力量，伤害×2，炮与炮可以抵消)\n";
		Sleep(100);
		cout << "4.盾(防御，无需消耗力量，使对方攻击伤害-1，若对方不攻击，则无效)\n";
		Sleep(500);
		int Choose;
		while (true) {
			seet(6);
			cout << "请做出你的回答...\n";
			seet(4);
			Choose = _getwch();
			if (Choose == '1') {
				MyMag ++;
				break;
			} else if (Choose == '2') {
				if (MyMag <= 0) {
					cout << "蓄力不够！！！\n";
					continue;
				}
				MyMag --;
				break;
			} else if (Choose == '3') {
				if (MyMag <= 1) {
					cout << "蓄力不够！！！\n";
					continue;
				}
				MyMag -= 2;
				break;
			} else if (Choose == '4') {
				break;
			} else {
				cout << "请输入正确的数字！！！\n";
				continue;
			}
		}
		Choose -= '0';
		seet(7);
		system("cls");
		
		//_____________________________________________________
		
		cout << "你选择了";
		
		seet(Choose);
		if (Choose == 1) {
			cout << "攒\n";
			seet(7);
		} else if (Choose == 2) {
			cout << "枪\n";
			seet(7);
		} else if (Choose == 3) {
			cout << "炮\n";
			seet(7);
		} else if (Choose == 4) {
			cout << "盾\n";
			seet(7);
		}
		
		cout << NowName << "选择了";
		
		seet(ZhaoShi);
		
		if (ZhaoShi == 1) {
			cout << "攒\n";
			seet(7);
		} else if (ZhaoShi == 2) {
			cout << "枪\n";
			seet(7);
		} else if (ZhaoShi == 3) {
			cout << "炮\n";
			seet(7);
		} else if (ZhaoShi == 4) {
			cout << "盾\n";
			seet(7);
		}
		Sleep(500);
		cout << "\n正在判定...\n";
		Sleep(1000);
		do { //血量更改
			if (ZhaoShi == 2) {
				if (Choose == 1) {
					MyNowBlood --;
					break;
				} else if (Choose == 2) {
					break;
				} else if (Choose == 3) {
					RobotNowBlood --;
					break;
				} else if (Choose == 4) {
					break;
				}
			} else if (ZhaoShi == 1) {
				if (Choose == 1) {
					break;
				} else if (Choose == 2) {
					RobotNowBlood --;
					break;
				} else if (Choose == 3) {
					RobotNowBlood -= 2;
					break;
				} else if (Choose == 4) {
					break;
				}
			} else if (ZhaoShi == 3) {
				if (Choose == 1) {
					MyNowBlood -= 2;
					break;
				} else if (Choose == 2) {
					MyNowBlood --;
					break;
				} else if (Choose == 3) {
					break;
				} else if (Choose == 4) {
					MyNowBlood --;
					break;
				}
			} else if (ZhaoShi == 4) {
				if (Choose == 1) {
					break;
				} else if (Choose == 2) {
					break;
				} else if (Choose == 3) {
					RobotNowBlood --;
					break;
				} else if (Choose == 4) {
					break;
				}
			}
		} while (false);
		seet(6);
		if (MyNowBlood <= 0) {
			seet(4);
			cout << NowName << "获胜了！\n";
			cout << "你们撑住了" << HuiHe << "回合\n";
			Sleep(3000);
			break;
		}
		if (RobotNowBlood <= 0) {
			seet(4);
			cout << "你获胜了！\n";
			cout << "你们撑住了" << HuiHe << "回合\n";
			ChangShu ++;
			
			int PlusBlood = rand() % 2 + 1;
			int PlusMag = rand() % 2 + 1;
			
			seet(3);
			cout << "血量增加" << PlusBlood << "格\n";
			seet(6);
			cout << "蓄力增加" << PlusMag << "格\n";
			seet(7);
			cout << "金币加5!!!\n";
			gold += 5;
			MaxBlood += PlusBlood;
			MaxMag += PlusMag;
			Sleep(3000);
			break;
		}
		cout << "\n什么事情都没有发生(谁都没有死)" << endl;
		Sleep(3000);
		system("cls");
		HuiHe ++;
	}
	system("cls");
	seet(7);
	return ;
}

void SC() {
	system("cls");
	seet(8);
	cout << XTS[rand() % 29] << endl;
	Sleep(3000);
	system("cls");
	seet(7);
	cout << "欢迎光临本店！\n\n";
	Sleep(300);
	seet(1);
	cout << "1. 13金币兑换一格血量\n";
	Sleep(250);
	seet(2);
	cout << "2. 10金币兑换一格蓄力\n";
	Sleep(500);
	seet(6);
	cout << "\n请做出你的选择(ESC退出):\n";
	while (true) {
		int a = _getwch();
		if (a == 27) {
			break;
		}
		if (a == '1') {
			seet(5);
			cout << "请输入购买个数：";
			seet(7);
			int Many;
			cin >> Many;
			cout << "\n\n";
			if (gold < 13 * Many) {
				seet(rand() % 7 + 1);
				cout << "你金币不够,再见！\n";
				Sleep(2000);
				seet(7);
				break;
			}
			MaxBlood += Many;
			gold -= 13 * Many;
			break;
		} else if (a == '2') {
			seet(5);
			cout << "请输入购买个数：";
			seet(7);
			seet(7);
			int Many;
			cin >> Many;
			cout << "\n\n";
			if (gold < 10 * Many) {
				seet(rand() % 7 + 1);
				cout << "你金币不够,再见！\n";
				Sleep(2000);
				seet(7);
				break;
			}
			MaxMag += Many;
			gold -= 10 * Many;
			break;
		} else {
			seet(rand() % 7 + 1);
			cout << "ERROR:请输入正确的数字!\n";
			seet(7);
			continue ;
		}
	}
	return ;
}

bool FirstHandle() {
	seet(1);
	cout << "你的金币数：" << gold << endl;
	seet(9);
	cout << "你的初始蓄力：" << MaxMag << endl;
	Sleep(100);
	seet(8);
	cout << "你的最高血量：" << MaxBlood << endl;
	Sleep(100);
	seet(2);
	cout << "你胜利过的场数：" << ChangShu << endl;
	Sleep(100);
	seet(7);
	cout << "1.排位赛(分数的赛场)\n";
	seet(4);
	cout << "2.淘汰赛(质量的角逐)\n";
	seet(3);
	cout << "3.训练赛(毅力的磨炼)\n";
	seet(5);
	cout << "4.商城\n";
	Sleep(100);
	seet(6);
	cout << "请选择(ESC退出)：\n";
	seet(7);
	while (true) {
		int a = _getwch();
		if (a == ' ')
			continue ;
		if (a == 27) {
			return false;
		}
		if (a == '1') {
			seet(rand() % 7 + 1);
			cout << "敬请期待！\n";
			seet(7);
			continue ;
		} else if (a == '2') {
			seet(rand() % 7 + 1);
			cout << "敬请期待！\n";
			seet(7);
			continue ;
		} else if (a == '3') {
			XLS();
			break;
		} else if (a == '4') {
			SC();
			break;
		} else {
			seet(rand() % 7 + 1);
			cout << "ERROR:请输入正确的数字!\n";
			seet(7);
			continue ;
		}
	}
	return true;
}

int main() {
	srand(time(0));
	init();
	while (true) {
		bool Tmp = FirstHandle();
		if (!Tmp)
			return 0;
		system("cls");
	}
	return 0;
}
