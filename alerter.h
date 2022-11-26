#ifndef alerter_test
#define alerter

extern int alertFailureCount;
void alertInCelcius(float farenheit, int (*alertTransmitter)(float));

#endif