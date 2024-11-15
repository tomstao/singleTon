#include <iostream>

class Random
{
public:
    Random(const Random&) = delete;
    // Delete the copy constructor to prevent copying


    static Random& Get()
    {
        static Random s_Instance;

        return s_Instance;
    }
    static float Float()
    {
        return Get().iFloat();
    }
private:
    float iFloat()
    {
        return m_RandomGenerator;
    }

    void Function()
    {
        std::cout << "Singleton Function" << std::endl;
    }

    Random() {}

    // Make your constructor private to prevent instantiation

    float m_RandomGenerator = 0.5f;

};

int main()
{
    // Singleton instance = Singleton::GetInstance();

    float number = Random::Get().Float();

    std::cout << "Hello, World!" << std::endl;
    std::cout << number << std::endl;
    return 0;
}
