#ifndef Binomial_h
#define Binomail_h
class Binomial {
    float coefft1;
    float coefft2;
    int power1;
    int power2;
  public:
    Binomial (float c1 = 1.0, int p1 = 1, float c2 = 1.0, int p2 = 1);
    float GetCoefficient (int idx) const;
    int GetPower(int idx) const;
    int SetPower (int idx, int pwr);
    int Add (Binomial other);
    void Multiply (float f);
    void Multiply (float coefft, int pwr);
}; 
#endif