
    int a = 5;
    int *p = &a;      // pointer to an int
    int **q = &p;     // pointer to pointer to an int

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    cout << "Value of p (address of a): " << p << endl;
    cout << "Value pointed by p (*p): " << *p << endl;

    cout << "Value of q (address of p): " << q << endl;
    cout << "Value pointed by q (*q, which is address of a): " << *q << endl;
    cout << "Value pointed by the pointer pointed by q (**q, which is value of a): " << **q << endl;

    int a = 50;
    int *p = &a;
    int **q = &p;
    int **r = q;
    int ***s = &q;
    
    return 0;
}
