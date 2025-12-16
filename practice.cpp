
    ~derived(){
        cout<<"derived class destructor called"<<endl;    
    }
};

int main(){
    derived* d = new derived();
    base *b = d; // upcasting
    delete b;
    // delete d; // no double free error
    return 0;
}
