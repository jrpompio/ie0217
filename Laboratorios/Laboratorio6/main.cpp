#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

template <typename T>
class Statistics {
  public:
    Statistics(const std::vector<T>& data) : data(data) {
      if(data.empty()){
        throw std::invalid_argument("La lista"
        " de datos debe contener elementos");
      }
    }

    double mean() const {
      T sum = 0;
      for (const T& value : data){
        sum += value;
      }
      return  static_cast<double>(sum) / data.size();
    }
    double standardDeviation() const {
      double meanValue = mean();
      double sumSquares = 0;

      for (const T& value : data){
        sumSquares += (value - meanValue) * (value - meanValue); 
      }
      return std::sqrt(sumSquares / data.size());
    }
    private:
      std::vector<T> data;
};

int main(){



return 0;   
}