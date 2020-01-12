struct S;
struct T {
    T(const S* s);
    //...
};


struct S {
    int x;
    T t{this};
    S& operator=(const S& other) {
        x = other.x;
        // return a reference to the object bein assigned to
        return *this;
    }
};

int main()
{
    return 1;  
}