#include<iostream>
#include <locale>
using namespace std;
class Man {
private:
	int hungry;
	const int number_of_hands = 2;
	const int number_of_eyes = 2;
	string eye_color = "grean";
	string fur_color = "black";
public:
	string name;
	void SetHugry(int newhungry) {
		if (newhungry >= 0) {
			this->hungry = newhungry;
		}
	}
	int GetHungry() {
		return hungry;
	}
	void Pick_Up(Mobile_phone& what) {
		cout << "Телефон в руках)" << endl;
	}
	void Dance() {
		if (hungry >= 70) {
			cout << "Я голодный!" << endl;
		}
		if (hungry < 70) {
			cout << name << " танцює" << endl;
		}
	}
public:
	void StopDance() {
		cout << "Микита припинив танцювати" << endl;
	}
	void Walk() {
		cout << "Микита пiшов" << endl;
	}
	void DoHomework() {
		cout << "Микита почав виконувати домашне завдання" << endl;
	}
	void Musick(string executor) {
		cout << "Микта почав слухати музику" << executor << endl;
	}
};
class Room {
private:
	int bed_condition;
	int Computer = 1;
	int Doors = 1;
	int Windows = 3;
	int Bed = 1;
	string wallpaper_color = "blue";
	int chairs = 4;
public:
	void Set_bed_conddition(int newbed_condition) {
		if (newbed_condition >= 0) {
			this->bed_condition = newbed_condition;
		}
	}
	int Get_bad_conddition() {
		return bed_condition;
	}
	void OpenTheDoor(Man& who) {
		cout << "Дверi вiдчиняются" << endl;
	}
	void Turn_on_the_computer() {
		cout << "Чутно як ввiмкнувся комп`ютер" << endl;
	}
	void Lie_on_the_bed() {
		if (bed_condition < 30) {
			cout << "Кровать сломалась!!!" << endl;
		}
		if (bed_condition >= 30) {
			cout << "Поздравляю вы легли на кровать!!!" << endl;
		}
	}
	void Open_the_window() {
		cout << "Вiкно вiдчинено" << endl;
	}
	void Sit_on_a_chair() {
		cout << "Стул был с подвохом и вы упали" << endl;
	}

};
class Mobile_phone {
private:
	int power;
	int brightness;
	const int sidebotton = 1;
	const int front_camera = 1;
	const int back_camera = 3;
	string collor = "Black";
	double diagonal = 6.06;//дюймiв
public:
	string model;
	void SetPower(int newPower) {
		if (newPower >= 0 && newPower <= 100) {
			this->power = newPower;
		}
	}
	int Getpower() {
		return power;
	}
	void Interaction(Man& who) {
		cout << "Началось взаимодействие с кем-то" << endl;
	}
	void On_Phone(Man& who) {
		if (power >= 5) {
			cout << "Телефон почав ввiмкатись" << endl;
		}
		if (power < 5) {
			cout << "Треба ввiмкнути зарядку!" << endl;
		}
	}
	void Do_selfie(Man& who) {
		cout << "Ввiмкнулась фронтальна камера та вилетiла пташка" << endl;
	}
	void make_a_call() {
		cout << "Чутно гудки..." << endl;
	}
	void Play_the_game() {
		cout << "Ввiмкнулась гра" << endl;
	}
	void Post_a_photo(Man& who) {
		cout << "Спочатку треба завантажити iнстаграмчик!" << endl;
	}
};
class Monkey {
private:
	int eyes;
	int hands;
	int ears;
	double wool_length = 0.4;
	string Nick = "Arnold";
public:
	void Sethands(int newhands) {
		if (newhands >= 0 && newhands <= 0) {
			this->hands = newhands;
		}
	}
	int Gethands() {
		return hands;
	}
	void Eat(string food) {
		cout << "Беремо смачний" << food << "та починаемо iсти" << endl;
	}
	void Noise(Man& who) {
		cout << "Привiтатися" << endl;
	}
	void Sleep() {
		cout << "Арнольд в пошуках мiстечка для дрьому" << endl;
	}
	void Play() {
		if (hands == 2) {
			cout << "Арнольд починає гратися с друзями" << endl;
		}
		if (hands < 2) {
			cout << "Арнольд не в настроi!" << endl;
		}
	}
	void Dance() {
		cout << "Арнольд показуе дуже класснi рухи" << endl;
	}
};
class Car {
private:
	int Wheels = 6;
	int doors = 4;
	int Number_of_seats = 7;
	string Color = "White";
	int Steering_wheel = 1;
public:
	void Setweels(int newweels) {
		if (newweels >= 0) {
			this->Wheels = newweels;
		}
	}
	int GetWeels() {
		return Wheels;
	}
	void We_start_the_engine(Man& who) {
		if (Wheels == 6) {
			cout << "Слышен рёв этого зверя" << endl;
		}
		if (Wheels < 6) {
			cout << "Походу ночью кто-то скрутил колёса)" << endl;
		}
	}
	void Need_to_fix_urgently() {
		cout << "На панели засвтился бензин, машине пора кушать" << endl;
	}
	void Fasten_seat_belts() {
		cout << "Машина напоминает нам о мере безопасности, и что нужно присегнуть ремни" << endl;
	}
	void Nead_to_fix() {
		cout << "Машина чуствует себя не хорошо, нужно заехать на СТО" << endl;
	}
	void Ride_back() {
		cout << "Машина начинает движение назад" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	Man m;
	Mobile_phone p;
	Room r;
	Monkey mo;
	Car c;
	m.name = "Nikita";
	p.model = "Iphone";
	r.OpenTheDoor(m);
	m.Pick_Up(p);
	p.Interaction(m);
	p.Do_selfie(m);
	mo.Noise(m);
	mo.Dance();
	c.We_start_the_engine(m);
	c.Fasten_seat_belts();
	c.Ride_back();
	p.Post_a_photo(m);
}