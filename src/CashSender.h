//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H

#include "IBankServices.h"

class CashSender : public IBankServices{
public:
    string sendPayment() override;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
