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

#include <alibabacloud/trademark/model/SearchTmOnsalesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

SearchTmOnsalesResult::SearchTmOnsalesResult() :
	ServiceResult()
{}

SearchTmOnsalesResult::SearchTmOnsalesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTmOnsalesResult::~SearchTmOnsalesResult()
{}

void SearchTmOnsalesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrademarksNode = value["Trademarks"]["Trademark"];
	for (auto valueTrademarksTrademark : allTrademarksNode)
	{
		Trademark trademarksObject;
		if(!valueTrademarksTrademark["Uid"].isNull())
			trademarksObject.uid = valueTrademarksTrademark["Uid"].asString();
		if(!valueTrademarksTrademark["TrademarkName"].isNull())
			trademarksObject.trademarkName = valueTrademarksTrademark["TrademarkName"].asString();
		if(!valueTrademarksTrademark["RegistrationNumber"].isNull())
			trademarksObject.registrationNumber = valueTrademarksTrademark["RegistrationNumber"].asString();
		if(!valueTrademarksTrademark["Classification"].isNull())
			trademarksObject.classification = valueTrademarksTrademark["Classification"].asString();
		if(!valueTrademarksTrademark["Icon"].isNull())
			trademarksObject.icon = valueTrademarksTrademark["Icon"].asString();
		if(!valueTrademarksTrademark["ProductCode"].isNull())
			trademarksObject.productCode = valueTrademarksTrademark["ProductCode"].asString();
		if(!valueTrademarksTrademark["OrderPrice"].isNull())
			trademarksObject.orderPrice = std::stol(valueTrademarksTrademark["OrderPrice"].asString());
		if(!valueTrademarksTrademark["ProductDesc"].isNull())
			trademarksObject.productDesc = valueTrademarksTrademark["ProductDesc"].asString();
		if(!valueTrademarksTrademark["PartnerCode"].isNull())
			trademarksObject.partnerCode = valueTrademarksTrademark["PartnerCode"].asString();
		if(!valueTrademarksTrademark["Status"].isNull())
			trademarksObject.status = std::stol(valueTrademarksTrademark["Status"].asString());
		trademarks_.push_back(trademarksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNumber"].isNull())
		totalPageNumber_ = std::stoi(value["TotalPageNumber"].asString());

}

int SearchTmOnsalesResult::getTotalCount()const
{
	return totalCount_;
}

int SearchTmOnsalesResult::getPageSize()const
{
	return pageSize_;
}

int SearchTmOnsalesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<SearchTmOnsalesResult::Trademark> SearchTmOnsalesResult::getTrademarks()const
{
	return trademarks_;
}

int SearchTmOnsalesResult::getTotalPageNumber()const
{
	return totalPageNumber_;
}

