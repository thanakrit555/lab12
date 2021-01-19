#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[])
{

double avg = 0,max =A[0],min = A[0], sum = 0, SD,GM,HM,multiplysum =1,hmsum;
for(int i =0; i<N; i++)
{   
    hmsum += 1.0/A[i];
    multiplysum *= A[i];
    avg += A[i];
    if(A[i] > max) max = A[i];
    if(A[i] < min) min = A[i];
    sum += pow(A[i],2);
}
avg /= N;
HM = N/hmsum;
SD = sqrt(sum/N-pow(avg,2));

GM = pow(multiplysum,1.0/N);
B[0] = avg;
B[1] = SD;
B[2] = GM;
B[3] = HM;
B[4] = max;
B[5] = min;
}
