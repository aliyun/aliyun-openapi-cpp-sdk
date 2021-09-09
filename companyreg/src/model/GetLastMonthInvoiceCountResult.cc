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

#include <alibabacloud/companyreg/model/GetLastMonthInvoiceCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetLastMonthInvoiceCountResult::GetLastMonthInvoiceCountResult() :
	ServiceResult()
{}

GetLastMonthInvoiceCountResult::GetLastMonthInvoiceCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLastMonthInvoiceCountResult::~GetLastMonthInvoiceCountResult()
{}

void GetLastMonthInvoiceCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto invoiceIncomeNode = value["InvoiceIncome"];
	if(!invoiceIncomeNode["Amount"].isNull())
		invoiceIncome_.amount = invoiceIncomeNode["Amount"].asString();
	if(!invoiceIncomeNode["AmountWithTax"].isNull())
		invoiceIncome_.amountWithTax = invoiceIncomeNode["AmountWithTax"].asString();
	if(!invoiceIncomeNode["Count"].isNull())
		invoiceIncome_.count = std::stoi(invoiceIncomeNode["Count"].asString());
	if(!invoiceIncomeNode["TaxAmount"].isNull())
		invoiceIncome_.taxAmount = invoiceIncomeNode["TaxAmount"].asString();
	auto invoiceOutNode = value["InvoiceOut"];
	if(!invoiceOutNode["Amount"].isNull())
		invoiceOut_.amount = invoiceOutNode["Amount"].asString();
	if(!invoiceOutNode["AmountWithTax"].isNull())
		invoiceOut_.amountWithTax = invoiceOutNode["AmountWithTax"].asString();
	if(!invoiceOutNode["Count"].isNull())
		invoiceOut_.count = std::stoi(invoiceOutNode["Count"].asString());
	if(!invoiceOutNode["TaxAmount"].isNull())
		invoiceOut_.taxAmount = invoiceOutNode["TaxAmount"].asString();

}

GetLastMonthInvoiceCountResult::InvoiceOut GetLastMonthInvoiceCountResult::getInvoiceOut()const
{
	return invoiceOut_;
}

GetLastMonthInvoiceCountResult::InvoiceIncome GetLastMonthInvoiceCountResult::getInvoiceIncome()const
{
	return invoiceIncome_;
}

