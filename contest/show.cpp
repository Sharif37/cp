class MyClass {
public:
    MyClass(int value) : data(value) {}
    int getData() const { return data; }
private:
    int data;
};

MyClass createObject() {
    return MyClass(42); // Constructs a new object and returns it
}

int main() {
    MyClass newObj = createObject(); // Copy constructor is invoked here
    return 0;
}





// class MyClass {
// public:
//     MyClass(int value)
//     {
//        data=value ;
//     }
//     int getData() const { return data; }
// private:
//     int data;
//     int info ;
// };

// void modifyObject(MyClass obj) {
//     obj = MyClass(42); // Creates a new object using the copy constructor
// }

// int main() {
//     MyClass original(10);
//     modifyObject(original);
//     // The original object still contains the value 10
//     return 0;
// }
