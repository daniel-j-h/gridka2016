#include <vector>
#include <utility>
#include <memory>


struct Copyable {
protected:
	int myValue;
public:
	Copyable(int val) : myValue{val} {
		printf("constructed\n");
	};
	~Copyable() {};

	Copyable(const Copyable& rhs) {
		printf("copy-constructed\n");
		myValue = rhs.myValue;
	};	
	Copyable& operator=(const Copyable& rhs) {
		printf("copy-assigned\n");
		myValue = rhs.myValue;
		return *this;
	};
	// Copyable(Copyable&& rhs) = default;
};


struct OnlyMoveable {
protected:
	int myValue;
public:
	OnlyMoveable(int myInt) : myValue{myInt} { printf("constructed\n"); };
	OnlyMoveable(OnlyMoveable&& rhs) {
		printf("move-constructed\n");
		myValue = rhs.myValue;
	};
	OnlyMoveable& operator=(OnlyMoveable&& rhs) {
		printf("moved\n");
		myValue = rhs.myValue;
		return *this;
	}
	OnlyMoveable(const OnlyMoveable& rhs) = delete;	
	OnlyMoveable& operator=(const OnlyMoveable& rhs) = delete;
};


int main() {
	Copyable a(1);

	Copyable b(std::move(a));

	a = b;

	OnlyMoveable moveme(7);
	OnlyMoveable tohere(std::move(moveme));
	OnlyMoveable orhere(OnlyMoveable(42));
	
}
