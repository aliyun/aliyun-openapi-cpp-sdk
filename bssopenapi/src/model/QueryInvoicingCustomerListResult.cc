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

#include <alibabacloud/bssopenapi/model/QueryInvoicingCustomerListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryInvoicingCustomerListResult::QueryInvoicingCustomerListResult() :
	ServiceResult()
{}

QueryInvoicingCustomerListResult::QueryInvoicingCustomerListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryInvoicingCustomerListResult::~QueryInvoicingCustomerListResult()
{}

void QueryInvoicingCustomerListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allCustomerInvoiceList = value["CustomerInvoiceList"]["CustomerInvoice"];
	for (auto value : allCustomerInvoiceList)
	{
		Data::CustomerInvoice customerInvoiceObject;
		if(!value["Id"].isNull())
			customerInvoiceObject.id = std::stol(value["Id"].asString());
		if(!value["UserId"].isNull())
			customerInvoiceObject.userId = std::stol(value["UserId"].asString());
		if(!value["UserNick"].isNull())
			customerInvoiceObject.userNick = value["UserNick"].asString();
		if(!value["InvoiceTitle"].isNull())
			customerInvoiceObject.invoiceTitle = value["InvoiceTitle"].asString();
		if(!value["CustomerType"].isNull())
			customerInvoiceObject.customerType = std::stol(value["CustomerType"].asString());
		if(!value["TaxpayerType"].isNull())
			customerInvoiceObject.taxpayerType = std::stol(value["TaxpayerType"].asString());
		if(!value["Bank"].isNull())
			customerInvoiceObject.bank = value["Bank"].asString();
		if(!value["BankNo"].isNull())
			customerInvoiceObject.bankNo = value["BankNo"].asString();
		if(!value["OperatingLicenseAddress"].isNull())
			customerInvoiceObject.operatingLicenseAddress = value["OperatingLicenseAddress"].asString();
		if(!value["OperatingLicensePhone"].isNull())
			customerInvoiceObject.operatingLicensePhone = value["OperatingLicensePhone"].asString();
		if(!value["RegisterNo"].isNull())
			customerInvoiceObject.registerNo = value["RegisterNo"].asString();
		if(!value["StartCycle"].isNull())
			customerInvoiceObject.startCycle = std::stol(value["StartCycle"].asString());
		if(!value["Status"].isNull())
			customerInvoiceObject.status = std::stol(value["Status"].asString());
		if(!value["GmtCreate"].isNull())
			customerInvoiceObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["TaxationLicense"].isNull())
			customerInvoiceObject.taxationLicense = value["TaxationLicense"].asString();
		if(!value["AdjustType"].isNull())
			customerInvoiceObject.adjustType = std::stol(value["AdjustType"].asString());
		if(!value["EndCycle"].isNull())
			customerInvoiceObject.endCycle = std::stol(value["EndCycle"].asString());
		if(!value["TitleChangeInstructions"].isNull())
			customerInvoiceObject.titleChangeInstructions = value["TitleChangeInstructions"].asString();
		if(!value["IssueType"].isNull())
			customerInvoiceObject.issueType = std::stol(value["IssueType"].asString());
		if(!value["Type"].isNull())
			customerInvoiceObject.type = std::stol(value["Type"].asString());
		if(!value["DefaultRemark"].isNull())
			customerInvoiceObject.defaultRemark = value["DefaultRemark"].asString();
		data_.customerInvoiceList.push_back(customerInvoiceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryInvoicingCustomerListResult::getMessage()const
{
	return message_;
}

QueryInvoicingCustomerListResult::Data QueryInvoicingCustomerListResult::getData()const
{
	return data_;
}

std::string QueryInvoicingCustomerListResult::getCode()const
{
	return code_;
}

bool QueryInvoicingCustomerListResult::getSuccess()const
{
	return success_;
}

