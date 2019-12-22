struct S 
{
    int x;
    S& operator=(const S& other) 
    {
        x = other.x;    
        // return a reference to the object being assigned to
        return *this;   // this is a pointer to the instance  of the class
                        // on which the function was called.
                        // this cannot be used to static member function.
    }
};

int main()
{
    
}