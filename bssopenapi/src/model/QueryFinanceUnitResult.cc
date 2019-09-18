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

#include <alibabacloud/bssopenapi/model/QueryFinanceUnitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryFinanceUnitResult::QueryFinanceUnitResult() :
	ServiceResult()
{}

QueryFinanceUnitResult::QueryFinanceUnitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFinanceUnitResult::~QueryFinanceUnitResult()
{}

void QueryFinanceUnitResult::parse(const std::string &payload)
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
	auto allFinanceUnitDtoList = value["FinanceUnitDtoList"]["FinanceUnitDtoListItem"];
	for (auto value : allFinanceUnitDtoList)
	{
		Data::FinanceUnitDtoListItem financeUnitDtoListItemObject;
		if(!value["OwnerUid"].isNull())
			financeUnitDtoListItemObject.ownerUid = std::stol(value["OwnerUid"].asString());
		if(!value["ParentUnitId"].isNull())
			financeUnitDtoListItemObject.parentUnitId = std::stol(value["ParentUnitId"].asString());
		if(!value["UnitId"].isNull())
			financeUnitDtoListItemObject.unitId = std::stol(value["UnitId"].asString());
		if(!value["UnitName"].isNull())
			financeUnitDtoListItemObject.unitName = value["UnitName"].asString();
		data_.financeUnitDtoList.push_back(financeUnitDtoListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryFinanceUnitResult::getMessage()const
{
	return message_;
}

QueryFinanceUnitResult::Data QueryFinanceUnitResult::getData()const
{
	return data_;
}

std::string QueryFinanceUnitResult::getCode()const
{
	return code_;
}

bool QueryFinanceUnitResult::getSuccess()const
{
	return success_;
}

