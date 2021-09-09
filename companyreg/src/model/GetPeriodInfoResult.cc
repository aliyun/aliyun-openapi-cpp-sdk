/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/companyreg/model/GetPeriodInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetPeriodInfoResult::GetPeriodInfoResult() :
	ServiceResult()
{}

GetPeriodInfoResult::GetPeriodInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPeriodInfoResult::~GetPeriodInfoResult()
{}

void GetPeriodInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto invoiceInfoNode = value["InvoiceInfo"];
	auto feeNode = invoiceInfoNode["Fee"];
	if(!feeNode["Amount"].isNull())
		invoiceInfo_.fee.amount = feeNode["Amount"].asString();
	if(!feeNode["AmountWithTax"].isNull())
		invoiceInfo_.fee.amountWithTax = feeNode["AmountWithTax"].asString();
	if(!feeNode["Count"].isNull())
		invoiceInfo_.fee.count = std::stoi(feeNode["Count"].asString());
	if(!feeNode["TaxAmount"].isNull())
		invoiceInfo_.fee.taxAmount = feeNode["TaxAmount"].asString();
	auto invoiceIncomeNode = invoiceInfoNode["InvoiceIncome"];
	if(!invoiceIncomeNode["Amount"].isNull())
		invoiceInfo_.invoiceIncome.amount = invoiceIncomeNode["Amount"].asString();
	if(!invoiceIncomeNode["AmountWithTax"].isNull())
		invoiceInfo_.invoiceIncome.amountWithTax = invoiceIncomeNode["AmountWithTax"].asString();
	if(!invoiceIncomeNode["Count"].isNull())
		invoiceInfo_.invoiceIncome.count = std::stoi(invoiceIncomeNode["Count"].asString());
	if(!invoiceIncomeNode["TaxAmount"].isNull())
		invoiceInfo_.invoiceIncome.taxAmount = invoiceIncomeNode["TaxAmount"].asString();
	auto invoiceOutNode = invoiceInfoNode["InvoiceOut"];
	if(!invoiceOutNode["Amount"].isNull())
		invoiceInfo_.invoiceOut.amount = invoiceOutNode["Amount"].asString();
	if(!invoiceOutNode["AmountWithTax"].isNull())
		invoiceInfo_.invoiceOut.amountWithTax = invoiceOutNode["AmountWithTax"].asString();
	if(!invoiceOutNode["Count"].isNull())
		invoiceInfo_.invoiceOut.count = std::stoi(invoiceOutNode["Count"].asString());
	if(!invoiceOutNode["TaxAmount"].isNull())
		invoiceInfo_.invoiceOut.taxAmount = invoiceOutNode["TaxAmount"].asString();
	auto bankSummaryInfoNode = value["BankSummaryInfo"];
	auto incomeNode = bankSummaryInfoNode["Income"];
	if(!incomeNode["Amount"].isNull())
		bankSummaryInfo_.income.amount = incomeNode["Amount"].asString();
	if(!incomeNode["Count"].isNull())
		bankSummaryInfo_.income.count = std::stoi(incomeNode["Count"].asString());
	auto expendNode = bankSummaryInfoNode["Expend"];
	if(!expendNode["Amount"].isNull())
		bankSummaryInfo_.expend.amount = expendNode["Amount"].asString();
	if(!expendNode["Count"].isNull())
		bankSummaryInfo_.expend.count = std::stoi(expendNode["Count"].asString());
	auto allTaxSteps = value["TaxSteps"]["TaxSteps"];
	for (const auto &item : allTaxSteps)
		taxSteps_.push_back(item.asString());
	if(!value["EmployeeCount"].isNull())
		employeeCount_ = std::stoi(value["EmployeeCount"].asString());

}

std::vector<std::string> GetPeriodInfoResult::getTaxSteps()const
{
	return taxSteps_;
}

GetPeriodInfoResult::InvoiceInfo GetPeriodInfoResult::getInvoiceInfo()const
{
	return invoiceInfo_;
}

GetPeriodInfoResult::BankSummaryInfo GetPeriodInfoResult::getBankSummaryInfo()const
{
	return bankSummaryInfo_;
}

int GetPeriodInfoResult::getEmployeeCount()const
{
	return employeeCount_;
}

