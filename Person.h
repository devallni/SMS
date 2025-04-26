// Base Person class
class Person {
protected:
    int id;
    std::string name;
    std::string email;
    std::string phone;

public:
    Person(int id, const std::string& name, const std::string& email, const std::string& phone)
        : id(id), name(name), email(email), phone(phone) {}

    virtual ~Person() {}

    int getId() const { return id; }
    std::string getName() const { return name; }
    std::string getEmail() const { return email; }
    std::string getPhone() const { return phone; }

    virtual void saveToFile(std::ofstream& outFile) const {
        outFile << id << "\n" << name << "\n" << email << "\n" << phone << "\n";
    }

    virtual void loadFromFile(std::ifstream& inFile) {
        inFile >> id;
        inFile.ignore();
        std::getline(inFile, name);
        std::getline(inFile, email);
        std::getline(inFile, phone);
    }

    virtual void display() const {
        std::cout << "ID: " << id << "\nName: " << name 
                  << "\nEmail: " << email << "\nPhone: " << phone << "\n";
    }
};

