#include "Form1.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <random>
#include <algorithm>
#include <assert.h>
#include "pch.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace std;
[STAThreadAttribute]



void main(cli::array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	Zemlyanova932001::Form1 form;

	Application::Run(% form);

}

// Данные 
	int a, b, c, d, h, f, g;
	int money, m; 
	int xpU = 0, dmU = 0;
	int xpB = 0, dmB = 0;


class Component { // абстрактный
protected:
	int XP;
	int damage;
	int cost;
public:
	virtual int getCost() = 0;
	virtual int getXP() = 0;
	virtual int getDamage() = 0;
	virtual void addComponent(Component* p) { assert(false); }
	virtual void Attac(Component* b) { assert(false); }
	void setXP(int xp) { XP = xp; }

};

class Composite : public Component {
	vector<Component*> c;
public:

	int getCost() {
		cost = 0;
		for (int i = 0; i < c.size(); i++) {
			cost += c[i]->getCost();
		}
		return cost;
	}

	int getXP() {
		XP = 0;
		for (int i = 0; i < c.size(); i++) {
			XP += c[i]->getXP();
		}
		return XP;
	}

	int getDamage() {
		damage = 0;
		for (int i = 0; i < c.size(); i++) {
			damage += c[i]->getDamage();
		}
		return damage;
	}

	void addComponent(Component* p) {
		c.push_back(p);
	}
};

