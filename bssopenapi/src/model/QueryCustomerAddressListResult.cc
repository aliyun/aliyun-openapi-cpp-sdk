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

#include <alibabacloud/bssopenapi/model/QueryCustomerAddressListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryCustomerAddressListResult::QueryCustomerAddressListResult() :
	ServiceResult()
{}

QueryCustomerAddressListResult::QueryCustomerAddressListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCustomerAddressListResult::~QueryCustomerAddressListResult()
{}

void QueryCustomerAddressListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allCustomerInvoiceAddressList = value["CustomerInvoiceAddressList"]["CustomerInvoiceAddress"];
	for (auto value : allCustomerInvoiceAddressList)
	{
		Data::CustomerInvoiceAddress customerInvoiceAddressObject;
		if(!value["Id"].isNull())
			customerInvoiceAddressObject.id = std::stol(value["Id"].asString());
		if(!value["UserId"].isNull())
			customerInvoiceAddressObject.userId = std::stol(value["UserId"].asString());
		if(!value["UserNick"].isNull())
			customerInvoiceAddressObject.userNick = value["UserNick"].asString();
		if(!value["Addressee"].isNull())
			customerInvoiceAddressObject.addressee = value["Addressee"].asString();
		if(!value["Province"].isNull())
			customerInvoiceAddressObject.province = value["Province"].asString();
		if(!value["City"].isNull())
			customerInvoiceAddressObject.city = value["City"].asString();
		if(!value["County"].isNull())
			customerInvoiceAddressObject.county = value["County"].asString();
		if(!value["Street"].isNull())
			customerInvoiceAddressObject.street = value["Street"].asString();
		if(!value["PostalCode"].isNull())
			customerInvoiceAddressObject.postalCode = value["PostalCode"].asString();
		if(!value["Phone"].isNull())
			customerInvoiceAddressObject.phone = value["Phone"].asString();
		if(!value["BizType"].isNull())
			customerInvoiceAddressObject.bizType = value["BizType"].asString();
		if(!value["DeliveryAddress"].isNull())
			customerInvoiceAddressObject.deliveryAddress = value["DeliveryAddress"].asString();
		data_.customerInvoiceAddressList.push_back(customerInvoiceAddressObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryCustomerAddressListResult::getMessage()const
{
	return message_;
}

QueryCustomerAddressListResult::Data QueryCustomerAddressListResult::getData()const
{
	return data_;
}

std::string QueryCustomerAddressListResult::getCode()const
{
	return code_;
}

bool QueryCustomerAddressListResult::getSuccess()const
{
	return success_;
}

