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

#include <alibabacloud/aliyuncvc/model/ListCommoditiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

ListCommoditiesResult::ListCommoditiesResult() :
	ServiceResult()
{}

ListCommoditiesResult::ListCommoditiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCommoditiesResult::~ListCommoditiesResult()
{}

void ListCommoditiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allCommoditiesNode = dataNode["Commodities"]["Commodity"];
	for (auto dataNodeCommoditiesCommodity : allCommoditiesNode)
	{
		Data::Commodity commodityObject;
		if(!dataNodeCommoditiesCommodity["EndTime"].isNull())
			commodityObject.endTime = dataNodeCommoditiesCommodity["EndTime"].asString();
		if(!dataNodeCommoditiesCommodity["Instancepropertyvalue"].isNull())
			commodityObject.instancepropertyvalue = dataNodeCommoditiesCommodity["Instancepropertyvalue"].asString();
		if(!dataNodeCommoditiesCommodity["StartTime"].isNull())
			commodityObject.startTime = dataNodeCommoditiesCommodity["StartTime"].asString();
		data_.commodities.push_back(commodityObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListCommoditiesResult::getMessage()const
{
	return message_;
}

ListCommoditiesResult::Data ListCommoditiesResult::getData()const
{
	return data_;
}

int ListCommoditiesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListCommoditiesResult::getSuccess()const
{
	return success_;
}

