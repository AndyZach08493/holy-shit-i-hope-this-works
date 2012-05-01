class City : public KeyedItem
{
public:
   City() : KeyedItem() {}
   City(const string& name,
        const string& ctry,
        const int& num)
      : KeyedItem(name), country(ctry), pop(num) {}
   string cityName() const;
   int getPopulation() const;
   void setPopulation(int newPop);
private:
   // city's name is search-key value
   string country;  // city's country
   int    pop;      // city's population
}; // end City
