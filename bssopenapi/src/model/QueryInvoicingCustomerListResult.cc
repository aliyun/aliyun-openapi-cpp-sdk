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
	auto allCustomerInvoiceListNode = dataNode["CustomerInvoiceList"]["CustomerInvoice"];
	for (auto dataNodeCustomerInvoiceListCustomerInvoice : allCustomerInvoiceListNode)
	{
		Data::CustomerInvoice customerInvoiceObject;
		if(!dataNodeCustomerInvoiceListCustomerInvoice["Type"].isNull())
			customerInvoiceObject.type = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["Type"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["Status"].isNull())
			customerInvoiceObject.status = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["Status"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["AdjustType"].isNull())
			customerInvoiceObject.adjustType = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["AdjustType"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["Bank"].isNull())
			customerInvoiceObject.bank = dataNodeCustomerInvoiceListCustomerInvoice["Bank"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["StartCycle"].isNull())
			customerInvoiceObject.startCycle = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["StartCycle"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["TitleChangeInstructions"].isNull())
			customerInvoiceObject.titleChangeInstructions = dataNodeCustomerInvoiceListCustomerInvoice["TitleChangeInstructions"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["UserId"].isNull())
			customerInvoiceObject.userId = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["UserId"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["OperatingLicenseAddress"].isNull())
			customerInvoiceObject.operatingLicenseAddress = dataNodeCustomerInvoiceListCustomerInvoice["OperatingLicenseAddress"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["InvoiceTitle"].isNull())
			customerInvoiceObject.invoiceTitle = dataNodeCustomerInvoiceListCustomerInvoice["InvoiceTitle"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["UserNick"].isNull())
			customerInvoiceObject.userNick = dataNodeCustomerInvoiceListCustomerInvoice["UserNick"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["OperatingLicensePhone"].isNull())
			customerInvoiceObject.operatingLicensePhone = dataNodeCustomerInvoiceListCustomerInvoice["OperatingLicensePhone"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["EndCycle"].isNull())
			customerInvoiceObject.endCycle = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["EndCycle"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["DefaultRemark"].isNull())
			customerInvoiceObject.defaultRemark = dataNodeCustomerInvoiceListCustomerInvoice["DefaultRemark"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["TaxationLicense"].isNull())
			customerInvoiceObject.taxationLicense = dataNodeCustomerInvoiceListCustomerInvoice["TaxationLicense"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["RegisterNo"].isNull())
			customerInvoiceObject.registerNo = dataNodeCustomerInvoiceListCustomerInvoice["RegisterNo"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["GmtCreate"].isNull())
			customerInvoiceObject.gmtCreate = dataNodeCustomerInvoiceListCustomerInvoice["GmtCreate"].asString();
		if(!dataNodeCustomerInvoiceListCustomerInvoice["TaxpayerType"].isNull())
			customerInvoiceObject.taxpayerType = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["TaxpayerType"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["CustomerType"].isNull())
			customerInvoiceObject.customerType = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["CustomerType"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["IssueType"].isNull())
			customerInvoiceObject.issueType = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["IssueType"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["Id"].isNull())
			customerInvoiceObject.id = std::stol(dataNodeCustomerInvoiceListCustomerInvoice["Id"].asString());
		if(!dataNodeCustomerInvoiceListCustomerInvoice["BankNo"].isNull())
			customerInvoiceObject.bankNo = dataNodeCustomerInvoiceListCustomerInvoice["BankNo"].asString();
		data_.customerInvoiceList.push_back(customerInvoiceObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

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

