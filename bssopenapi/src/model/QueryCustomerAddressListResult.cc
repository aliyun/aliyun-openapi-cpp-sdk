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
	auto allCustomerInvoiceAddressListNode = dataNode["CustomerInvoiceAddressList"]["CustomerInvoiceAddress"];
	for (auto dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress : allCustomerInvoiceAddressListNode)
	{
		Data::CustomerInvoiceAddress customerInvoiceAddressObject;
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Addressee"].isNull())
			customerInvoiceAddressObject.addressee = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Addressee"].asString();
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["PostalCode"].isNull())
			customerInvoiceAddressObject.postalCode = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["PostalCode"].asString();
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["UserId"].isNull())
			customerInvoiceAddressObject.userId = std::stol(dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["UserId"].asString());
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["City"].isNull())
			customerInvoiceAddressObject.city = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["City"].asString();
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["UserNick"].isNull())
			customerInvoiceAddressObject.userNick = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["UserNick"].asString();
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Street"].isNull())
			customerInvoiceAddressObject.street = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Street"].asString();
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Phone"].isNull())
			customerInvoiceAddressObject.phone = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Phone"].asString();
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["County"].isNull())
			customerInvoiceAddressObject.county = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["County"].asString();
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["BizType"].isNull())
			customerInvoiceAddressObject.bizType = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["BizType"].asString();
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["DeliveryAddress"].isNull())
			customerInvoiceAddressObject.deliveryAddress = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["DeliveryAddress"].asString();
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Id"].isNull())
			customerInvoiceAddressObject.id = std::stol(dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Id"].asString());
		if(!dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Province"].isNull())
			customerInvoiceAddressObject.province = dataNodeCustomerInvoiceAddressListCustomerInvoiceAddress["Province"].asString();
		data_.customerInvoiceAddressList.push_back(customerInvoiceAddressObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

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

