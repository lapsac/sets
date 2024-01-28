#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {

map<string, set<string>> synonyms;

while (true) {
    string command;
    cin >> command;

    if (command == "add") {

    string first_word, second_word;
    cin >> first_word >> second_word;

    // TODO:
    // pievienot abus vārdus vārdnīcai synonyms ka atslēgas;
    // vārdu first_word pievienot vārda second_word sinonīmu kopai,
    synonyms[first_word].insert(second_word);
    // bet vārdu second_word pievienot vārda first_word sinonīmu kopai
    synonyms[second_word].insert(first_word);

    } else if (command == "count") {
        string word;
        cin >> word;
      // TODO
      // Ievadīt vārdu un izvadīt ievadītā vārda sinonīmu skaitu
        int count = synonyms[word].size();
        cout << count << endl;

    } else if (command == "check") {
        string first_word, second_word;
        cin >> first_word >> second_word;

      // TODO
      // pārbaudīt, vai ievadīti vārdi ir sinonīmi
      // (izvadīt paziņojums "Yes" vai "No")

        //cout << "No" << endl;
        if (synonyms[first_word].find(second_word) != synonyms[first_word].end()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        } else if (command == "done") break;
        }
    return 0;
}
