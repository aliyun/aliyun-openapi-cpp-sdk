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

#include <alibabacloud/companyreg/model/ListBookkeepingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListBookkeepingsResult::ListBookkeepingsResult() :
	ServiceResult()
{}

ListBookkeepingsResult::ListBookkeepingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBookkeepingsResult::~ListBookkeepingsResult()
{}

void ListBookkeepingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBookkeepingsNode = value["Bookkeepings"]["Bookkeeping"];
	for (auto valueBookkeepingsBookkeeping : allBookkeepingsNode)
	{
		Bookkeeping bookkeepingsObject;
		if(!valueBookkeepingsBookkeeping["BizId"].isNull())
			bookkeepingsObject.bizId = valueBookkeepingsBookkeeping["BizId"].asString();
		if(!valueBookkeepingsBookkeeping["CompanyName"].isNull())
			bookkeepingsObject.companyName = valueBookkeepingsBookkeeping["CompanyName"].asString();
		if(!valueBookkeepingsBookkeeping["OrderId"].isNull())
			bookkeepingsObject.orderId = valueBookkeepingsBookkeeping["OrderId"].asString();
		if(!valueBookkeepingsBookkeeping["Status"].isNull())
			bookkeepingsObject.status = std::stoi(valueBookkeepingsBookkeeping["Status"].asString());
		if(!valueBookkeepingsBookkeeping["Renew"].isNull())
			bookkeepingsObject.renew = valueBookkeepingsBookkeeping["Renew"].asString() == "true";
		if(!valueBookkeepingsBookkeeping["Note"].isNull())
			bookkeepingsObject.note = valueBookkeepingsBookkeeping["Note"].asString();
		if(!valueBookkeepingsBookkeeping["CommodityType"].isNull())
			bookkeepingsObject.commodityType = valueBookkeepingsBookkeeping["CommodityType"].asString();
		bookkeepings_.push_back(bookkeepingsObject);
	}
	if(!value["TotalItemNumber"].isNull())
		totalItemNumber_ = std::stoi(value["TotalItemNumber"].asString());
	if(!value["CurrentPageNumber"].isNull())
		currentPageNumber_ = std::stoi(value["CurrentPageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNumber"].isNull())
		totalPageNumber_ = std::stoi(value["TotalPageNumber"].asString());

}

int ListBookkeepingsResult::getTotalItemNumber()const
{
	return totalItemNumber_;
}

int ListBookkeepingsResult::getPageSize()const
{
	return pageSize_;
}

int ListBookkeepingsResult::getCurrentPageNumber()const
{
	return currentPageNumber_;
}

int ListBookkeepingsResult::getTotalPageNumber()const
{
	return totalPageNumber_;
}

std::vector<ListBookkeepingsResult::Bookkeeping> ListBookkeepingsResult::getBookkeepings()const
{
	return bookkeepings_;
}

