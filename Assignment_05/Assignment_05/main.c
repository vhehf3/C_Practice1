#include <stdio.h>
#include "Max.h"
#include "Min.h"
#include "Sum.h"
#include "FloatSum.h"

int main() {
	int maxValue, minValue, sumValue;
	float floatSumValue;

	maxValue = Max(3, 5);
	minValue = Min(3, 5);
	sumValue = Sum(3, 5);
	floatSumValue = FloatSum(3.2, 5.2);

	printf("maxValue = %d minValue = %d sumValue = %d floatSumValue = %f", maxValue, minValue, sumValue, floatSumValue);
	
	return 0;
}
