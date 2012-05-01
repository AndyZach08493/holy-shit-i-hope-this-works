class Person : public KeyedItem
{
public:
   Person() : KeyedItem() {}
   Person(const string& name,
          const string& id,
          const string& phone)
      : KeyedItem(name), idNum(id),
      phoneNumber(phone) {}
private:
   // Key item is the person's name
   string idNum;
   string phoneNumber;
   //... and other data about the person
}; // end Person
