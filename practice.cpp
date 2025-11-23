
    cout << "Value pointed by the pointer pointed by q (**q, which is value of a): " << **q << endl;

    int a = 50;
    int *p = &a;
    int **q = &p;
    int **r = q;
    int ***s = &q;
    
    return 0;
}
