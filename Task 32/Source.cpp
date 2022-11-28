#include<iostream>
#include<string>
using namespace std;

// Task 1
template <typename T>
void guide(T*& pArr, int num1, int num2) {
	// нужно доп.занятие
}

// Task 2
void repl(string& str, char ch1, char ch2 ) {
	for (int i = 0; i < str.size(); i++)
		if (str[i] == ch1)
			str[i] = ch2;
	cout << str << endl;
}
// Task 3
struct rout {
	int num = 0;
	string type;
	string begin_stop;
	string end_stop;
	int cost_of_tr = 0;
};
void inf(rout p) {
	cout << "\nВид тр.средства: " << p.type << "\nНомер маршрута: " << p.num << "\nНачальная остановка: " << p.begin_stop;
	cout << "\nКонечная остановка: " << p.end_stop;
}
void match(rout p, int num) {
	cout << "\nСтоймость проезда " << num << " человек = " << p.cost_of_tr * num << " руб\n";
}

int main() {
	setlocale(LC_ALL, "Russian");

	// Task 1
	int n, m;
	int** Arr = nullptr;

	// Task 2
	string str1 = "Hello world!";
	char sym1 = 'o';
	char sym2 = 'u';
	repl(str1, sym1, sym2);

	// Task 3
	rout t;
	t.num = 16;
	t.type = "train";
	t.begin_stop = "Baumana";
	t.end_stop = "Bluchera";
	t.cost_of_tr = 22;

	rout a;
	a.num = 39;
	a.type = "bus";
	a.begin_stop = "Taganskaya";
	a.end_stop = "Kosmonavtov";
	a.cost_of_tr = 32;

	rout tr;
	tr.num = 33;
	tr.type = "trolleybus";
	tr.begin_stop = "Taganskaya";
	tr.end_stop = "Kommunisticheskaya";
	tr.cost_of_tr = 25;

	inf(tr);
	match(tr, 12);
	return 0;
}