class Pea_Shooter : public Component { // Горохострел Pea_Shooter (XP = 100; cost = 100; damage = 100;)
public:
	Pea_Shooter() {
		XP = 75;
		cost = 100;
		damage = 100;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

class Snow_Peas : public Component { // Снежный горох Snow_Peas (XP = 150; cost = 175; damage = 70;)
public:
	Snow_Peas() {
		XP = 175;
		cost = 175;
		damage = 100;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

class Cherry_Bomb :public Component { // вишневая бомба Cherry_Bomb (XP = 500; cost = 400; damage = 200;)
public:
	Cherry_Bomb() {
		XP = 350;
		cost = 400;
		damage = 350;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

class Cabbage_Pult :public Component { // Капустапульта Cabbage_Pult (XP = 400; cost = 275; damage = 150;)
public:
	Cabbage_Pult() {
		XP = 300;
		cost = 275;
		damage = 150;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

class Potato_Mine :public Component { // Картофельная мина Potato_Mine  (XP = 200; cost = 200; damage = 150;)
public:
	Potato_Mine() {
		XP = 200;
		cost = 200;
		damage = 150;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

Composite* createM_P_Shooter() { // Многоглавый горохострел Multi_Pea_Shooter M_P_Shooter 
	Composite* mp_shooter = new Composite;

	for (int i = 0; i < 4; i++) {
		mp_shooter->addComponent(new Pea_Shooter);
	}
	return mp_shooter;
}

Composite* createWatermelon_Pult() { // Арбузопульта Watermelon_Pult 
	Composite* watermelon_pult = new Composite;

	for (int i = 0; i < 2; i++) {
		watermelon_pult->addComponent(new Cabbage_Pult);
	}
	return watermelon_pult;
}

Composite* createArmyUser(int money, int a, int b, int c, int d, int e, int f, int g) {
	Composite* army = new Composite;
	for (int i = 0; i < a; i++) {
		army->addComponent(new Pea_Shooter);
	}
	for (int i = 0; i < b; i++) {
		army->addComponent(new Snow_Peas);
	}
	for (int i = 0; i < c; i++) {
		army->addComponent(new Cherry_Bomb);
	}
	for (int i = 0; i < d; i++) {
		army->addComponent(new Cabbage_Pult);
	}
	for (int i = 0; i < e; i++) {
		army->addComponent(new Potato_Mine);
	}
	for (int i = 0; i < f; i++) {
		army->addComponent(createM_P_Shooter());
	}
	for (int i = 0; i < g; i++) {
		army->addComponent(createWatermelon_Pult());
	}
	return army;
}

//_____  |||||||||||||||||||||||||||||||||||  _____//

class Zombie : public Component { // Обычный зомби Zombie
public:
	Zombie() {
		XP = 50;
		cost = 110;
		damage = 50;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

class Zombie_Cone : public Component { // Зомби с конусом Zombie_with_a_cone
public:
	Zombie_Cone() {
		XP = 150;
		cost = 200;
		damage = 120;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

class Zombie_Bucket :public Component { // Зомби с ведром Zombie_with_a_bucket
public:
	Zombie_Bucket() {
		XP = 200;
		cost = 300;
		damage = 150;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

class Zombie_SPlayer :public Component { // Зомби-футболист Zombie_Soccer_Player
public:
	Zombie_SPlayer() {
		XP = 200;
		cost = 300;
		damage = 150;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

class Zombie_Door :public Component { // Зомби с дверью Zombie_with_a_door //заменила на Зомби с газетой
public:
	Zombie_Door() {
		XP = 300;
		cost = 200;
		damage = 100;
	}

	int getCost() {
		return cost;
	}
	int getXP() {
		return XP;
	}
	int getDamage() {
		return damage;
	}
	void Attac(Component* b) {
		b->setXP(XP - b->getDamage());
	}
};

Composite* createGargantua() { // Гаргантюа Gargantua
	Composite* gargantua = new Composite;

	for (int i = 0; i < 5; i++) {
		gargantua->addComponent(new Zombie);
	}
	return gargantua;
}

Composite* createZombies_on_a_catapult() { // Зомби на катапульте Zombies_on_a_catapult //заменила на Кирпичноголового Зомби
	Composite* zombies_catapult = new Composite;

	for (int i = 0; i < 3; i++) {
		zombies_catapult->addComponent(new Zombie_Bucket);
	}
	return zombies_catapult;
}

Composite* createArmyBot(int money, int a, int b, int c, int d, int e, int f, int g) {
	Composite* armyBot = new Composite;
	for (int i = 0; i < a; i++) {
		armyBot->addComponent(new Zombie);
	}
	for (int i = 0; i < b; i++) {
		armyBot->addComponent(new Zombie_Cone);
	}
	for (int i = 0; i < c; i++) {
		armyBot->addComponent(new Zombie_Bucket);
	}
	for (int i = 0; i < d; i++) {
		armyBot->addComponent(new Zombie_SPlayer);
	}
	for (int i = 0; i < e; i++) {
		armyBot->addComponent(new Zombie_Door);
	}
	for (int i = 0; i < f; i++) {
		armyBot->addComponent(createGargantua());
	}
	for (int i = 0; i < g; i++) {
		armyBot->addComponent(createZombies_on_a_catapult());
	}
	return armyBot;
}




System::Void Zemlyanova932001::Form1::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	setlocale(LC_ALL, "Russian"); 
	srand(time(NULL));
	a = b = c = d = f = g = 0;
	h = 0; // раньше было e

	// генерируем стоимость армии 
	//money = (rand() % 93 + 147) * 10;  // Будет не совсем рандомное число, а рандомно больше предыдущего &
	random_device rd;
	mt19937 alf(rd());
	int n = (alf() % 93 + 167) + 1;
	money = n * 10;
	m = money;

	//this->textBox1->Text = "0";
	this->textBox2->Text = a.ToString();
	this->textBox3->Text = b.ToString();
	this->textBox4->Text = c.ToString();
	this->textBox5->Text = d.ToString();
	this->textBox6->Text = h.ToString();
	this->textBox7->Text = f.ToString();
	this->textBox8->Text = g.ToString();

	this->textBox1->Text = m.ToString();

	int xp = 0; int dm = 0;
	this->textBox9->Text = xp.ToString();
	this->textBox10->Text = dm.ToString();
	

	this->textBox11->Visible = true; this->textBox12->Visible = true;
	this->textBox13->Visible = false; this->textBox14->Visible = false;
	this->textBox15->Visible = false; this->textBox16->Visible = false; this->label15->Visible = false; this->label16->Visible = false;

	this->pictureBox10Win->Visible = false;
	this->pictureBox10L->Visible = false;
	this->pictureBox10WL->Visible = false;
	this->pictureBox11Lose->Visible = false;
	this->pictureBox8->Visible = true;

	return System::Void();

}

System::Void Zemlyanova932001::Form1::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	a -= 1;

	if (a >= 0)
	{
		this->textBox2->Text = a.ToString();
		m = m + 100;
		this->textBox1->Text = m.ToString();
	}
	else {
		a = 0;
		this->textBox2->Text = a.ToString();
	}
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}
System::Void Zemlyanova932001::Form1::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	a += 1;
	if ((m - 100) > 0)
	{
		this->textBox2->Text = a.ToString();
		m = m - 100;
		this->textBox1->Text = m.ToString();
	}
	else a -= 1;
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}

System::Void Zemlyanova932001::Form1::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	b -= 1;

	if (b >= 0)
	{
		this->textBox3->Text = b.ToString();
		m = m + 175;
		this->textBox1->Text = m.ToString();
	}
	else
	{
		b = 0;
		this->textBox3->Text = b.ToString();
	}
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}
System::Void Zemlyanova932001::Form1::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	b += 1;
	if ((m - 175) > 0)
	{
		this->textBox3->Text = b.ToString();
		m = m - 175;
		this->textBox1->Text = m.ToString();
	}
	else b -= 1;
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}

System::Void Zemlyanova932001::Form1::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	c -= 1;

	if (c >= 0)
	{
		this->textBox4->Text = c.ToString();
		m = m + 400;
		this->textBox1->Text = m.ToString();
	}
	else
	{
		c = 0;
		this->textBox4->Text = c.ToString();
	}
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}
System::Void Zemlyanova932001::Form1::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	c += 1;
	if ((m - 400) > 0)
	{
		this->textBox4->Text = c.ToString();
		m = m - 400;
		this->textBox1->Text = m.ToString();
	}
	else c -= 1;
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}

System::Void Zemlyanova932001::Form1::button9_Click(System::Object^ sender, System::EventArgs^ e) {
	d -= 1;

	if (d >= 0)
	{
		this->textBox5->Text = d.ToString();
		m = m + 275;
		this->textBox1->Text = m.ToString();
	}
	else
	{
		d = 0;
		this->textBox5->Text = d.ToString();
	}
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}
System::Void Zemlyanova932001::Form1::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	d += 1;
	if ((m - 275) > 0)
	{
		this->textBox5->Text = d.ToString();
		m = m - 275;
		this->textBox1->Text = m.ToString();
	}
	else d -= 1;
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}

System::Void Zemlyanova932001::Form1::button11_Click(System::Object^ sender, System::EventArgs^ e) {
	h -= 1;

	if (h >= 0)
	{
		this->textBox6->Text = h.ToString();
		m = m + 200;
		this->textBox1->Text = m.ToString();
	}
	else
	{
		h = 0;
		this->textBox6->Text = h.ToString();
	}
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}
System::Void Zemlyanova932001::Form1::button12_Click(System::Object^ sender, System::EventArgs^ e) {
	h += 1;
	if ((m - 200) > 0)
	{
		this->textBox6->Text = h.ToString();
		m = m - 200;
		this->textBox1->Text = m.ToString();
	}
	else h -= 1;
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}

System::Void Zemlyanova932001::Form1::button13_Click(System::Object^ sender, System::EventArgs^ e) {
	f -= 1;

	if (f >= 0)
	{
		this->textBox7->Text = f.ToString();
		m = m + 350;
		this->textBox1->Text = m.ToString();
	}
	else
	{
		f = 0;
		this->textBox7->Text = f.ToString();
	}
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}
System::Void Zemlyanova932001::Form1::button14_Click(System::Object^ sender, System::EventArgs^ e) {
	f += 1;
	if ((m - 350) > 0)
	{
		this->textBox7->Text = f.ToString();
		m = m - 350;
		this->textBox1->Text = m.ToString();
	}
	else f -= 1;
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}

System::Void Zemlyanova932001::Form1::button15_Click(System::Object^ sender, System::EventArgs^ e) {
	g -= 1;

	if (g >= 0)
	{
		this->textBox8->Text = g.ToString();
		m = m + 350;
		this->textBox1->Text = m.ToString();
	}
	else
	{
		g = 0;
		this->textBox8->Text = g.ToString();
	}
	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}
System::Void Zemlyanova932001::Form1::button16_Click(System::Object^ sender, System::EventArgs^ e) {
	g += 1;
	if ((m - 500) > 0)
	{
		this->textBox8->Text = g.ToString();
		m = m - 500;
		this->textBox1->Text = m.ToString();

	}
	else g -= 1;

	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);

	xpU = user->getXP();
	dmU = user->getDamage();

	//	int xp = 0, dm = 0;
	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	return System::Void();

}


System::Void Zemlyanova932001::Form1::button17_Click(System::Object^ sender, System::EventArgs^ e) {
	return System::Void();
}


System::Void Zemlyanova932001::Form1::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*for (int i = 0; i < 8; i++) {
		PictureBox^ pic = gcnew PictureBox;
		pic->Location = System::Drawing::Point(0 + i * 50, 0);
		pic->Size = System::Drawing::Size(1, 350);
		pic->BackColor = System::Drawing::SystemColors::Desktop;
		this->pictureBox8->Controls->Add(pic);
	}
	for (int i = 0; i < 6; i++) {
		PictureBox^ pic = gcnew PictureBox;
		pic->Location = System::Drawing::Point(0, 0 + i * 50);
		pic->Size = System::Drawing::Size(350, 1);
		pic->BackColor = System::Drawing::SystemColors::Desktop;
		this->pictureBox8->Controls->Add(pic);
	}*/



	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);
	xpU = user->getXP();
	dmU = user->getDamage();
	this->textBox9->Text = xpU.ToString();
	this->textBox10->Text = dmU.ToString();
	 
	m = money;
	int aa, bb, cc, dd, hh, ff, gg;
	aa = bb = cc = dd = hh = ff = gg = 0;
	int A, B;

	A = m / 550; // колво Зомби на катапульте
	m -= A * 550;
	gg = A;

	if (m <= 0) goto out1;
	B = m / 500; // кол-во Гаргантюа
	m -= B * 500;
	ff = B;

	if (m <= 0) goto out1;
	hh = m / 200; // кол-во Зомби с дверью
	m -= hh * 200;

	if (m <= 0) goto out1;
	dd = m / 300; // кол-во Зомби-футболистов
	m -= dd * 300;

	if (m <= 0) goto out1;
	cc = m / 300; // кол-во Зомби с ведром
	m -= cc * 300;

	if (m <= 0) goto out1;
	bb = m / 175; // кол-во Зомби с конусом
	m -= bb * 175;

	if (m <= 0) goto out1;
	aa = m / 110; // кол-во типичных Зомби 
	m -= aa * 110;

out1:
//	Composite* user = createArmyUser(money, a, b, c, d, h, f, g);
	Composite* bot = createArmyBot(money, aa, bb, cc, dd, hh, ff, gg);
	
	//xpU = user->getXP();
	//dmU = user->getDamage();
	xpB = bot->getXP();
	dmB = bot->getDamage();
	this->textBox15->Text = xpB.ToString();
	this->textBox16->Text = dmB.ToString();

	if (dmU > xpB) {
		this->textBox11->Visible = false; this->textBox12->Visible = false; 
		this->textBox13->Visible = true; this->textBox14->Visible = true;
		this->textBox15->Visible = true; this->textBox16->Visible = true; this->label15->Visible = true; this->label16->Visible = true;
		this->textBox13->Text = "YOU WIN";
		this->textBox14->Text = "Поздравляю, ты смог защитить свой дом!";
		this->pictureBox10Win->Visible = true;
		this->pictureBox10L->Visible = false;
		this->pictureBox10WL->Visible = false;
		this->pictureBox11Lose->Visible = false;
		this->pictureBox8->Visible = false;

	}
	if (dmB > xpU) {
		this->textBox11->Visible = false; this->textBox12->Visible = false;		
		this->textBox15->Visible = true; this->textBox16->Visible = true; this->label15->Visible = true; this->label16->Visible = true;
		this->textBox13->Visible = true; this->textBox14->Visible = true;
		this->textBox13->Text = "YOU LOSE";
		this->textBox14->Text = "О нет... Армия зомби захватила твой дом...";
		this->pictureBox10Win->Visible = false;
		this->pictureBox10L->Visible = false;
		this->pictureBox10WL->Visible = false;
		this->pictureBox11Lose->Visible = true;
		this->pictureBox8->Visible = false;

	}
	if (dmB == xpU) {
		if (rand() % 2) {
			this->textBox11->Visible = false; this->textBox12->Visible = false;		
			this->textBox15->Visible = true; this->textBox16->Visible = true; this->label15->Visible = true; this->label16->Visible = true;
			this->textBox13->Visible = true; this->textBox14->Visible = true;
			this->textBox13->Text = "YOU WIN";
			this->textBox14->Text = "Удача на твоей стороне!";

			this->pictureBox10Win->Visible = false;
			this->pictureBox10L->Visible = false;
			this->pictureBox10WL->Visible = true;
			this->pictureBox11Lose->Visible = false;
			this->pictureBox8->Visible = false;
		}
		else {
			this->textBox11->Visible = false; this->textBox12->Visible = false; 		
			this->textBox15->Visible = true; this->textBox16->Visible = true; this->label15->Visible = true; this->label16->Visible = true;
			this->textBox13->Visible = true; this->textBox14->Visible = true;
			this->textBox13->Text = "YOU LOSE";
			this->textBox14->Text = "Упс... удача это не про тебя... 2";
			this->pictureBox10Win->Visible = false;
			this->pictureBox10L->Visible = false;
			this->pictureBox10WL->Visible = false;
			this->pictureBox11Lose->Visible = true;
			this->pictureBox8->Visible = false;
		}
	}
	if (dmU % xpB > dmB % xpU) {
		this->textBox11->Visible = false; this->textBox12->Visible = false;
		this->textBox13->Visible = true; this->textBox14->Visible = true;
		this->textBox15->Visible = true; this->textBox16->Visible = true; this->label15->Visible = true; this->label16->Visible = true;
		this->textBox13->Text = "YOU WIN";
		this->textBox14->Text = "Поздравляю, ты смог защитить свой дом!";
		this->pictureBox10Win->Visible = true;
		this->pictureBox10L->Visible = false;
		this->pictureBox10WL->Visible = false;
		this->pictureBox11Lose->Visible = false;
		this->pictureBox8->Visible = false;
	}
	else {
		this->textBox11->Visible = false; this->textBox12->Visible = false;
		this->textBox13->Visible = true; this->textBox14->Visible = true;
		this->textBox15->Visible = true; this->textBox16->Visible = true; this->label15->Visible = true; this->label16->Visible = true;
		this->textBox13->Text = "YOU LOSE";
		this->textBox14->Text = "О нет... Армия зомби захватила твой дом...";
		this->pictureBox10Win->Visible = false;
		this->pictureBox10L->Visible = true;
		this->pictureBox10WL->Visible = false;
		this->pictureBox11Lose->Visible = false;
		this->pictureBox8->Visible = false;

	}




	return System::Void();

}

