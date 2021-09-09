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

#include <alibabacloud/companyreg/model/ScanInvoiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ScanInvoiceResult::ScanInvoiceResult() :
	ServiceResult()
{}

ScanInvoiceResult::ScanInvoiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ScanInvoiceResult::~ScanInvoiceResult()
{}

void ScanInvoiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto invoiceNode = value["Invoice"];
	if(!invoiceNode["Id"].isNull())
		invoice_.id = std::stol(invoiceNode["Id"].asString());
	if(!invoiceNode["BaseTotalAmountWithoutTax"].isNull())
		invoice_.baseTotalAmountWithoutTax = invoiceNode["BaseTotalAmountWithoutTax"].asString();
	if(!invoiceNode["InvoiceNo"].isNull())
		invoice_.invoiceNo = invoiceNode["InvoiceNo"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["IsFee"].isNull())
		isFee_ = value["IsFee"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ScanInvoiceResult::Invoice ScanInvoiceResult::getInvoice()const
{
	return invoice_;
}

bool ScanInvoiceResult::getIsFee()const
{
	return isFee_;
}

std::string ScanInvoiceResult::getCode()const
{
	return code_;
}

bool ScanInvoiceResult::getSuccess()const
{
	return success_;
}

