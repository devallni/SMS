#pragma once

ref class Validations
{
public:
    static bool isEmailValid(System::String^ email) {
        return email->Contains("@"); // simple dummy check
    }

    static bool isPasswordStrong(System::String^ password) {
        return password->Length >= 6;
    }
};
