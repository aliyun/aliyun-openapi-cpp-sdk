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

#include <alibabacloud/bssopenapi/model/QueryCostUnitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryCostUnitResult::QueryCostUnitResult() :
	ServiceResult()
{}

QueryCostUnitResult::QueryCostUnitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCostUnitResult::~QueryCostUnitResult()
{}

void QueryCostUnitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allCostUnitDtoListNode = dataNode["CostUnitDtoList"]["CostUnitDtoListItem"];
	for (auto dataNodeCostUnitDtoListCostUnitDtoListItem : allCostUnitDtoListNode)
	{
		Data::CostUnitDtoListItem costUnitDtoListItemObject;
		if(!dataNodeCostUnitDtoListCostUnitDtoListItem["ParentUnitId"].isNull())
			costUnitDtoListItemObject.parentUnitId = std::stol(dataNodeCostUnitDtoListCostUnitDtoListItem["ParentUnitId"].asString());
		if(!dataNodeCostUnitDtoListCostUnitDtoListItem["UnitName"].isNull())
			costUnitDtoListItemObject.unitName = dataNodeCostUnitDtoListCostUnitDtoListItem["UnitName"].asString();
		if(!dataNodeCostUnitDtoListCostUnitDtoListItem["UnitId"].isNull())
			costUnitDtoListItemObject.unitId = std::stol(dataNodeCostUnitDtoListCostUnitDtoListItem["UnitId"].asString());
		if(!dataNodeCostUnitDtoListCostUnitDtoListItem["OwnerUid"].isNull())
			costUnitDtoListItemObject.ownerUid = std::stol(dataNodeCostUnitDtoListCostUnitDtoListItem["OwnerUid"].asString());
		data_.costUnitDtoList.push_back(costUnitDtoListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryCostUnitResult::getMessage()const
{
	return message_;
}

QueryCostUnitResult::Data QueryCostUnitResult::getData()const
{
	return data_;
}

std::string QueryCostUnitResult::getCode()const
{
	return code_;
}

bool QueryCostUnitResult::getSuccess()const
{
	return success_;
}

