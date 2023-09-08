// Complicated Types Sorting Example.
// By Zereo 04/22/13
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Person
{
    // Left out making a constructor for simplicity's sake.
    string name;
    int age;
    string favoriteColor;
};

// Sort Container by name function
bool sortByName(const Person &lhs, const Person &rhs) { return lhs.name < rhs.name; }

// Sort Container by age function
bool sortByAge(const Person &lhs, const Person &rhs) { return lhs.age < rhs.age; }

// Sort Container by favorite color
// We can just sort alphabetically and then it will group the
// color together.
bool sortByColor(const Person &lhs, const Person &rhs) { return lhs.favoriteColor < rhs.favoriteColor; }

// A global const variable to hold how many people to ask for input for.
const unsigned numberOfPeople = 2;

int main()
{
    // Make a vector that holds 5 blank Person Objects
    vector<Person> people(numberOfPeople);

    // This will ask for user input to populate the container
    // with 5 different indivuals.
    for (vector<Person>::size_type i = 0; i != numberOfPeople; ++i)
    {
        cout << "Person #" << i + 1 << " name: ";
        cin >> people[i].name;

        cout << "Person #" << i + 1 << " age: ";
        cin >> people[i].age;

        cout << "Person #" << i + 1 << " favorite color: ";
        cin >> people[i].favoriteColor;
    }

    cout << "\n\n";

    // Sort by name
    sort(people.begin(), people.end(), sortByName);
    for (Person &n : people)
        cout << n.name << " ";

    cout << endl;

    // Sory by age
    sort(people.begin(), people.end(), sortByAge);
    for (Person &n : people)
        cout << n.age << " ";

    cout << endl;

    // Sort by color
    sort(people.begin(), people.end(), sortByColor);
    for (Person &n : people)
        cout << n.favoriteColor << " ";

    return 0;
}
