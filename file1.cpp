#include <iostream>
#include <vector>

class ETL{
  public:
    ETL() { std::cout << "ETL constructor\n"; }
    ~ETL() { std::cout << "ETL destructor\n"; }
    void print();
  private:
    std::vector<int> v;
};

int main()
{
  std::cout<<"Ciao Mamma, tutto bene, sto imparando git\n";
  auto etl = new ETL(); 

}

