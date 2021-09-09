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

#include <alibabacloud/companyreg/model/ListLastMonthInvoiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListLastMonthInvoiceResult::ListLastMonthInvoiceResult() :
	ServiceResult()
{}

ListLastMonthInvoiceResult::ListLastMonthInvoiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLastMonthInvoiceResult::~ListLastMonthInvoiceResult()
{}

void ListLastMonthInvoiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Amount"].isNull())
			dataObject.amount = valueDataDataItem["Amount"].asString();
		if(!valueDataDataItem["Date"].isNull())
			dataObject.date = valueDataDataItem["Date"].asString();
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = std::stol(valueDataDataItem["Id"].asString());
		if(!valueDataDataItem["IsSaveVoucher"].isNull())
			dataObject.isSaveVoucher = valueDataDataItem["IsSaveVoucher"].asString() == "true";
		if(!valueDataDataItem["OrgName"].isNull())
			dataObject.orgName = valueDataDataItem["OrgName"].asString();
		if(!valueDataDataItem["ProductName"].isNull())
			dataObject.productName = valueDataDataItem["ProductName"].asString();
		if(!valueDataDataItem["Tax"].isNull())
			dataObject.tax = valueDataDataItem["Tax"].asString();
		if(!valueDataDataItem["TaxAndAmount"].isNull())
			dataObject.taxAndAmount = valueDataDataItem["TaxAndAmount"].asString();
		if(!valueDataDataItem["Type"].isNull())
			dataObject.type = valueDataDataItem["Type"].asString();
		if(!valueDataDataItem["Url"].isNull())
			dataObject.url = valueDataDataItem["Url"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Amount"].isNull())
		amount_ = value["Amount"].asString();
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string ListLastMonthInvoiceResult::getAmount()const
{
	return amount_;
}

std::vector<ListLastMonthInvoiceResult::DataItem> ListLastMonthInvoiceResult::getData()const
{
	return data_;
}

int ListLastMonthInvoiceResult::getCount()const
{
	return count_;
}

