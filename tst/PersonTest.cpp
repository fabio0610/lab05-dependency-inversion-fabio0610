//
// Created by Maikol Guzman on 8/24/20.
//


#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
    IBankServices *bankTransferSender = new BankTransferSender();
    IBankServices *cashSender = new CashSender();
    IBankServices *checkSender = new CheckSender();

    Person person;

    EXPECT_EQ(person.payment(bankTransferSender), "Sending the money by transference");
    EXPECT_EQ(person.payment(cashSender), "Give the money in the hands");
    EXPECT_EQ(person.payment(checkSender), "Sending the check with the money");
}
