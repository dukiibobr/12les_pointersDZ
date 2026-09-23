#include <iostream>
using namespace std;



void change(int a) {
    a++;
}

void change(int* a) {
    (*a)++;
}
int findMax(int a, int b, int c) {
    if (a > b and a > c)
    {
        return a;
    }
    else if (b > a and b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int* findMax1(int* a, int* b, int* c)
{
    if (*a > *b and *a > *c)
    {
        return a;
    }
    else if (*b > *a and *b > *c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
void initArr(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
    }
}

void showArr(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
}

int* maxElement(int* arr, int size) {
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            max = arr + i;
        }
    }
    return max;
}

void reverse(int* arr, int size) {
    int* parr = &arr[size - 1];
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr--;
    }
}


int suma(int* arr, int size) {
    int suma = 0;
    for (int i = 0; i < size; i++)
    {
        suma += arr[i];
    }
    return suma;
}


int maxElement1(int* arr, int size) {
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            max = arr + i;
        }
    }
    return *max;
}

int minElement1(int* arr, int size) {
    int* min = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < *min)
        {
            min = arr + i;
        }
    }
    return *min;
}

int maxElementInd(int* arr, int size) {
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            max = arr + i;
        }
    }
    return max-arr;
}

int minElementInd(int* arr, int size) {
    int* min = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < *min)
        {
            min = arr + i;
        }
    }
    return min-arr;
}

void swapEl(int* arr, int index1, int index2) {
    int temp = *(arr + index1);
    *(arr + index1) = *(arr + index2);
    *(arr + index2) = temp;
}

void parnii(int* arr, int size) {
    int* parni = 0;
    for (int i = 0; i < size; i+=2)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = temp;
    }
}

int main()
{
    srand(time(0));


    //const int size = 10;

    //int arr[size];
    //initArr(arr, size);
    //showArr(arr, size);
    //int* maxEl = maxElement(arr, size);
    //cout << "max:" << maxEl << endl;
    //



    //int a = 5, b = 8, c = 9;
    //cout << "a=" << a << "b=" << b << "c=" << c << endl;

    //int max = findMax(a, b, c);
    //max++;
    //cout << "max=" << max << endl;

    //int* maxptr = findMax1(&a, &b, &c);
    //cout << "max el=" << *maxptr << endl;
    //(*maxptr)++;
    //cout << "max el=" << *maxptr << endl;
    //cout << "a=" << a << "b=" << b << "c=" << c << endl;

    //int a = 5;
    //int* pa = &a;

    //int b = 10;
    //int* pb = &b;

    //cout << "a " << a << endl;
    //change(&a);
    //cout << "pa " << pa << endl;
    //change(&a);

    //cout << "*pa " << *pa << endl;
    //change(&a);

    //cout << *pa + *pb << endl;
    //pa = &b;
    //cout << "b= " << *pb << endl;

    //*pa += 2;
    //cout << "*pa " << *pa << endl;

    //const int size = 10;
    //int arr[size]{};
    //int* parr = &arr[0];
    //cout << arr[0] << endl;
    //cout << parr << endl;

    ////fillArr(arr, size);


    //for (int i = 0; i < size; i++)
    //{
    //    *(parr+i) = rand() % 100;
    //   
    //}
    //for (int i = 0; i < size; i++)
    //{
    //    cout << (parr+i) << " ";
    //}

    //cout << parr << endl;
    //cout << *parr << endl;
    //cout << parr+1 << endl;
    //cout << *parr+1 << endl;

    //for (int i = 0; i < size; i++)
    //{
    //    *parr = rand() % 100;
    //    parr++;
    //}
    //parr = &arr[0];
    //for (int i = 0; i < size; i++)
    //{
    //    cout << *parr << " ";

    //}
    //cout << a << endl;
    //cout << a+1 << endl;
    //cout << a++ << endl;

    //int* newptr = arr;
    //*newptr = 0;
    //newptr += 3;
    //*newptr = 0;


    //parr = arr;
    //for (int i = 0; i < size; i++)
    //{
    //    cout << *parr << " ";
    //    parr--;
    //}





    //1 *pa+pb+pc/3

    //int a = 3,b = 5, c = 6;

    //cout << "a=" << a << "b=" << b << "c=" << c << endl;

    //int* pa = &a;
    //int* pb=&b;
    //int* pc=&c;

    //cout << "*pa=" << pa << "*pb" << pb << "*pc" << pc << endl;

    //cout << a * b * c << endl;
    //cout <<"dobutok"<< * pa * *pb * *pc << endl;

    //cout << "arif" << (*pa + *pb + *pc) / 3 << endl;

    //cout << endl;

    //if (*pa>*pb and *pa>*pc)
    //{
    //    cout << "max el=" << *pa << endl;
    //}
    //else if (*pb>*pa and *pb>*pc)
    //{
    //    cout << "max el=" << *pb << endl;

    //}
    //else
    //{
    //    cout << "max el=" << *pc << endl;

    //}
    
    //2

    //const int size = 10;
    //int arr[size]{ 0,1,2,3,4,5,6,7,8,9 };

    //int* parr = &arr[size - 1];

    //showArr(arr, size);

    //cout << endl;

    //reverse(arr, size);

    //cout << endl;


    //cout << "suma=" << suma(arr, size);

    //3

//const int size = 10;
//int arr[size]{ 0,1,2,3,4,5,6,7,8,9 };
//
//showArr(arr, size);
//
//cout << endl;
//cout << endl;
//
//cout << "max=" << maxElement1(arr, size) << endl;
//cout << "min=" << minElement1(arr, size) << endl;
//
//
//cout << "max index=" << maxElementInd(arr, size) << endl;
//cout << "min index=" << minElementInd(arr, size) << endl;
//
//int max = maxElementInd(arr, size);
//int min = minElementInd(arr, size);
//
//swapEl(arr, max, min);
//
//cout << endl;
//
//showArr(arr, size);

//4

const int size = 10;
int arr[size]{ 0,1,2,3,4,5,6,7,8,9 };

showArr(arr, size);
parnii(arr, size);
cout << endl;
showArr(arr, size);

}