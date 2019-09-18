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

#include <alibabacloud/bssopenapi/model/QueryFinanceUnitResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryFinanceUnitResourceResult::QueryFinanceUnitResourceResult() :
	ServiceResult()
{}

QueryFinanceUnitResourceResult::QueryFinanceUnitResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFinanceUnitResourceResult::~QueryFinanceUnitResourceResult()
{}

void QueryFinanceUnitResourceResult::parse(const std::string &payload)
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
	auto allResourceInstanceDtoList = value["ResourceInstanceDtoList"]["ResourceInstanceList"];
	for (auto value : allResourceInstanceDtoList)
	{
		Data::ResourceInstanceList resourceInstanceListObject;
		if(!value["ResourceUserId"].isNull())
			resourceInstanceListObject.resourceUserId = std::stol(value["ResourceUserId"].asString());
		if(!value["ResourceId"].isNull())
			resourceInstanceListObject.resourceId = std::stol(value["ResourceId"].asString());
		if(!value["CommodityCode"].isNull())
			resourceInstanceListObject.commodityCode = value["CommodityCode"].asString();
		if(!value["ResourceUserName"].isNull())
			resourceInstanceListObject.resourceUserName = value["ResourceUserName"].asString();
		if(!value["CommodityName"].isNull())
			resourceInstanceListObject.commodityName = value["CommodityName"].asString();
		if(!value["ResourceGroup"].isNull())
			resourceInstanceListObject.resourceGroup = value["ResourceGroup"].asString();
		if(!value["ResourceTag"].isNull())
			resourceInstanceListObject.resourceTag = value["ResourceTag"].asString();
		if(!value["ResourceNick"].isNull())
			resourceInstanceListObject.resourceNick = value["ResourceNick"].asString();
		if(!value["ResourceType"].isNull())
			resourceInstanceListObject.resourceType = value["ResourceType"].asString();
		if(!value["ResourceStatus"].isNull())
			resourceInstanceListObject.resourceStatus = value["ResourceStatus"].asString();
		if(!value["RelatedResources"].isNull())
			resourceInstanceListObject.relatedResources = value["RelatedResources"].asString();
		if(!value["ApportionCode"].isNull())
			resourceInstanceListObject.apportionCode = value["ApportionCode"].asString();
		if(!value["ApportionName"].isNull())
			resourceInstanceListObject.apportionName = value["ApportionName"].asString();
		data_.resourceInstanceDtoList.push_back(resourceInstanceListObject);
	}
	auto financeUnitNode = dataNode["FinanceUnit"];
	if(!financeUnitNode["OwnerUid"].isNull())
		data_.financeUnit.ownerUid = std::stol(financeUnitNode["OwnerUid"].asString());
	if(!financeUnitNode["ParentUnitId"].isNull())
		data_.financeUnit.parentUnitId = std::stol(financeUnitNode["ParentUnitId"].asString());
	if(!financeUnitNode["UnitId"].isNull())
		data_.financeUnit.unitId = std::stol(financeUnitNode["UnitId"].asString());
	if(!financeUnitNode["UnitName"].isNull())
		data_.financeUnit.unitName = financeUnitNode["UnitName"].asString();
	auto financeUnitStatisInfoNode = dataNode["FinanceUnitStatisInfo"];
	if(!financeUnitStatisInfoNode["ResourceCount"].isNull())
		data_.financeUnitStatisInfo.resourceCount = std::stol(financeUnitStatisInfoNode["ResourceCount"].asString());
	if(!financeUnitStatisInfoNode["ResourceGroupCount"].isNull())
		data_.financeUnitStatisInfo.resourceGroupCount = std::stol(financeUnitStatisInfoNode["ResourceGroupCount"].asString());
	if(!financeUnitStatisInfoNode["SubUnitCount"].isNull())
		data_.financeUnitStatisInfo.subUnitCount = std::stol(financeUnitStatisInfoNode["SubUnitCount"].asString());
	if(!financeUnitStatisInfoNode["UserCount"].isNull())
		data_.financeUnitStatisInfo.userCount = std::stol(financeUnitStatisInfoNode["UserCount"].asString());
	if(!financeUnitStatisInfoNode["TotalResourceCount"].isNull())
		data_.financeUnitStatisInfo.totalResourceCount = std::stol(financeUnitStatisInfoNode["TotalResourceCount"].asString());
	if(!financeUnitStatisInfoNode["TotalUserCount"].isNull())
		data_.financeUnitStatisInfo.totalUserCount = std::stol(financeUnitStatisInfoNode["TotalUserCount"].asString());
	if(!financeUnitStatisInfoNode["TotalResourceGroupCount"].isNull())
		data_.financeUnitStatisInfo.totalResourceGroupCount = std::stol(financeUnitStatisInfoNode["TotalResourceGroupCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryFinanceUnitResourceResult::getMessage()const
{
	return message_;
}

QueryFinanceUnitResourceResult::Data QueryFinanceUnitResourceResult::getData()const
{
	return data_;
}

std::string QueryFinanceUnitResourceResult::getCode()const
{
	return code_;
}

bool QueryFinanceUnitResourceResult::getSuccess()const
{
	return success_;
}

