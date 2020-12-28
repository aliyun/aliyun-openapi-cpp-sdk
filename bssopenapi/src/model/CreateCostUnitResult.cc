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

#include <alibabacloud/bssopenapi/model/CreateCostUnitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

CreateCostUnitResult::CreateCostUnitResult() :
	ServiceResult()
{}

CreateCostUnitResult::CreateCostUnitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCostUnitResult::~CreateCostUnitResult()
{}

void CreateCostUnitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allCostUnitDtoListNode = dataNode["CostUnitDtoList"]["CostUnitDtoListItem"];
	for (auto dataNodeCostUnitDtoListCostUnitDtoListItem : allCostUnitDtoListNode)
	{
		Data::CostUnitDtoListItem costUnitDtoListItemObject;
		if(!dataNodeCostUnitDtoListCostUnitDtoListItem["UnitId"].isNull())
			costUnitDtoListItemObject.unitId = std::stol(dataNodeCostUnitDtoListCostUnitDtoListItem["UnitId"].asString());
		if(!dataNodeCostUnitDtoListCostUnitDtoListItem["ParentUnitId"].isNull())
			costUnitDtoListItemObject.parentUnitId = std::stol(dataNodeCostUnitDtoListCostUnitDtoListItem["ParentUnitId"].asString());
		if(!dataNodeCostUnitDtoListCostUnitDtoListItem["OwnerUid"].isNull())
			costUnitDtoListItemObject.ownerUid = std::stol(dataNodeCostUnitDtoListCostUnitDtoListItem["OwnerUid"].asString());
		if(!dataNodeCostUnitDtoListCostUnitDtoListItem["UnitName"].isNull())
			costUnitDtoListItemObject.unitName = dataNodeCostUnitDtoListCostUnitDtoListItem["UnitName"].asString();
		data_.costUnitDtoList.push_back(costUnitDtoListItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateCostUnitResult::getMessage()const
{
	return message_;
}

CreateCostUnitResult::Data CreateCostUnitResult::getData()const
{
	return data_;
}

std::string CreateCostUnitResult::getCode()const
{
	return code_;
}

bool CreateCostUnitResult::getSuccess()const
{
	return success_;
}

