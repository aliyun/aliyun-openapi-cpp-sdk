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

#include <alibabacloud/cusanalytic_sc_online/model/GetAnalyzeCommodityDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetAnalyzeCommodityDataResult::GetAnalyzeCommodityDataResult() :
	ServiceResult()
{}

GetAnalyzeCommodityDataResult::GetAnalyzeCommodityDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAnalyzeCommodityDataResult::~GetAnalyzeCommodityDataResult()
{}

void GetAnalyzeCommodityDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAnalyzeCommodityItems = value["AnalyzeCommodityItems"]["AnalyzeCommodityItem"];
	for (auto value : allAnalyzeCommodityItems)
	{
		AnalyzeCommodityItem analyzeCommodityItemsObject;
		if(!value["LocationNames"].isNull())
			analyzeCommodityItemsObject.locationNames = value["LocationNames"].asString();
		if(!value["SupportCount"].isNull())
			analyzeCommodityItemsObject.supportCount = std::stol(value["SupportCount"].asString());
		if(!value["LocationIds"].isNull())
			analyzeCommodityItemsObject.locationIds = value["LocationIds"].asString();
		if(!value["ItemCount"].isNull())
			analyzeCommodityItemsObject.itemCount = std::stol(value["ItemCount"].asString());
		analyzeCommodityItems_.push_back(analyzeCommodityItemsObject);
	}
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<GetAnalyzeCommodityDataResult::AnalyzeCommodityItem> GetAnalyzeCommodityDataResult::getAnalyzeCommodityItems()const
{
	return analyzeCommodityItems_;
}

int GetAnalyzeCommodityDataResult::getPageSize()const
{
	return pageSize_;
}

int GetAnalyzeCommodityDataResult::getTotal()const
{
	return total_;
}

int GetAnalyzeCommodityDataResult::getPageIndex()const
{
	return pageIndex_;
}

