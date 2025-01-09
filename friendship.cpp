// Friendship
# include <iostream>
using namespace std;

class Demo;

class Friendship {
        private:
                string name;

        protected:
                int year;

        public:
                Friendship() {name = "Test1"; year = 2025;};
                void show () {
                        cout << name << " Born in " << year << endl;
                }
                friend void check (Friendship &);
                friend Demo;
};

// Making a method a friend
void check (Friendship &f) {
        f.name = "New name";
        cout << "Name changed to " << f.name << endl;
}

// Making a class a friend
class Demo {
        public:
                void test(Friendship &k) {
                        k.name = "from Demo";
                        k.show();
                }
};

int main() {
        Friendship demo;
        demo.show();
        check(demo);
        demo.show();
        Demo d;
        d.test(demo);

        return 0;
}

