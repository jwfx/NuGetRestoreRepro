using namespace System;
using namespace Newtonsoft::Json;

// Simple managed class
public ref class Person
{
public:
    String^ Name;
    int Age;
};

int main()
{
    Person^ p = gcnew Person();
    p->Name = "Alice";
    p->Age = 30;

    String^ json = JsonConvert::SerializeObject(p);

    Console::WriteLine("Serialized:");
    Console::WriteLine(json);

    return 0;
}