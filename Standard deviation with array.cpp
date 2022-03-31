#include<stdio.h>
#include<math.h>
double sdeviation(float data[]);
int main()
{
	int i;
	float data[10];
	printf("Enter the 10 elements : ");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &data[i]);
	}
	printf("deviation = %.2f", sdeviation(data));
	return 0;
}
double sdeviation(float data[])
{
	double mean = 0.0, sum = 0.0;
	double Sdeviation = 0.0;
	int i;
	for (i = 0; i < 10; i++)
	{
		sum = sum + data[i];
	}
	mean = sum / 10;
	for (i = 0; i < 10; i++)
	{
		Sdeviation = Sdeviation + pow(data[i] - mean, 2);
	}
	return sqrt(Sdeviation / 10);
}